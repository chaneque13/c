//Entrada y salida de datos 


#include<stdio.h>


int main(){

	char x[500];
	
	printf("Escriba su nombre: ",x);

    gets(x); //scanf solamenente puede leer hasta donde haya un espacio, en cambio gets lee todo 
	
	printf("Su nombre es: %s",x);

	return 0;
	
}
