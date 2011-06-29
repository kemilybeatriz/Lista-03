/*7) Efetuar a leitura de tr�s valores (vari�veis A, B e C) e realizar o c�lculo da equa��o completa do
segundo grau, apresentando as duas ra�zes, se para os valores informados for poss�vel efetuar o
referido c�lculo. Lembre-se de que a vari�vel A deve ser diferente de zero. Obs: use a fun��o
pow() da biblioteca math.h*/

#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c;
    float delta, x1, x2;
    int opcao;

    do{
    printf("EQUACAO DO SEGUNDO GRAU\n");
    printf("1) Calcular o valor de uma equacao do segundo grau.\n");
    printf("2) Sair.\n");
    scanf("%d", &opcao);
    system("cls");

        switch(opcao)
        {
            case 1:
                do{
                    printf("Uma equacao do segundo grau e representada por tres elementos:\nax^2, bx, c.\n\n");
                    do{
                        printf("Informe um valor diferente de zero para a: \n");
                        scanf("%f", &a);
                        system("cls");
                    }while(a==0);
                    printf("Informe um valor para b: \n");
                    scanf("%f", &b);
                    system("cls");
                    printf("Informe um valor para c: \n");
                    scanf("%f", &c);
                    system("cls");

                    delta = (pow(b,2)-(4*a*c));
                    if(delta < 0)
                    {
                        printf("Nao ha raiz real de numero negativo. Verifique sua equacao.\n");
                        getch();
                        system("cls");
                    }
                }while(delta < 0);

                x1 = -b + pow(delta, 1/2);
                x2 = -b - pow(delta, 1/2);

                printf("Os possiveis valores para x sao:\n %f e %f.", x1, x2);
                getch();
                system("cls");
            break;
            case 2:
            break;
            default:
                printf("Opcao invalida.");
            break;
        }
    }while(opcao!=2);
}
