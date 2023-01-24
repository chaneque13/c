//Hacer un programa que calcule areas de trapecios

#include<stdio.h>
#include<math.h>

int main(){
		int bM, bm, a, h;
		
		printf("Escribe la base mayor: ");scanf("%i",&bM);
		printf("Escribe la base menor: ");scanf("%i",&bm);
		printf("Escribe la altura: ");scanf("%i",&h);
		
		
		a = ((bM+bm)*h)/2; 
		
		
		printf("\nEl area del trapecio es: %i",a);
			
	
	
	return 0;
}
