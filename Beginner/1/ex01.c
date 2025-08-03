// ​1 - Apresentação do Jogador

// Crie um programa que peça o primeiro nome de um jogador, sua idade e a quantidade de gols que ele já fez na carreira. Em seguida, exiba essas informações na tela.

#include <stdio.h>

int main() {
    
    char nome[10];
    int gols, idade;


    printf("Insira o nome: \n");
    scanf("%s", &nome);

    printf("Insira a idade: \n");
    scanf("%d", &idade);

    printf("Insira a quantidade de gols na carreira: \n");
    scanf("%d", &gols);

    printf("Dados do jogador\n --------------------\n Nome: %s\n Idade: %d\n Gols na carreira: %d\n--------------------", nome, idade, gols);

    return 0;

}