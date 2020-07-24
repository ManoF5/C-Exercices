/* A company that decides to adjust the employees salary according to the following criteria.   
a) 50% for the employee that earn less than three minimum wages
b) 20% for the employee that earn less than between three and ten minimum wages
c) 15% for the employee that earn less than between ten and twenty minimum wages
d) 10% for other employees
   Calculate the new salary. Write the name of the employee, the adjustment and your new salary. */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIABLES
    char name[30];
    float salary, new_salary;
    float minimum_wages = 1.045;
//INPUT
    printf("Type your name: ");
    gets(name);
    printf("Type your salary: ");
    scanf("%f", &salary);
//OUTPUT
    if(salary < (minimum_wages * 3)){
        new_salary = salary * 1.50;
        printf("Name:%s\nSalary without adjustment:%0.2f \nAdjustment:50% \nSalary with adjustment:%0.2f", name, salary, new_salary);
    }else if(salary > (minimum_wages * 3) && salary < (minimum_wages * 10)){
        new_salary = salary * 1.20;
        printf("Name:%s\nSalary without adjustment:%0.2f \nAdjustment:20% \nSalary with adjustment:%0.2f", name, salary, new_salary);
    }else if(salary > (minimum_wages * 10) && salary < (minimum_wages * 20)){
        new_salary = salary * 1.15;
        printf("Name:%s\nSalary without adjustment:%0.2f \nAdjustment:15% \nSalary with adjustment:%0.2f", name, salary, new_salary);
    }else{
        new_salary = salary * 1.10;
        printf("Name:%s\nSalary without adjustment:%0.2f \nAdjustment:10% \nSalary with adjustment:%0.2f", name, salary, new_salary);
    }
    system("PAUSE");
}