#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    float fuel, distance, total;
//INPUT
    printf("\nType the distance traveled(km): ");
    scanf("%f", &distance);
    printf("Enter the amount of fuel used(l): ");
    scanf("%f", &fuel);
//MATH
    total = distance/fuel;
//OUTPUT
    printf("Average consumption(km/l): %0.2f \n", total);
    system("PAUSE");
}