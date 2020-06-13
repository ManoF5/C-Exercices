//Do a code that counts from 1 to 100 and every multiple of 10, send a message: "multiple of 10"

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int i;
//INPUT-OUTPUT
    for(i = 0;i < 100;i++){
        printf("\n%d ",(i+1));
        if((i+1)%10 == 0){
            printf("<-- Multiple of 10");
        }
    }
}