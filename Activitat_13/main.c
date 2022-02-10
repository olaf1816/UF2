/*
 * main.c
 *
 *  Created on: 27 ene 2022
 *      Author: oalegre
 */

#include <stdio.h>
#include "functions.h"

void main(){
	int size, minimo, maximo, num, num2;
	int i=0;

	size = validar(MSG1);
	int lista[size];
	minimo = validar(MSG2);
	maximo = validar (MSG3);

	for (i=0; i<size; i++){
				lista[i]=generar(minimo, maximo);
			}

	//printa la lista
	printf("Lista aleatoria:\n");
	for (i = 0; i<size; i++){
		printf("%d  ", lista[i]);
	}


	printf ("\n\n****************** MENU ****************** \n");
		printf("Escull una opció. \n");
		printf("1.- Ordenar valores de manera ascendiente. \n");
		printf("2.- Ordenar valores de manera descendiente. \n");
		printf("3.- Buescar valores introdïdos por teclado. \n");
		printf ("En qualsevol altre cas, sortir del programa. \n");
	printf ("***************************************** \n\n");


		scanf("%d", &num);

		switch(num){
			case 1: ascendiente(lista, size);
				break;
			case 2: descendiente(lista, size);
				break;
			case 3: num2 = validar (MSG4);
				buscar(lista, size, num2);
				break;

			default: printf ("Opción no valida. ");
				break;
		}

}





