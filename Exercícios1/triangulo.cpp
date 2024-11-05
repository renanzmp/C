#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float cat1, cat2, hip, form;
	printf("\nVamos calcular a hipotenusa do seu triangulo retangulo\n");
	printf("Digite o primeiro cateto");
	scanf("%f", &cat1);
	printf("\nAgora digite o número do outro cateto\n");
	scanf("%f", &cat2);
	form = pow(cat1, 2) + pow(cat2, 2);
	hip = sqrt(form);
	printf("O valor da hipotenusa e %.2f\n", hip);
}	

