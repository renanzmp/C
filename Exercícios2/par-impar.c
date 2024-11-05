#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int n1, res;

printf("Digite um número\n");
scanf("%d", &n1);

if(n1%2 == 0){
    res = n1*2;
    printf("O dobro do número escolhido é %d", res);
}else{
    printf("Número ímpar");
}

}

