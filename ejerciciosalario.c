/* Dadas las horas trabajadas de una persona  y el valor por hora
calcular su salario e imprimirlo
*/

#include<stdio.h>

int main(){
	float horas, vH, salario;
	
	printf("Indicar sus horas: ");scanf("%f",&horas);
	printf("Indicar el valor por hora: ");scanf("%f",&vH);
	
	salario = horas * vH;
	printf("El salario es: $%.2f",salario);
	
	
	
	return 0;
}
