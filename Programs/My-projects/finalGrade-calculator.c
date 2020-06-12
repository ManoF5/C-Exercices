// ( ( (A1 + A2 + A3) / 3) * 0.4) + ( ( (A4 + A5) / 2) * 0.6)
// |            N1              | + |          N2           |

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    float A1, A2, A3, A4, A5;
    float N1, N2, final;
//INPUT
    printf("Final Grade Calculator \n");
    printf("\nType N1 grade(A1,A2,A3): ");
    scanf("%f %f %f", &A1, &A2, &A3);
    printf("\nType N2 grade(A4,A5): ");
    scanf("%f %f", &A4, &A5);
//MATH
    N1 = ((A1 + A2 + A3) / 3);
    N2 = (A4 * 0.1) + (A5 * 0.9);
    final = (N1 * 0.4) + (N2 * 0.6);
//OUTPUT
    printf(" N1 \t \t + \t \t N2 \t \t = \t \t FINAL \n");
    printf(" %0.2f \t \t + \t \t %0.2f \t \t = \t \t %0.2f \n", N1, N2, final);
    system("PAUSE");
}