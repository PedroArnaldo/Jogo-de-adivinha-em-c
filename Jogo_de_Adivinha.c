#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>


int main(void)
{
    
    printf("***********************************\n");
    printf("*Bem-vindo ao Jogo de  Adivinhação*\n");
    printf("***********************************\n");

    bool acertou;
    int secretnumber, chute;
    secretnumber = 42;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    printf("Você chutou o número %d\n", chute);

    acertou = chute == secretnumber? true : false;

    if(acertou)
    {
        printf("Parabéns! Você acertou!");

    }
    else
    {
        int maior = chute > secretnumber;
        if(maior)
        {
            printf("Seu chute foi maior do que o núemro secreto!\n");
        }
        else
        {
            printf("Seu chute foi menor do que o número secreto!\n");
        }
        
    }
    


     
    return 0;
}