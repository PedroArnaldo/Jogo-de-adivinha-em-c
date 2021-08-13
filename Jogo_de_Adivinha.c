#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

//#define numeroTentativas 3

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("*************************************\n");
    printf("* Bem-vindo ao Jogo de  Adivinhação *\n");
    printf("*************************************\n");

    int numerosecreto, chute;
    numerosecreto = 42;
    int numeroTentativas = 1;
	
	while(true)
	{
		printf("Qual é o seu chute? ");
	    scanf("%d", &chute);
	    
	    if(chute < 0)
	    {
	    	printf("Você não pode chutar números negativos.\n");
	    	numeroTentativas--;
	    	continue;
		}
	
	    printf("\nVocê chutou o número: %d\n", chute);
	
	    bool acertou = chute == numerosecreto;
	    bool maior = chute > numerosecreto;
	
	    if(acertou)
	    {
	        printf("=> Parabêns! Você acertou!\n");
	        break;
	
	    }
	    else if(maior)
	    {
	    	printf("=> Seu chute foi maior do que o número secreto!\n");
		}
	    else
	    {
	        printf("=> Seu chute foi menor do que o número secreto!\n");
	    }
	        
	    
	    printf("\n");
	    
	    numeroTentativas++;
	}
    
    printf("Você acertou em %d tentativas", numeroTentativas);
    printf("Obrigado por jogar!\n\n");


    system("pause");
    return 0;
}
