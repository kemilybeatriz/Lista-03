/*
6) Ler quatro valores referentes a quatro notas de um aluno e imprimir uma mensagem dizendo que
o aluno foi aprovado, se o valor da média for maior ou igual a 7. Se o valor da média for menor
que 7, solicitar a nota de exame, somar com o valor da média e obter a nova média. Se a nova
média for maior ou igual a 5, apresentar uma mensagem dizendo que o aluno foi aprovado em
exame. Se o aluno não foi aprovado, indicar uma mensagem informando esta condição.
Apresentar com as mensagens o valor da média do aluno, para qualquer condição.
*/
#include <stdio.h>

#define MEDIA 7
#define MEDIA_EXAME 5

void main()
{
    float nota1, nota2, nota3, nota4, media, exame;
    int opcao, sair = 0;

    do{
        printf("CALCULO DE MEDIAS\n\n");
        printf("1) Calcular media.\n");
        printf("2) Sair.\n");
        scanf("%d", &opcao);
        system("cls");

        switch(opcao)
        {
            case 1:
                do
                {
                    printf("Primeira nota: ");
                    scanf("%f", &nota1);
                    if((nota1 < 0)||(nota1>10))
                    {
                        printf("Nota invalida! Digite novamente.\n");
                        getch();
                        system("cls");
                    }
                }while((nota1 < 0)||(nota1>10));

                do
                {
                    printf("Segunda nota: ");
                    scanf("%f", &nota2);
                    if((nota2 < 0)||(nota2>10))
                    {
                        printf("Nota invalida! Digite novamente.\n");
                        getch();
                        system("cls");
                    }
                }while((nota1 < 0)||(nota1>10));

                do
                {
                    printf("Terceira nota: ");
                    scanf("%f", &nota3);
                    if((nota3 < 0)||(nota3>10))
                    {
                        printf("Nota invalida! Digite novamente.\n");
                        getch();
                        system("cls");
                    }
                }while((nota1 < 0)||(nota1>10));

                do
                {
                    printf("Quarta nota: ");
                    scanf("%f", &nota4);
                    if((nota4 < 0)||(nota4>10))
                    {
                        printf("Nota invalida! Digite novamente.\n");
                        getch();
                        system("cls");
                    }
                }while((nota1 < 0)||(nota1>10));

                media = (nota1 + nota2 + nota3 + nota4)/4;
                //scanf("%f", &media);

                if(media >= MEDIA)
                {
                    printf("\nAluno aprovado com nota %f.", media);
                }else
                {
                    printf("Nota do Exame: ");
                    scanf("%f", &exame);
                    media = (media + exame)/2;
                    if(media >= MEDIA_EXAME)
                    {
                        printf("\nAluno aprovado em exame com nota %f.", media);
                    }else
                    {
                        printf("\nAluno reprovado com nota %f.", media);
                    }

                }
                getch();
                system("cls");
            break;
            case 2:
                sair = 1;
            break;
            default:
                printf("Opcao invalida.");
            break;
        }
    }while(opcao != 2);
}


