// Do a program that receives a number and tells if this number is between 100 and 200 

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int num;
//INPUT
    printf("Type a number: ");
    scanf("%d", &num);
//OUTPUT
    if(num > 100 && num < 200){
        printf("The number %d is between 100 and 200 \n", num);
    }else{
        printf("The number %d isn't between 100 and 200 \n", num);
    }
    system("PAUSE");
}