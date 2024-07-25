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
	
	printf("Bem vindo a sua calculadora de area de figuras planas!\n");
	printf("1- Paralelogramo, 2- Retangulo, 3- Quadrado, 4- Losango, 5- Triangulo, 6- Trapezio, 7- Circulo\n");
	printf("Selecione a figura plana: ");
	scanf("%d", &figura);
	
	switch(figura){
		case 1:
			printf("Voce selecionou 'Paralelogramo'\n");
			printf("Primeiro, digite o valor correspondente da base: ");
			scanf("%f", &b);
			fflush(stdin);
			printf("Agora, digite o valor correspondente da altura: ");
			scanf("%f", &h);
			fflush(stdin);
			printf("Esse seria o valor da area de um paralelogramo: %.2f", calcAreaParalelogramo(b, h));
			break;

		case 2:
			printf("Voce selecionou 'Retangulo'\n");
			printf("Primeiro, digite o valor correspondente da base: ");
			scanf("%f", &b);
			fflush(stdin);
			printf("Agora, digite o valor correspondente da altura: ");
			scanf("%f", &h);
			fflush(stdin);
			printf("Esse seria o valor da area de um retangulo: %.2f", calcAreaRetangulo(b, h));
			break;
		
		case 3:
			printf("Voce selecionou 'Quadrado'\n");
			printf("Digite o valor correspondente ao lados do quadrado: ");
			scanf("%f", &l);
			fflush(stdin);
			printf("Esse seria o valor da area de um quadrado: %.2f", calcAreaQuadrado(l));
			break;

		case 4:
			printf("Voce selecionou 'Losango'\n");
			printf("Primeiro, digite o valor correspondente da diagonal maior: ");
			scanf("%f", &d1);
			fflush(stdin);
			printf("Agora, digite o valor correspondente da diagonal menor: ");
			scanf("%f", &d2);
			fflush(stdin);
			printf("Esse seria o valor da area de um losango: %.2f", calcAreaLosango(d1, d2));
			break;

		case 5:
			printf("Voce selecionou 'Triangulo'\n");
			printf("Primeiro, digite o valor correspondente da base: ");
			scanf("%f", &b);
			fflush(stdin);
			printf("Agora, digite o valor correspondente da altura: ");
			scanf("%f", &h);
			fflush(stdin);
			printf("Esse seria o valor da area de um triangulo: %.2f", calcAreaTriangulo(b, h));
			break;

		case 6:
			printf("Voce selecionou 'Trapezio'\n");
			printf("Primeiro, digite o valor correspondente da base maior: ");
			scanf("%f", &b1);
			fflush(stdin);
			printf("Depois, digite o valor correspondente da base menor: ");
			scanf("%f", &b2);
			fflush(stdin);
			printf("Agora, digite o valor correspondente da altura: ");
			scanf("%f", &h);
			fflush(stdin);
			printf("Esse seria o valor correspondente a area do trapezio: %.2f", calcAreaTrapezio(b1, b2, h));
			break;

		case 7:
			printf("Voce selecionou 'Circulo'\n");
			printf("Digite o valor correspondente do raio: ");
			scanf("%f", &r);
			fflush(stdin);
			printf("Considerando o valor de PI como 3,14, esse seria o valor da area do circulo: %.2f", calcAreaCirculo(r));
	}

	printf("\nDeveloped by: Felipe Matheus. :)\n");
	printf("GitHub: felipemths12\n");

	system("pause");
}
