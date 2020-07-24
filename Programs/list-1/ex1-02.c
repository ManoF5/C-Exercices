#include<stdio.h>
#include<stdlib.h>

main(){
//VARIABLES
    char name[30];
    float fixed_salary, sales_month,salary;
//INPUT
    printf("Input your name: ");
    gets(name);
    printf("Fixed salary: ");
    scanf("%f", &fixed_salary);
    printf("Sales in the month: ");
    scanf("%f", &sales_month);
//MATH
    salary = fixed_salary + (sales_month * 0.15);
//OUTPUT
    printf("\nHello %s \nFixed Salary:$%0.2f \nSales percentages:$%0.2f \nTotal Salary:$%0.2f \n",name, fixed_salary, sales_month, salary);

    system("PAUSE");
}