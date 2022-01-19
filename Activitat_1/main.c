/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: oalegre
 */

#include <stdio.h>
#include "function.h"

void main(){
    int num1, num2, a=10, b= 5000;
    num1 = comparar(a, b);
	printf("El primer numero es correcto \n");
    num2 = comparar(a, b);
    printf("El segundo numero es correcto \n");
}
