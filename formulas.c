#include "functions.h"

float calcAreaParalelogramo (float b, float h){
	
	return b*h;
	
}

float calcAreaRetangulo (float b, float h){
	
	return b*h;
	
}

float calcAreaQuadrado (float l){
	
	return l*l;
	
}

float calcAreaLosango (float d1, float d2){
	
	return d1*d2/2;
	
}

float calcAreaTriangulo (float b, float h){
	
	return b*h/2;
	
}

float calcAreaTrapezio(float b1, float b2, float h){
	
	return (b1+b2)*h/2;
	
}

float calcAreaCirculo (float r){
	
	return (r*r)*PI;
	
}
