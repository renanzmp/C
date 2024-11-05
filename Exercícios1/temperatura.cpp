#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float celsius, fahr;
printf("Vamos converter a temperatura iserida em celsius para Fahrenheit\n");
printf("Digite a temperatura desejada em Celsius");
scanf("%f", &celsius);
fahr = ((celsius*9)/5) + 32;
printf("\nVoce inseriu a temperatura %f \n E o resultado em Fahrenheit e %f",celsius,fahr);
}
