/*
 * function.h
 *
 *  Created on: 27 ene 2022
 *      Author: oalegre
 */

#ifndef FUNCTION_H_
#define FUNCTION_H_

struct fecha{
	int year;
	int mes;
	int dia;
};

struct biblioteca{
	char titulo[30];
	char autor[50];
	char editorial[50];
	struct fecha fecha;
	int unidades;
	char usuario[30];
	int dias_prestamo;
};
int validate();
void registrobib(struct biblioteca *, int);
void printabla(struct biblioteca *, int);

#endif /* FUNCTION_H_ */
