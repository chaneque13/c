//tipos de datos


#include<stdio.h>



int main(){
	
	
	char a = 'e'; //tamaño = 1 byte Rango = 0...255 %s
	short b = -15; //tamaño = 2 bytes Rango = -128...127 %i
	int c = 1024; //tamaño = 2 bytes Rango = -32768...32767 %i
	unsigned int d = 128; //tamaño = 2 bytes Rango =  0...65535 %i
	long e = 123456; //tamaño = 4 bytes Rango = -2147483648...2147483637   %li
	float f = 15.678;//tamaño = 4 bytes Rango = 3.4*(10  )...... 3,4*(10  )  %f
	double m = 13241234.2; //tamaño = 8 bytes Rango = 1.7*(10   )....1.7*(10	) %lf
	
	
	
	//para quitar los decimales podemos poner un punto y asi el float se vuelve un int
	printf("El elemento es: %lf",m);



 return 0;
}
