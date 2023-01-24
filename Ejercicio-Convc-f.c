//Convertir grados celcius a grados fahrenheit

#include<stdio.h>


int main(){
	int c;
	float f;
	

	printf("Ingresa el grado Celcius que quieres convertir: ");
	scanf("%i",&c);
	
	f = c * 9/5 + 32;
	
	printf("El resultado es: %f",f);
	
	
	return 0;
}
