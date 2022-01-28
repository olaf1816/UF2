/*
 * main.c
 *
 *  Created on: 27 ene 2022
 *      Author: oalegre
 */

#include <stdio.h>
#include "function.h"

void main() {
    int size;
    size = validate();
    struct biblioteca bib[size];
    registrobib(bib, size);//per referència només l’array, no size
    printabla(bib, size); //es passa per valor
}
