#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nota1,nota2,i;
     char nome[20];
    float media;

    for (i=0;i<=40;i++){

    printf("\n\n--- PROVA 1 DE ESTRUTURA DE DADOS ---\n");
    printf("\nDigite seu nome:\n");
    scanf("%s",&nome);
    printf("ALUNO %d\n",i);
    printf("\n%s, digite a sua nota: \n",nome);
    scanf("%d",&nota1);
    if(nota1==50){
       break;
       }
         printf("\n\n--- PROVA 2 DE ESTRUTURA DE DADOS ---\n");
    printf("\n%s, digite a sua nota\n",nome);
    scanf("%d",&nota2);
    media=(nota1 + nota2)/2;
    printf("\nA sua media eh %1.1f\n\n",media);
    }



    return (0);
}