// Do a code that determines the higher among N numbers. 
// The condition of the stop is the entry of a value 0(zero).

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int num, hi_num = 0;
//INPUT-OUTPUT
    do{
        printf("\nHigh number:%d", hi_num);
        printf("\nType a number:");
        scanf("%d", &num);
        if(num > hi_num){
            hi_num = num;
        }
    }while(num != 0);
    system("PAUSE");
}