#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void calcularResultado(int n1, int pot, float res){
    if(n1>10){
    res = sqrt(n1);
    printf("\nA raiz quadrada do n�mero escolhido � %2.f", res);
}else{
    printf("\nDigite um n�mero para potencializar o n�mero escolhido anteriormente\n");
    scanf("%d", &pot);

    res = pow(n1, pot);

    printf("O n�mero %2.f elevado � %2.f � %.2f", n1, pot, res);
}
}

int main(){

setlocale(LC_ALL, "Portuguese");

int n1, pot;
float res;


printf("Digite um n�mero inteiro\n");
scanf("%d", &n1);

calcularResultado(n1, pot, res);

}
