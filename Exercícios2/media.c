#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

float n1, n2,n3 ,n4 , media;
printf("Digite a sua primeira nota\n");
scanf("%f", &n1);
printf("Digite a sua segunda nota\n");
scanf("%f", &n2);
printf("Digite a sua terceira nota\n");
scanf("%f", &n3);
printf("Digite a sua quarta nota\n");
scanf("%f", &n4);

media = (n1+n2+n3+n4)/4;

if(media < 7){
    printf("Sua média é %.2f\n Voce foi reprovado", media);
    }   else{
            printf("Sua média é %.2f\n Voce foi aprovado", media);
        }

}
