/*
5) Crie um programa que receba um n�mero de 0 a 100 e o apresente no respectivo n�mero octal e
hexadecimal.
*/
#include <stdio.h>

void main()
{
    int n;

    do{
        printf("Digite um numero inteiro de 0 a 100: ");
        scanf("%d", &n);
        if((n < 0)||(n > 100))
        {
            printf("Valor invalido! Tente outra vez.\n");
            getch();
            system("cls");
        }
    }while((n < 0)||(n > 100));
        printf("Octal: %o\nHexadecimal: %x ", n, n);
}
