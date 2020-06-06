// Write a program that read two integer number and tell which is the biggest

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int n1, n2;
//INPUT
    printf("Type two numbers: ");
    scanf("%d %d", &n1, &n2);
//OUTPUT
    if(n1 > n2){
        printf("%d > %d \n", n1, n2);
    }else{
        printf("%d > %d \n", n2, n1);
    }
    system("PAUSE");
}