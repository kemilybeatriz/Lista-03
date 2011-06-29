/*
4) Escreva um programa que leia um valor inteiro e a quantidade de bits que será deslocada a
esquerda e a diretia. Ao final a saída deverá exibir o resultado do deslocamento.
Informe o valor:
Informe quantos bits serão deslocados a direta:
Informe quantos bits serão deslocados a esquerda:
Resultado:
*/
#include <stdio.h>

void main()
{
    int valor, n;
    int bitsDireita, bitsEsquerda;
    int sair = 0;

        do{
            printf("Escolha uma opcao.\n\n");
            printf("1) Deslocamento de bits.\n");
            printf("2) Sair.\n");
            scanf("%d", &n);
            system("cls");
            switch(n)
            {
                case 1:
                printf("DESLOCAMENTO DE BITS\n\n");
                printf("Informe um numero inteiro: \n");
                scanf("%d", &valor);
                printf("Informe quantos bits serao deslocados a direta: \n");
                scanf("%d", &bitsDireita);
                printf("Informe quantos bits serao deslocados a esquerda: \n");
                scanf("%d", &bitsEsquerda);
                system("cls");

                printf("RESULTADO: \n");
                printf("Valor: %d\n", valor);
                printf("Direita: %d\n", valor>>bitsDireita);
                printf("Esquerda: %d\n", valor<<bitsEsquerda);
                getch();
                system("cls");
                break;
                case 2:
                sair = 1;
                break;
            }
        }while(n!=2);
}
