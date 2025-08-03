// 4 - Calculando o Aproveitamento de um Time

// Crie um programa que peça o número de vitórias, empates e derrotas de um time. Depois, calcule o número total de pontos, seguindo a regra:

// Vitória = 3 pontos

// Empate = 1 ponto

// Derrota = 0 pontos

#include <stdio.h>

int main() {


    int vitorias, empates, derrotas;

    printf("Informe o total de vitorias: ");
    scanf("%d", &vitorias);

    printf("Informe o total de empates: ");
    scanf("%d", &empates);

    printf("Informe o total de derrotas: ");
    scanf("%d", &derrotas);

    printf("Total de pontos obtidos: %d", vitorias * 3 + empates);

    return 0;
}