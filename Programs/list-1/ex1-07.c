/* Do a program that read two numbers and identify if they are the same or different. 
if they are the same, insert a message saying that they are the same. 
else, tell which ones the highest number. */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int n1, n2;
//INPUT
    printf("Type two numbers: ");
    scanf("%d %d", &n1, &n2);
//OUTPUT
    if(n1 == n2){
        printf("You type the same number: %d \n",n1);
    }else{
        if(n1 > n2){
            printf("%d > %d \n", n1, n2);
        }else{
            printf("%d > %d \n", n2, n1);
        }
    }
    system("PAUSE");
}