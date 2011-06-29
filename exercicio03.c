/*
3) Faça um programa que determina quais são os múltiplos de 3 entre um intervalo definido pelo
usuário. O primeiro valor deverá ser menor que o segundo.
*/
#include <stdio.h>

void main()
{
    int quanti;
    int i, inicio, n;
    char sair=0;


    do{
        printf("1) Ver multiplos de 3 em um intervalo.");
        printf("\n2) Sair.\n");
        scanf("%d", &n);
        system("cls");
        switch(n)
        {
            case 1:
            do{
            printf("Defina a quantidade de multiplos de 3 a ser mostrado: \n");
            scanf("%d", &quanti);
            }while(n<=0);

            printf("\nValor inicial: \n");
            scanf("%d", &inicio);

            for(i=0 ; i<quanti; i++)
            {
                printf("\n%do - %d", i+1, inicio);
                inicio = inicio + 3;
            }
            getch();
            system("cls");
        break;
        case 2:
            sair=1;
        break;
        default:
            printf("\n\nValor invalido.");
        break;
        }
    }while((n!=2));
}
