// Write a code that read three distinct integer values and write them in ascending order

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int N1, N2, N3;
//INPUT
    printf("Type three numbers: ");
    scanf("%d %d %d", &N1, &N2, &N3);
//OUTPUT
     
    if      (N1 > N2 && N2 > N3 && N2 > N3){
        printf("%d > %d > %d \n", N1, N2, N3);
       
    }else if(N1 > N2 && N1 > N3 && N3 > N2){
        printf("%d > %d > %d \n", N1, N3, N2);
     
    }else if(N2 > N1 && N2 > N3 && N1 > N3){
        printf("%d > %d > %d \n", N2, N1, N3);
     
    }else if(N2 > N1 && N2 > N3 && N3 > N1){
        printf("%d > %d > %d \n", N2, N3, N1);
     
    }else if(N3 > N1 && N3 > N2 && N1 > N2){
        printf("%d > %d > %d \n", N3, N1, N2);

    }else if(N3 > N1 && N3 > N2 && N2 > N1){
        printf("%d > %d > %d \n", N3, N2, N1);
    }
    system("PAUSE");
}