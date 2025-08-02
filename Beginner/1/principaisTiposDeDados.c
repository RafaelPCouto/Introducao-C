#include <stdio.h>

int main() {
    int numero = 10;
    float numeroDecimal = 50.49;
    char letra = 'A';
    char nome[5] = "tobi";

    printf("Numero: %d \n", numero);
    printf("Numero: %.2f \n", numeroDecimal);
    printf("Letra: %c \n", letra);
    printf("Nome: %s \n", nome);

    return 0;
}