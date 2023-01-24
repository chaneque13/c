/*Una tienda ofrece un descuento del 15% sobre el total de la compra
y un cliente desea saber cuanto debera pagar finalmente por su compra
*/

#include<stdio.h>

int main(){
	float a,b;
	printf("Precio total a pagar: ");scanf("%f",&a);
	
	b = a * 0.15;
	
	printf("El total a pagar con el descuento aplicado es: %.2f",b);
	
	
	
	
	
	return 0;
}
 
