#include <stdio.h>

int main() {

	int x, y;

	printf("Digite um valor para x\n");
	scanf("%d", &x);
	printf("Digite um valor para y\n");
	scanf("%d", &y);

	int resultado = x * y;

	printf("O produto de x e y é igual a: %d\n", resultado);
}