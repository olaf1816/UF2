/*
 * main.c
 *
 *  Created on: 19 ene 2022
 *      Author: oalegre
 */

#include <stdio.h>
#include "function.h"

void main(){
    int num1, num2;

    printf ("Introduce el primer numero entero:");
    scanf ("%d", &num1);

	printf ("Introduce el primer numero entero:");
	scanf ("%d", &num2);

	traspassar(&num1, &num2);

	printf ("El primer numero es %d\n", num1);
	printf ("El segundo numero es %d", num2);
}
