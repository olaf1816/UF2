/*
 * function.c
 *  Created on: 19 ene 2022
 *      Author: oalegre
 */
#include <stdio.h>

int validacion(){
	int num;
	do{
		printf("Introduce un valor:\n");
		scanf("%d",&num);
	}while(num<1);
	return num;
}

int numero(int num){
   int aux=0, i=0, aux2=0;
   printf("\nSecuencia ordenada:");

   for (i = 1; i < num; i++){
   		aux += i;
   		if (aux < num){
   			printf("%d ", i);
   			aux2 += i;
   		}
   	}
   printf("\nSuma total: %d",aux2);
}
