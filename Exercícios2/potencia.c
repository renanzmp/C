#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

float n1, pot, res;

printf("Digite um n�mero inteiro\n");
scanf("%f", &n1);

if(n1>10){
    res = sqrt(n1);
    printf("\nA raiz quadrada do n�mero escolhido � %2.f", res);
}else{
    printf("\nDigite um n�mero para potencializar o n�mero escolhido anteriormente\n");
    scanf("%f", &pot);

    res = pow(n1, pot);

    printf("O n�mero %2.f elevado � %2.f � %.2f", n1, pot, res);
}

}

