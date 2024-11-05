#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

float n1, pot, res;

printf("Digite um número inteiro\n");
scanf("%f", &n1);

if(n1>10){
    res = sqrt(n1);
    printf("\nA raiz quadrada do número escolhido é %2.f", res);
}else{
    printf("\nDigite um número para potencializar o número escolhido anteriormente\n");
    scanf("%f", &pot);

    res = pow(n1, pot);

    printf("O número %2.f elevado à %2.f é %.2f", n1, pot, res);
}

}

