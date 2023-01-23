//Directivas del preprocesador y variables

//las librerias llevan siempre el include
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//macro, basicamente son variables pero se les dice macro 
#define PI 3.1416

//variable global 
int y = 5;

int main(){
			//variable local , porque esta dentro de una funcion
		int x = 10;
		//los float almacenan los numeros decimales, osea los reales
		float suma = 0; 
	
	suma = PI + x;
	
	printf("La suma es:%.2f",suma );
	
	return 0;
}
