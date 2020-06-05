// Escrever um programa para determinar o consumo médio de um automóvel 
// sendo fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.

#include<stdio.h>
#include<stdlib.h>

int main() {
//VARIBLES
    float fuel, distance, total;
//INPUT
    printf("\n Type the distance traveled(km): ");
    scanf("%f", &distance);
    printf(" Enter the amount of fuel used(l): ");
    scanf("%f", &fuel);
//MATH
    total = distance/fuel;
//OUTPUT
    printf(" Average consumption(km/l): %0.2f \n", total);

    system("PAUSE");
}