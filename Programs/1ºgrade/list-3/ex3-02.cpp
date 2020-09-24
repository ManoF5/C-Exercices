/* Write a code that read a matrix M(5,5) and calculate the sum:
a) Of line 4 of M                        A) = 0    B) = 0 |1| 2 3 4
b) Of column 2 of M                           1              
c) The main diagonal                          2
d) The secondary diagonal ??                 |3|
e) Of all elements of the matrix              4
f) Write these sums and the matrix  */

#include<stdio.h>
#include<stdlib.h>

main(){
//INPUT
	int m[5][5], i, j, a= 0;
	
	//DATA COLECT
	for(i = 0;i < 5;i++){ 
		for(j = 0;j < 5;j++){
			//test // m[j][i] = a++;
			printf("\nType the number(%d,%d): ", (i+1), (j+1));
			scanf("%d", &m[j][i]);
		}
	}
	//QUESTION A
	int result_a;
	for(i = 0;i < 5;i++){
		result_a += m[i][3];
	}
	//QUESTION B
	int result_b;
	for(j = 0;j < 5;j++){
		result_b += m[1][j];
	}
	//QUESTION C
	int result_c;
	for(i = 0;i < 5;i++){ 
		for(j = 0;j < 5;j++){
			if(i == j){
				result_c += m[i][j];
			}
		}
	}
	/* QUESTION D
	int result_d;
	for(i = 0;i < 5;i++){ 
		for(j = 0;j < 5;j++){
			if(i == 2 && i == 2){
				result_d += m[i][j];
			}else if((i == 0 && j == 4) || (i == 4 && j == 0)){
				result_d += m[i][j];
			}else if((i == 0 && j == 4) || (i == 4 && j == 0)){
				result_d += m[i][j];	
			}else if((i == 1 && j == 3) || (i == 3 && j == 1)){
				result_d += m[i][j];
			}
		}
	} */
	//QUESTION E
	int result_e;
	for(i = 0;i < 5;i++){ 
		for(j = 0;j < 5;j++){
			result_e += m[i][j];
		}
	}
	//QUESTION F
	printf("\n");
	for(i = 0;i < 5;i++){ 
		printf("%d \t \t",  m[i][0]);	
	}
	printf("\n");
	for(i = 0;i < 5;i++){ 
		printf("%d \t \t",m[i][1]);	
	}
	printf("\n");
	for(i = 0;i < 5;i++){ 
		printf("%d \t \t",m[i][2]);	
	}
	printf("\n");
	for(i = 0;i < 5;i++){ 
		printf("%d \t \t",m[i][3]);	
	}
	printf("\n");
	for(i = 0;i < 5;i++){ 
		printf("%d \t \t",m[i][4]);	
	}
	printf("\n \n");
	
	//QUESTION A result
	for(i = 0;i < 5;i++){
		printf("+%d ", m[i][3]);
    }
	printf("= %d \n", result_a);
	
	//QUESTION B result
	for(j = 0;j < 5;j++){
		printf("+%d ", m[1][j]);
	}
	printf("= %d \n", result_b);
	
	//QUESTION C result
	for(i = 0;i < 5;i++){ 
		for(j = 0;j < 5;j++){
			if(i == j){
				printf("+%d ", m[i][j]);
			}
		}
	}
	printf("= %d \n", result_c);
	
	/*QUESTION D result
	for(i = 0;i < 5;i++){ 
		for(j = 0;j < 5;j++){
			if(i == 2 && i == 2){
				printf("+%d ", m[i][j]);
			}else if((i == 0 && j == 4) || (i == 4 && j == 0)){
				printf("+%d ", m[i][j]);
			}else if((i == 1 && j == 3) || (i == 3 && j == 1)){
				printf("+%d ", m[i][j]);
			}
		}
	} 
	printf("= %d \n", result_d); */
	//QUESTION E result
	for(i = 0;i < 5;i++){ 
		for(j = 0;j < 5;j++){
			printf("+%d ", m[i][j]);
		}
	}
	printf("= %d \n", result_e);
	system("PAUSE");
}
