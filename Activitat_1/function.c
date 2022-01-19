/*
 * function.c
 *
 *  Created on: 12 ene 2022
 *      Author: oalegre
 */

int comparar(int a, int b){
	int num, i=0;

	do{
		printf("Introdueix un nombre entre 10 y 5000 \n");
		scanf("%d", &num);
		i+=1;

	}while ((num<a || num>b) && i==3);
	return num;
}
