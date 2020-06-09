// Do a program that receives the number of the month and show the corresponding month.

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int month;
//INPUT
    printf("Type the number of the month(1-12): ");
    scanf("%d", &month);
//OUTPUT
    switch(month){
        case 1  : printf("January \n");        break;
        case 2  : printf("February \n");       break;
        case 3  : printf("March \n");          break;
        case 4  : printf("April \n");          break;
        case 5  : printf("May \n");            break;
        case 6  : printf("June \n");           break;
        case 7  : printf("July \n");           break;
        case 8  : printf("August \n");         break;
        case 9  : printf("Setember \n");       break;
        case 10 : printf("October \n");        break;
        case 11 : printf("November \n");       break;
        case 12 : printf("December \n");       break;
        default : printf("INVALID NUMBER \n"); 
    }
    system("PAUSE");
}