/*
2) Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e
positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir: a) Se i=1 escrever os três
valores a, b, c em ordem crescente. b) Se i=2 escrever os três valores a, b, c em ordem
decrescente. c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique
dentre os dois.  Para solucionar o problema, utilizar os conceitos de propriedade distributiva e
troca de valores entre variáveis.
*/

#include <stdio.h>

void main()
{
    unsigned int i;
    float a, b, c;
    char sair=0;

    do{
    printf("Escolha uma das opcoes abaixo: ");
    printf("\n1) Exibir tres valores em ordem crescente.");
    printf("\n2) Exibir tres valores em ordem decrescente.");
    printf("\n3) Exibir tres valores com o maior deles no meio.");
    printf("\n4) Sair.\n");
    scanf("%u", &i);
    system("cls");
    switch(i)
    {
        case 1:
        printf("Digite tres numeros reais quaisquer:\n ");
        scanf("%f %f %f", &a, &b, &c);
        if(((a <= b) &&  (a <= c))&&(b <= c))
            printf("%f, %f, %f.", a, b, c);
            else if(((a <= b) &&  (a <= c))&&(c <= b))
            printf("%f, %f, %f", a, c, b);
            else if(((b <= a) &&  (b <= c))&&(a <= c))
            printf("%f, %f, %f", b, a, c);
            else if(((b <= a) &&  (b <= c))&&(c <= a))
            printf("%f, %f, %f", b, c, a);
            else if(((c <= a) &&  (c <= b))&&(a <= b))
            printf("%f, %f, %f", c, a, b);
            else if(((c <= a) &&  (c <= b))&&(b <= a))
            printf("%f, %f, %f", c, b, a);
            getch();
            system("cls");
        break;
        case 2:
        printf("Digite tres numeros reais quaisquer: ");
        scanf("%f %f %f", &a, &b, &c);
        if(((a >= b) &&  (a >= c))&&(b >= c))
            printf("%f, %f, %f.", a, b, c);
            else if(((a >= b) &&  (a >= c))&&(c >= b))
            printf("%f, %f, %f", a, c, b);
            else if(((b >= a) &&  (b >= c))&&(a >= c))
            printf("%f, %f, %f", b, a, c);
            else if(((b >= a) &&  (b >= c))&&(c >= a))
            printf("%f, %f, %f", b, c, a);
            else if(((c >= a) &&  (c >= b))&&(a >= b))
            printf("%f, %f, %f", c, a, b);
            else if(((c >= a) &&  (c >= b))&&(b >= a))
            printf("%f, %f, %f", c, b, a);
            getch();
            system("cls");
        break;
        case 3:
        printf("Digite tres numeros reais quaisquer: ");
        scanf("%f %f %f", &a, &b, &c);
        if(((a <= b) &&  (a <= c))&&(b <= c))
            printf("%f, %f, %f.", a, c, b);
            else if(((a <= b) &&  (a <= c))&&(c <= b))
            printf("%f, %f, %f", a, b, c);
            else if(((b <= a) &&  (b <= c))&&(a <= c))
            printf("%f, %f, %f", b, c, a);
            else if(((b <= a) &&  (b <= c))&&(c <= a))
            printf("%f, %f, %f", b, a, c);
            else if(((c <= a) &&  (c <= b))&&(a <= b))
            printf("%f, %f, %f", c, b, a);
            else if(((c <= a) &&  (c <= b))&&(b <= a))
            printf("%f, %f, %f", c, a, b);
            getch();
            system("cls");
        break;
        case 4:
            sair = 1;
        break;
        default:
            printf("Valor invalido.");
        break;
    }
    }while(i!=4);

}
