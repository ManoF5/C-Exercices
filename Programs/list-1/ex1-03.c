/*  1- Write a code to read the cost of the fabric of a car and inform the cost for the consumer;
    2- The cost for a consumer to buy a new car is the sum of the cost of fabric and the percentage of the distributor and taxes;
    3- first, apply the taxes on the cost of fabric, then apply the percentage of the distributor;
    

    TAXES:       45%
    DISTRIBUTOR: 28%                                                                                                                         */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    float cost_consumer, cost_fabric, taxes = 1.45, distributor = 1.28;
//INPUT
    printf("\nCost of fabric of a car: ");
    scanf("%f", &cost_fabric);
//MATH
    cost_consumer = (cost_fabric * taxes) * distributor;
//OUTPUT
    printf("Cost for the consumer:$%0.2f\n", cost_consumer);
    system("PAUSE");
}