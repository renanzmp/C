#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int calcularDobro(n1, res){
    res = n1*2;
    printf("O dobro do n�mero escolhido � %d", res);
}

int main(){

setlocale(LC_ALL, "Portuguese");

int n1, res;

printf("Digite um n�mero inteiro qualquer\n");
scanf("%d",&n1);

calcularDobro(n1, res);

}
