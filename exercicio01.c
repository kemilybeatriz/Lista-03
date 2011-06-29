/*
1) Escrever um algoritmo que lê a hora de início de um jogo e a hora de término do jogo, ambas
subdivididas em 2 valores distintos, a saber: horas e minutos. Calcular e escrever a duração do
jogo, também em horas e minutos, considerando que o tempo máximo de duração de um jogo é
de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.
*/

#include <stdio.h>

void main()
{
    int horaI, minutoI; // tempo inicial do jogo
    int horaF, minutoF; // tempo final do jogo
    int minutosI;
    int minutosF;
    int variaMinutos;

    do{
    printf("Informe o tempo inicial do jogo (hh:mm): ");
    scanf("%d:%d", &horaI, &minutoI);
    }while(((horaI>23)||(horaI<0))||((minutoI>59)||(minutoI<0)));
    minutosI = (horaI*60)+(minutoI);
    system("cls");
    do{
    printf("Informe o tempo final do jogo(hh:mm): ");
    scanf("%d:%d", &horaF, &minutoF);
    }while(((horaF>23)||(horaF<0))||((minutoF>59)||(minutoF<0)));
    minutosF = (horaF*60)+(minutoF);
    system("cls");

    variaMinutos = minutosF - minutosI;
    if(variaMinutos<0)
    {
        printf("\nVoce jogou durante %d horas e %d minutos.\n", (variaMinutos/60)*(-1), variaMinutos%60);
    }else{
    printf("\nVoce jogou durante %d horas e %d minutos.\n", variaMinutos/60, variaMinutos%60);
    }
}
