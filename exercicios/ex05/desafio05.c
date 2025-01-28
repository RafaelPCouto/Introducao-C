#include <stdio.h>

int main() {

	int numeroescolhido = 0;
	int resultado = 0;

	printf("Digite o número que deseja saber a tabuada:");
	scanf("%d", &numeroescolhido);

	for (int index = 1; index <= 9; index++) {

		resultado = numeroescolhido * index;
		printf(" %d x %d = %d \n", numeroescolhido, index, resultado);

	}

}