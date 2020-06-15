/* One company decided to register all employees in one Computer System.
You hired to develop this system. We will need to store the following employee data.

CODE - code of employee
NAME - name of  employee(max. of 40char)
OFFICE - employee position(max. of 20char)
SALARY - salary amount
ADDRESS - address of employee(street, number, city, state, zip code)
PHONE - contact phone of employee
STATUS - " "(blank space) -> active employee
         "*"(asterisk) -> removed employee       
         
The system must have the options for:
A - include employee
B - employee consultation by name or code
C - change in employee data
D - employee deletion
E - employee report         */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct data{
    int code;
    char name[40];
    char office[20];
    float salary;
    char adddress[150];
    int phone;
    // char status;
};
int const num = 20;
struct data employees[num];

void start(){  //INITIALIZATION

    int i;
    for(i = 0;i < num;i++){
        employees[i].code = 0;
        strcpy(employees[i].name," ");
        strcpy(employees[i].office," ");
        employees[i].salary = 0;
        strcpy(employees[i].adddress," ");
        employees[i].phone = 0;
    }
}

main(){        //MENU
    start();

    int opt;
    while(opt != 6){
        printf("\n \n--------Menu--------\n \n");
        printf("1- Include employee \n");
        printf("2- Employee consultation(by name or code) \n");
        printf("3- Change in employee data \n");
        printf("4- Employee deletion \n");
        printf("5- Employee report \n");
        printf("6- Exit \n \n");
        printf("Type the option: ");
        scanf("%d", &opt);
    }
    switch(opt){
        case 1 :{

        }
        case 2 :{
            
        }
        case 3 :{
            
        }
        case 4 :{
            
        }
        case 5 :{
            
        }
        case 6 :{
            printf("Going out...");
            break;
        }
        default : printf("INVALID NUMBER \n");
    }

}