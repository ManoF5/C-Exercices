/* The school "APRENDER" pay your teachers per hour/class.
Do a program than calculating and display the salary of the teacher.
Level 1 teacher: $12.00 per hour/class
Level 2 teacher: $17.00 per hour/class
Level 3 teacher: $25.00 per hour/class */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIABLES
    float hours, salary;
    int class, level;
//INPUT
    printf("Good morning teacher! \n");
    printf("Type your number of hours worked in the month: ");
    scanf("%f", &hours);
    printf("Type your number of classes in the month: ");
    scanf("%d", &class);
    printf("Type your level: ");
    scanf("%d", &level);
//OUTPUT
    switch(level){
        case 1 :{
            salary = 12 * (hours/class);
            printf("Teacher this is your salary:%0.2f ",salary);
            break;
        }
        case 2 :{
            salary = 17 * (hours/class);
            printf("Teacher this is your salary:%0.2f ",salary);
            break;
        }
        case 3 :{
            salary = 25 * (hours/class);
            printf("Teacher this is your salary:%0.2f ",salary);
            break;
        }
        default : printf("Level invalid!");
    }
    system("PAUSE");
}