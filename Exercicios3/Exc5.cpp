#include<stdio.h>
#include<stdlib.h>

int contar(int num1) {
	for (int i = 1; i <= num1; i+=2){
		printf("%d\n", i);
	}
}

int main(){
	
	int num1;
	
	printf("Digite um n�mero maior que zero\n");
	scanf("%d", &num1);
	
	if (num1 < 1) {
		printf("Erro: Voc� digitou um numero menor do que 1");
	} else {
		contar(num1);
	}
	
}
