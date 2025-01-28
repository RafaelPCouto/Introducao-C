#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

	// Imprime o cabeçalho do jogo

	printf("**********************************\n");
	printf("* Bem vindo ao jogo de adivinhação *\n");
	printf("**********************************\n");

	int segundos = time(0);
	srand(segundos);


	int numeroSecreto = rand() % 100;
	int chute;
	int tentativas = 0;

	double pontos = 1000;

	while (1){

		printf("Tentativa %d.\n", tentativas +1);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("Seu chute foi %d \n", chute);

		if (chute < 0) {
			printf("Você não pode chutar números negativos!\n");
			continue;
		}

		int acertou = chute == numeroSecreto;
		int menor = chute < numeroSecreto;

		if (acertou)
		{
			printf("Parabéns! Você acertou!\n");
			break;
		}
		else if (menor)
		{
			printf("Seu chute foi menor do que o número secreto.\n");
		}
		else
		{
			printf("Seu chute foi maior do que o número secreto.\n");
		}
		tentativas++;

		double pontosPerdidos = abs((chute - numeroSecreto) / (double)2);

		pontos = pontos - pontosPerdidos;

	}

	printf("Fim do jogo!!\n Você precisou de %d tentativas.\n", tentativas);
	printf("Total de pontos: %.1f\n", pontos);
}
