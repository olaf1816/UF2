/*
 * main.c
 *
 *  Created on: 19 ene 2022
 *      Author: oalegre
 */

#include <stdio.h>
#include "function.h"

void main(){
	int num;
	num = validacion();

	printf("Numero introducido: %d\n",num);
    numero(num);

}
