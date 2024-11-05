#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void calcularMedia(float n1, float n2, float n3,float n4) {
    float res;
    res = (n1+n2+n3+n4)/4;

    printf("A média é %f", res);
}

int main(){

setlocale(LC_ALL, "Portuguese");

float n1, n2, n3, n4;

printf("Digite a sua primeira nota\n");
scanf("%f", &n1);
printf("Digite a sua segunda nota\n");
scanf("%f", &n2);
printf("Digite a sua terceira nota\n");
scanf("%f", &n3);
printf("Digite a sua quarta nota\n");
scanf("%f", &n4);

calcularMedia(n1, n2, n3, n4);
}
