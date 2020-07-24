/* Do a code that receives one integer number and 
as long as a negative number is not entered, verify if this number is less than 5 */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIABLES
    int num;
//INPUT-OUTPUT
    do{
        printf("Type a number: ");
        scanf("%d", &num);
        if(5 > num && num >= 0){
            printf("Less than five \n");
        }else if(num == 5){
            printf("Equal to five \n");
        }else if(num > 5){
            printf("Greater than five \n");
        }
    }while(num >= 0);
    system("PAUSE");
}