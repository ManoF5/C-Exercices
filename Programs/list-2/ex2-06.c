// Do a program that aways receives pair numbers. If receives an odd number, end your execution.

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLE
    int num;
//INPUT-OUTPUT
    do{
        printf("Type a pair number: ");
        scanf("%d", &num);
    }while(num%2 == 0);
    system("PAUSE");
}
