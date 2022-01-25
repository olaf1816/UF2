/*
 * function.c
 *  Created on: 19 ene 2022
 *      Author: oalegre
 */

int natural(){
	int num;
	do{
		printf("Introduce un numero natural:");
		scanf("%d", &num);
	}while (num<1);
	return num;
}

elevar(int numero, int potencia){
	  int i=0;
	  long resultado=numero;
	  i = potencia;
	  while(i >1){
	        resultado = resultado * numero;
	        i --;
	    }
	    printf("%d  elevado a %d és %ld", numero, potencia , resultado);
}
