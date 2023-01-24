//Calcule la media aritmetica de 3 numeros cualesquiera


#include<stdio.h>

int main(){
	float a,b,c,media;
	printf("Ingrese el primer valor: ");scanf("%f",&a);
	printf("Ingrese el segundo valor: ");scanf("%f",&b);
	printf("Ingrese el tercer valor: ");scanf("%f",&c);
	
	media = a + b + c /3;
			
	printf("La media es: %f",media);
	
	
	return 0;
}
