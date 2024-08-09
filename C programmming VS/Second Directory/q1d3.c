#include <stdio.h>

struct emp
{
    int emp_id;
    char name[20];
    char dsgn[20];
    int basic_salary;
    int HRA;
    int DA;
};
int main()
{
    int n, i;
    printf("Enter Number of Employees : ");
    scanf("%d", &n);
    struct emp l[n];
    for (i = 0; i <n; i++)
    {
        printf("Enter Details of Employee %d\n", i + 1);
        printf("\nEnter Employee ID :");
        scanf("%d", &l[i].emp_id);
        printf("\nEnter Name : ");
        scanf("%s", &l[i].name);
        printf("\nEnter designation :");
        scanf("%s", &l[i].dsgn);
        printf("\nEnter basic salary :");
        scanf("%d", &l[i].basic_salary);
        printf("\nEnter HRA percentage :");
        scanf("%d", &l[i].HRA);
        printf("\nEnter Daily Allowance Percentage :");
        scanf("%d", &l[i].DA);
    }

    for (i = 0; i <n; i++)
    {
        printf("\nEmployee ID: %d, ", l[i].emp_id);
        printf("\nEmployee Name: %s", l[i].name);
        printf("\nEmployee Designation : %s", l[i].dsgn);
        printf("\nEmployee Basic Salary : %d", l[i].basic_salary);
        printf("\nEmployee HRA Percentage : %d", l[i].HRA);
        printf("\nEmployee Daily Allowance Percentage : %d \n\n", l[i].DA);
        printf("\nGross Salary : %.2f",  l[i].basic_salary+(l[i].HRA)*l[i].basic_salary/100.0+(l[i].DA)*l[i].basic_salary/100.0);
    }
    return 0;
}