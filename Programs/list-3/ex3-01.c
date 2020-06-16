/* One company decided to register all employees in one Computer System.
You hired to develop this system. We will need to store the following employee data.

NAME - name of  employee(max. of 40char)
OFFICE - employee position(max. of 20char)
SALARY - salary amount
ADDRESS - address of employee(street, number, city, state, zip code)
PHONE - contact phone of employee
CODE - "true"  -> code available
         "false" -> code in use    
         
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
    char name[40];
    char office[20];
    float salary;
    char adddress[150];
    int phone;
    bool code;
    int code_num;
};
int const num = 50;
struct data employees[num];

void start(){  
 //INITIALIZATION
    int i;
    for(i = 0;i < num;i++){
        strcpy(employees[i].name," ");
        strcpy(employees[i].office," ");
        employees[i].salary = 0;
        strcpy(employees[i].adddress," ");
        employees[i].phone = 0;
        employees[i].code = true;
        employees[i].code_num = 0;
    }
}

void include(){
 //INCLUDE EMPLOYEE
    int i;
    printf("Create the employee code(1-50): ");
    scanf("%d", &i);
    if(employees[i].code){
        printf("Type the employee name: ");
        fflush(stdin);
        gets(employees[i].name);
        
        printf("Type the employee position: ");
        fflush(stdin);
        gets(employees[i].office);
        
        printf("Type the employee salary amount: ");
        fflush(stdin);
        scanf("%f", &employees[i].salary);

        printf("Type the employee address(street, number, city, state, zip code): ");
        fflush(stdin);
        gets(employees[i].adddress);

        printf("Type the employee phone: ");
        fflush(stdin);
        scanf("%d", &employees[i].phone);

        employees[i].code = false;
        employees[i].code_num = i;

    }else if(!employees[i].code){
        printf("The code-%d is in use \n", i);
        system("PAUSE");

    }else{
        printf("Invalid code");
        system("PAUSE");
    }
}

void consultation(){
//
    int i, opt;
    printf("Employee Consultation \n \n 1- By name \n By code \n \n");
    printf("Option:");
    scanf("%d", &opt);

    switch(opt){
        case 1:{
            printf("Type the name: ");


        }
        case 2 :{
            printf("Type the code: ");
            scanf("%d", &i);
            if(!employees[i].code){
                printf("Employee Data \n \nCode:%d \nName:%s \nOffice:%s \nSalary:%d \nAddress:%s \nPhone Number:%d \n \n", employees[i].code_num, employees[i].name, employees[i].office, employees[i].salary, employees[i].adddress, employees[i].phone);
                system("PAUSE");
                break;
            }

        }
        default : printf("INVALID NUMBER \n")
    }


}





main(){
 //MENU        
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
            include();
            break;
        }
        case 2 :{
            consultation();
            break; 
        }
        case 3 :{
            
        }
        case 4 :{
            
        }
        case 5 :{
            
        }
        case 6 :{
            printf("Going out...\n");
            break;
        }
        default : printf("INVALID NUMBER \n");
    }
}