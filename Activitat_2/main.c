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
    num = natural();


    num = dias(num);
    num = horas(num);
    num = minutos(num);

    printf("%d segundos\n ", num);


}
