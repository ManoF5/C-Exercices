/* A large company wants to know who is the most recent employee and who is the oldest. 
Develop one code to read a undetermined number of information 
containing the employee number and the number of months of work for this employee and print the most recent an */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIABLES
    int i = 0, employees, employee_number, months_work;
    int newest_employee = 1000, newest_number, oldest_employee = 0, oldest_number;
//INPUT
    printf("number of employees(MAX.20): ");
    scanf("%d", &employees);
    do{
        printf("\nEmployee number: ");
        scanf("%d", &employee_number);
        printf("Number of months work: ");
        scanf("%d", &months_work);
        if(newest_employee > employees){
            newest_employee = employees;
            newest_number = employee_number;
        }
        if(oldest_employee < employees){
            oldest_employee = employees;
            oldest_number = employee_number;
        }
        i++;
    }while(i < employees);
//OUTPUT
    printf("\nNewest employee:%d \n Oldest employee:%d \n", newest_employee, oldest_number);
    system("PAUSE");
}