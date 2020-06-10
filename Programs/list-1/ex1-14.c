/* Develop a program that at the age of a swimmer. Rate it in one of the following categories:
Children A =  5 -  7 years
Children B =  8 - 10 years
juvenile A = 11 - 13 years
juvenile B = 14 - 17 years
Senior     = 18 - 25 years  
*Present the message “age outside the age range" if that age is out of the rate  */ 

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int age;
//INPUT
    printf("Type your age: ");
    scanf("%d", &age);
//OUTPUT
    if(5 <= age && age <= 7){
        printf("RATE:Children A \n");
    }else if(8 <= age && age <= 10){
        printf("RATE:Children B \n");
    }else if(11 <= age && age <= 13){
        printf("RATE:Juvenile A \n");
    }else if(14 <= age && age <= 17){
        printf("RATE:Juvenile B \n");
    }else if(18 <= age && age <= 25){
        printf("RATE:Senior \n");
    }else{
        printf("Out of the rate! \n");
    }
    system("PAUSE");     
}