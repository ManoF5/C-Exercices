/* Do a basic calculator
1- A and B = numbers
2- C = char(+, -, *, /)
3- Treat zero division error */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    float A, B, result;
    char C;
//INPUT
    printf("Calculator \n");
        printf("");
    scanf("%f %c %f", &A, &C, &B);
//OUTPUT
    switch(C){
        case '+' :{
            result = A + B;
            printf("%0.2f \n", result);
            break;
        } 
        case '-' :{
            result = A - B;
            printf("%0.2f \n", result);
            break;
        }
        case '*' :{
            result = A * B;
            printf("%0.2f \n", result);
            break;
        }
        case '/' :{
            if(C != 0){
                result = A * B;
                printf("%0.2f \n", result);
                break;
            }else{
                printf("!ERRO: ZERO DIVISION! \n");
            }
        }
        default : printf("!INVALID SYMBOL! \n");
    }
    system("PAUSE");
}
   


