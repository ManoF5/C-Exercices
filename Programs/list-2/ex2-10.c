//Build a program that read a set of 20 integer numbers and show which one is the high and lowest value provided

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIABLES
    int num, hi_num = 0, lo_num = 100000; 
    int i = 0, quant = 20;
//INPUT
    do{
        printf("Type a number: ");
        scanf("%d", &num);
        if(num > hi_num){
            hi_num = num;
        }
        if(num < lo_num){
            lo_num = num;
        }
        i++;
    }while(i < quant);
//OUTPUT
    printf("\nHigher number:%d \nLowest number:%d \n", hi_num, lo_num);
    system("PAUSE");
}