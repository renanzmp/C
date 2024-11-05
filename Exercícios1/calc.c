#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float n1, n2, soma, sub, multi, div;
printf("Digite o 1° numero");
scanf("%f", &n1);
printf("Digite o 2° numero");
scanf("%f", &n2);

soma = n1+n2;
sub = n1-n2;
multi = n1*n2;
div = n1/n2;

printf("O resultado de %.2f + %.2f e %.2f\n",n1, n2, soma);
printf("O resultado de %.2f - %.2f e %.2f\n",n1, n2, sub);
printf("O resultado de %.2f * %.2f e %.2f\n",n1, n2, multi);
printf("O resultado de %.2f / %.2f e %.2f\n",n1, n2, div);

}
