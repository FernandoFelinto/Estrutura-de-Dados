#include <stdio.h>
#include <stdlib.h>

int *p; //criando o ponteiro 'p'
int val = 5;

int main()
{
	p = &val; //'p' aponta para o endereço de 'val'
    printf("O valor apontado por 'p' e: %d", *p);
    return 0;
}