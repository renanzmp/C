#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void calcularBonus(float salario, float tempo){
    float resultado;
        if(tempo < 5){
    resultado = salario*1.1;
    } else{
        resultado = salario*1.2;
        }
    printf("\nSeu salario atual ser� de R$%2.f", resultado);
}

int main(){

setlocale(LC_ALL, "Portuguese");

float salario, tempo, resultado;

printf("Em R$, qual o seu sal�rio?\n");
scanf("%f", &salario);
printf("\nH� quantos anos completos voc� trabalha na empresa?\n");
scanf("%f", &tempo);

calcularBonus(salario, tempo);

}
