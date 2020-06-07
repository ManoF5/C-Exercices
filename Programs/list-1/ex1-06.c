/*  Write a program that reads a name and three grades obtained for a student during the semester.
    1- Calculate the average (arithmetic)
    2- Inform the name and your mention:
        -Approved (average >= 7)
        -Reproved (average <= 5)
        -Retake test (average between 5.1 to 6.9)   */

#include<stdio.h>
#include<stdlib.h>

main(){
//VARIBLES
    char name[30];
    float A1,A2,A3;
    float average;
//INPUT
    printf("Average Calculator\n");
    printf("Input your name: ");
    gets(name);
    printf("Type your three grades: ");
    scanf("%f %f %f", &A1, &A2, &A3);
//MATH
    average = (A1 + A2 + A3) / 3;
//OUTPUT
    if(average >= 7){
        printf("Congratulations %s! with the final result of %0.2f, you are approved.\n", name, average);
    }else if(average <= 5){
        printf("Unfortunately %s, with the final result of %0.2f, you are reproved.\n", name, average);
    }else{
        printf("You still have a chance %s. with the final result of %0.2f, will have to do the retake test.\n", name, average);
    }
    system("PAUSE");
}