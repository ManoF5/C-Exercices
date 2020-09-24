/* Do a program that read a number from 1 to 5 and print the number in words. 
if the user types a number different of this(1-5),
print the message: invalid number */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIABLES
    int number;
//INPUT
    printf("Type a number(1-5):");
    scanf("%d", &number);
//OUTPUT
    switch(number){
        case 1  : printf("One \n");            break;
        case 2  : printf("Two \n");            break;
        case 3  : printf("Three \n");          break;
        case 4  : printf("Four \n");           break;
        case 5  : printf("Five \n");           break;
        default : printf("INVALID NUMBER \n"); break;
    }
    system("PAUSE");
}