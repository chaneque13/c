//Hacer un programa que calcule las longitudes de circunferencia


#include<stdio.h>
#include<math.h>

#define pi 3.1416

int main(){
	
		float r, cir;
		printf("Ingresa tu radio: ");
		scanf("%f",&r);
		
		cir= 2 * pi * r;
		
		printf("%.2f",cir);

	return 0;
}

