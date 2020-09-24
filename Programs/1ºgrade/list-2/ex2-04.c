// Do a code that read the age of 15 persons and show the quantity than have the age between 4 and 12 years

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIABLES
    int age, quantity = 0;
    int i = 0, persons = 15;
//INPUT
    do{
        printf("Type your age: ");
        scanf("%d", &age);
        if(4 <= age && age <= 12){
            quantity++;
        }
        i++;
    }while(i < persons);
//OUTPUT
    printf("In the list have %d persons with age between 4 and 12 years \n", quantity);
    system("PAUSE");
}