/* Develop a code that read the height and the sex(M or F) of 15 persons. This program should calculate and display.
a) The lowest height in the group
b) The average women's height
c) The number of mans
d) The sex of the highest person  

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
//VARIBLES
    float height, lo_height = 1000, hi_height = 0, avw_height = 0;
    char sex, hi_sex[10];
    int i = 0, woman = 0, num_mans = 0;
//INPUT
    do{
        printf("%d-Type the height and the sex(M or F): ",(i+1));
        scanf("%f %c", &height, &sex);
        //QUESTIONS 
        if(height < lo_height){         // A
            lo_height = height; 
        }
        if(sex == 'f' || sex == 'F'){   // B
            avw_height += height;
            woman++;
        }
        if(sex == 'm' || sex == 'M'){   // C
            num_mans++;
        }
        if(height > hi_height){         // D
            strcpy(hi_sex,sex);
        }
        i++;
    }while(i < 4);
    if(hi_sex == 'f' || hi_sex == 'F'){
        strcpy(hi_sex,"Female");
    }else if(hi_sex == 'm' || hi_sex == 'M'){
        strcpy(hi_sex,"Male");
    }
//OUTPUT
    printf("\nThe lowest height in the group:%0.2f \n", lo_height);
    printf("The average women's height:%0.2f \n", (avw_height / woman));
    printf("The number of mans:%d \n", num_mans);
    printf("The sex of the highest person:%c \n", hi_sex);
}

*/