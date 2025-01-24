#include <stdio.h>

int main() {
	int soma = 0;
	for (int i = 0; i <= 100; i++) {
		soma = soma + i;
		i++;
	}
	printf("Soma de algarismos de 0 a 100: %d\n", soma);
}