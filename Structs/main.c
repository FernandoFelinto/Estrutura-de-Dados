#include <stdio.h>
#include <stdlib.h>

struct pessoa{
	int idade;
	float altura;
};

int main() {
	
	struct pessoa p;
	p.idade = 15;
	p.altura = 1.65;
	
	printf("A altura da pessoa e: %.2f", p.altura);
	printf("\nA idade da pessoa e: %d", p.idade);
	return 0;
}
