// write a code than sum numbers between 1 and 10 and print the final result

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int num = 1, sum = 0;
    int i;
//INPUT
    for(i = 0;i < 10;i++){
        sum += num;
        printf(" %d -> %d \n",num, sum);
        num++;    
    }
    printf("\n Total = %d\n",sum);
    system("PAUSE");
}
