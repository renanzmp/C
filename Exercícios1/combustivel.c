#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float distkm, distm, temph, temps, velkm, velm, lit, automovel;
    automovel = 12000;
    printf("Vamos ver quantos litros de gasolina voce gastou na viagem\n");
    printf("Digite o tempo gasto na viagem em horas");
    scanf("%f", &temph);
    printf("Agora digite a velocidade media do seu carro durante a viagem em km/h");
    scanf("%f", &velkm);
    velm = velkm/3.6;
    temps = temph*3600;
    distm = velm*temps;
    distkm = distm/1000;
    lit = distm/automovel;

    printf("A velocidade media do seu carro foi %2.f km/h, o tempo gasto na viagem foi %2.f horas, a distancia percorrida foi %2.f km e voce gastou %f litros durante a viagem", velkm, temph, distkm, lit);
}
