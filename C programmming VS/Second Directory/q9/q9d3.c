#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the BST
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

// Preorder traversal
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Inorder traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Function to search for an element in the BST
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

// Function to find the smallest node in a tree
struct Node* findMin(struct Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL)
        return root;

    // Traverse the tree
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with one or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: get the inorder successor
        struct Node* temp = findMin(root->right);
        root->data = temp->data;  // Copy the inorder successor's content to this node
        root->right = deleteNode(root->right, temp->data); // Delete the inorder successor
    }
    return root;
}

// Function to display the BST structure (for clarity)
void displayTree(struct Node* root, int space) {
    if (root == NULL) {
        return;
    }

    // Increase distance between levels
    space += 5;

    // Process the right child first
    displayTree(root->right, space);

    // Print current node after space
    printf("\n");
    for (int i = 5; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", root->data);

    // Process the left child
    displayTree(root->left, space);
}


// Function to find the largest element
int findLargest(struct Node* root) {
    while (root && root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

// Function to find the smallest element
int findSmallest(struct Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

// Function to find the height of the BST
int findHeight(struct Node* root) {
    if (root == NULL)
        return -1; // Height of empty tree is -1
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

// Function to count the number of leaf nodes
int countLeafNodes(struct Node* root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main() {
    struct Node* root = NULL;
    int n, data, choice, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements of BST: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    printf("\nBST Created: \n");
    displayTree(root, 0);

    while (1) {
        printf("\n\nMAIN MENU\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Largest\n");
        printf("4. Smallest\n");
        printf("5. Height\n");
        printf("6. Count leaf nodes\n");
        printf("7. Display Tree\n");
        printf("8. Exit\n");
        printf("Enter option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert in BST: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;

            case 2:
                printf("Enter element to delete from BST: ");
                scanf("%d", &key);
                root = deleteNode(root, key);
                printf("Updated BST after deletion: \n");
                displayTree(root, 0);
                break;

            case 3:
                printf("Largest element in BST = %d\n", findLargest(root));
                break;

            case 4:
                printf("Smallest element in BST = %d\n", findSmallest(root));
                break;

            case 5:
                printf("Height of BST = %d\n", findHeight(root));
                break;

            case 6:
                printf("Number of leaf nodes = %d\n", countLeafNodes(root));
                break;

            case 7:
                printf("Current BST Structure: \n");
                displayTree(root, 0);
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid option! Please try again.\n");
        }
    }

    return 0;
}