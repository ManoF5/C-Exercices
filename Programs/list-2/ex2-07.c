/* do a code that shows a menu with the options:
|sum / subtraction / division / multiplication|
your code must read one option, then execute the 
corresponding operation.  */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    int option;
    float n1, n2, total;
//INPUT
    printf(" 1- Sum \n 2- Subtraction \n 3- Division \n 4- Multiplication \n \n Choose one:");
    scanf("%d", &option);
//OUTPUT
    switch(option){
        case 1 :{
            printf("\n ");
            scanf("%f", &n1);
            printf("+");
            scanf("%f", &n2);
            total = n1 + n2;
            printf("--------");
            printf("\n%0.2f \n", total);
            break;
        }
        case 2 :{
            printf("\n ");
            scanf("%f", &n1);
            printf("-");
            scanf("%f", &n2);
            total = n1 - n2;
            printf("--------");
            printf("\n%0.2f \n", total);
            break;
        }
        case 3 :{
            printf("\n ");
            scanf("%f", &n1);
            printf("/");
            scanf("%f", &n2);
            total = n1 / n2;
            printf("--------");
            printf("\n%0.2f \n", total);
            break;
        }
        case 4 :{
            printf("\n ");
            scanf("%f", &n1);
            printf("*");
            scanf("%f", &n2);
            total = n1 * n2;
            printf("--------");
            printf("\n%0.2f \n", total);
            break;
        }
        default : printf("INVALID NUMBER");
    }
    system("PAUSE");
}