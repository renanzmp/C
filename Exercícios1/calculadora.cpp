#include<stdio.h>
#include<stdlib.h>
int main(){
	float num1, num2, media;
	numero1:
	printf("Digite o primeiro numero");
	scanf("%f", &num1);
	printf("Digite o segundo numero");
	scanf("%f", &num2);
	media = (num1 + num2)/2;
	printf("\nA media ariimetica e %.2f\n", media);
	if(media >= 6)
		printf("\n Aprovado e media %.2f\n", media);
	else
		printf("\n Reprovado e media %.2f\n", media);
} 
