/*
 * function.c
 *  Created on: 19 ene 2022
 *      Author: oalegre
 */

int natural(){
	int num;
	do{
		printf("Introduce un numero natural: \n");
		scanf("%d", &num);
	}while (num<1);
	return num;
}

int dias (int num){
	int d=0;
	while (num>=86400){
	      num = num-864000;
	      d=d+1;
	}
	printf("%d dias\n", d);
	return num;
}

int horas (int num){
	int h=0;
	while (num>=3600){
	      num = num-3600;
	      h=h+1;
	}
	printf("%d horas\n", h);
	return num;
}
int minutos (int num){
	int m=0;
	while (num>=60){
	       num = num-60;
	       m=m+1;
	}
	printf("%d minutos\n", m);
	return num;
}
