#include <stdio.h>
#include "function.h"

void parells(){
	int llistaParells[SIZE], j=2;

	for (int i=0; i<SIZE;i++){
		llistaParells[i] = j;
		j = j+2;
	}
	mostrar(llistaParells);
}

void mostrar(int *llista){
	for (int i = 0; i<SIZE; i++){
		printf("%d - ", llista[i]);
	}
}
