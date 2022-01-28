/*
 * function.c
 *
 *  Created on: 27 ene 2022
 *      Author: oalegre
 */
#include <stdio.h>
#include "function.h"

int validate(){
    int num;
    do{
   	 printf("Quants llibres vols registrar?\n");
   	 scanf("%d", &num);
    }while(num<1);
    return num;
}

void registrobib(struct biblioteca *b,int size){ //punter a office
    for(int i=0; i<size;i++){
   	 printf("Introduce titulo del libro: \n");
   	 scanf("%s",b[i].titulo);
   	 printf("Introduce nombre del autor: \n");
   	 scanf("%s",b[i].autor);
   	 printf("Introduce nombre de la editorial: \n");
   	 scanf("%s",b[i].editorial);
   	 printf("Introduce el año de poblicación: \n");
   	 scanf("%d",&b[i].fecha.year);
   	 printf("Introduce el mes de poblicación: \n");
   	 scanf("%d",&b[i].fecha.mes);
   	 printf("Introduce el dia de poblicación: \n");
   	 scanf("%d",&b[i].fecha.dia);
   	 printf("Introduce unidades disponibles: \n");
   	 scanf("%d",&b[i].unidades);
   	 printf("Introduce nombre de usuario: \n");
   	 scanf("%s",b[i].usuario);
   	 printf("Introduce cantidad de dias de prestamo: \n");
   	 scanf("%d",&b[i].dias_prestamo);

    }
}

void printabla(struct biblioteca *b, int size){
    printf("------------------------------------------------\n");
    printf("Estos son los registros:\n");
    printf("Libro\t Autor\t Editorial\t Fecha\t\t Unidades\t Usuario\t Dias prestados\n");
    for(int i=0; i<size; i++){
    	printf("%s\t %s\t %s\t\t %d/%d/%d\t %d\t %s\t %d\t\n", b[i].titulo, b[i].autor, b[i].editorial, b[i].fecha.year, b[i].fecha.mes, b[i].fecha.dia, b[i].unidades, b[i].usuario, b[i].dias_prestamo );

    }
}

