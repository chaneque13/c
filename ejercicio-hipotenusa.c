//Sacar la hipotenusa de un triangulo rectangulo, pidiendo al usuario el valor de los dos catetos
#include<stdio.h>
#include<math.h>//math.h para poder elevar y sacar la raiz
int main(){
		float h, cat1, cat2;
		printf("Digite el valor de los 2 catetos: ");
		scanf("%f %f",&cat1,&cat2);
		//sqrt para sacar la raiz cuadrada
		h = sqrt(pow(cat1,2)+pow(cat2,2)); 
		
			printf("La hipotenusa es: %.2f",h);

return 0;
}
