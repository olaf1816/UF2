#include <stdio.h>
#include "functions.h"

int validar(char *msg) {
	int num;
	do {
		printf(msg);
		scanf("%d", &num);
	} while (num < 1);
	return num;
}

int generar(int minimo, int maximo) {
	int variable = 0;

	variable = minimo + rand() % (maximo + 1 - minimo);
	return variable;
}

int ascendiente(int *lista, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (lista[i] > lista[j]) {
				int cambio = lista[i];
				lista[i] = lista[j];
				lista[j] = cambio;
			}
		}
	}
	mostrar(lista, size);
}

int descendiente(int *lista, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (lista[i] < lista[j]) {
				int cambio = lista[i];
				lista[i] = lista[j];
				lista[j] = cambio;
			}
		}
	}
	mostrar(lista, size);
}

int mostrar(int *lista, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", lista[i]);
	}
}

int buscar(int *lista, int size, int num2){
	int encontrado = 0, i = 0;

	while ((i < 10) && (encontrado == 0)) {
		if (lista[i] == num2) {
			encontrado = 1;
		}
		i++;
	}
	if (encontrado == 1) {
		printf("El numero %d se encuentra en la lista.\n", num2);
	} else {
		printf("El numero %d no se encuentra en la lista.\n", num2);
	}
}


