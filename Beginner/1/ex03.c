// 3 - Conversão de Minutos para Tempo de Jogo

// Peça ao usuário para digitar o tempo jogado em minutos. Depois, converta esse valor para horas e minutos e exiba o resultado.

#include <stdio.h>

int main() {


    int minutosJogados;
    float tempoJogoConvertido;

    printf("Insira os minutos jogados: ");
    scanf("%d", &minutosJogados);

    tempoJogoConvertido = minutosJogados / 60.0;

    printf("Tempo de jogo: %.2f horas", tempoJogoConvertido);

    return 0;

}