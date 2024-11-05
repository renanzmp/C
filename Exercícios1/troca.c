#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float n1, n2, n3;
    printf("Digite o primeiro numero");
    scanf("%f", &n1);
    printf("Digite o segundo numero");
    scanf("%f", &n2);
    n3 = n1;
    n1 = n2;
    n2 = n3;

    printf("%f, %f", n1, n2);
}
