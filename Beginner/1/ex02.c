// 2 - Média de Gols por Partida

// Escreva um programa que receba o número total de gols de um jogador e a quantidade de partidas jogadas. Depois, calcule e exiba a média de gols por partida.

#include <stdio.h>

int main() {

    float gols, jogos;

    printf("Insira o numero de gols: ");
    scanf("%f", &gols);
    printf("Insira o numero de jogos da carreira: ");
    scanf("%f", &jogos);

    printf("Media de gols: %.2f por jogo.", gols / jogos);

    return 0;


}