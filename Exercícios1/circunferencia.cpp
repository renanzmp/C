#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float r, area;
    printf("Digite o raio de sua circunferencia em cm: ");
    scanf("%f", &r);
    area = (4*3.14*pow(r, 3))/3;
    printf("O volume de uma circunferencia de raio %f cm %.2f cm³",r,area);
}
