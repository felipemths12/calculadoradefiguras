#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int figura;
	float b;
	float h;
	float l;
	float d1;
	float d2;
	float b1;
	float b2;
	float r;
	
	printf("Bem vindo a sua calculadora de �rea de figuras planas!\n");
	printf("1- Paralelogramo, 2- Ret�ngulo, 3- Quadrado, 4- Losango, 5- Tri�ngulo, 6- Trap�zio, 7- C�rculo\n");
	printf("Selecione a figura plana: ");
	scanf("%d", &figura);
	
	switch(figura){
		case 1:
			printf("Voc� selecionou 'Paralelogramo'\n");
			printf("Primeiro, digite o valor correspondente da base: ");
			scanf("%f", &b);
			fflush(stdin);
			printf("Agora, digite o valor correspondente da altura: ");
			scanf("%f", &h);
			printf("Esse � o valor da �rea de um paralelogramo: ", calcAreaParalelogramo(10, 10));
	}
}
