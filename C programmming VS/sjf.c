#include <stdio.h>

// Structure to hold process details
typedef struct {
    int pid;       // Process ID
    int at;        // Arrival Time
    int bt;        // Burst Time
    int ct;        // Completion Time
    int tat;       // Turnaround Time
    int wt;        // Waiting Time
} Process;

void sortByArrival(Process p[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].at > p[j + 1].at) {
                Process temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void sjfScheduling(Process p[], int n) {
    sortByArrival(p, n);
    int completed = 0, currentTime = 0;
    float totalWT = 0, totalTAT = 0, totalCT = 0, totalBT = 0;

    while (completed < n) {
        int minBT = 9999, idx = -1;
        
        for (int i = 0; i < n; i++) {
            if (p[i].at <= currentTime && p[i].bt < minBT && p[i].ct == 0) {
                minBT = p[i].bt;
                idx = i;
            }
        }

        if (idx == -1) {
            currentTime++;
        } else {
            p[idx].ct = currentTime + p[idx].bt;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;

            totalWT += p[idx].wt;
            totalTAT += p[idx].tat;
            totalCT += p[idx].ct;
            totalBT += p[idx].bt;

            currentTime = p[idx].ct;
            completed++;
        }
    }

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt);
    }

    printf("\nAverage Burst Time: %.2f", totalBT / n);
    printf("\nAverage Turnaround Time: %.2f", totalTAT / n);
    printf("\nAverage Waiting Time: %.2f", totalWT / n);
    printf("\nAverage Completion Time: %.2f\n", totalCT / n);
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    Process p[n];
    printf("Enter Arrival Time and Burst Time for each process:\n");
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Process %d: ", p[i].pid);
        scanf("%d %d", &p[i].at, &p[i].bt);
    }

    sjfScheduling(p, n);
    return 0;
}