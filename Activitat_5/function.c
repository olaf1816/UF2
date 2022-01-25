/*
 * function.c
 *  Created on: 19 ene 2022
 *      Author: oalegre
 */

 traspassar(int num1, int num2){
	int aux;

	aux=num1;
	num1=num2;
	num2=aux;

	printf ("El primer numero es %d\n", num1);
	printf ("El segundo numero es %d", num2);
}

