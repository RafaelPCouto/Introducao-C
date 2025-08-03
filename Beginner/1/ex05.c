/*5 - Diferença de Salários entre Jogadores

Peça ao usuário os salários de dois jogadores de futebol e mostre a diferença entre eles.*/

#include <stdio.h>

int main() {

    float salario1, salario2;

    printf("Digite o salario do primeiro jogador:\n");
    scanf("%f", &salario1);

    printf("Digite o salario do segundo jogador:\n");
    scanf("%f", &salario2);

    printf("Os jogadores possuem uma diferenca salarial de R$ %.2f", salario1 - salario2);

    return 0;
}