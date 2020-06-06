// Do a code that read a integer number util one negative number be typed

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int num;
//INPUT
    do{
        printf("Type a number: ");
        scanf("%d", &num);
    }while(num >= 0);
    system("PAUSE");
}