// Do a code than repeat 10 times your name

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    char name[30];
    int times = 0;
//INPUT
    printf("Input your name: ");
    gets(name);
    do{
        printf("%s \n", name);
    }while(times < 10);
    system("PAUSE");
}