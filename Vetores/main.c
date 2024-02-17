#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int v[4];
	float v1[3];
	int i, j;
	v[0] = 45;
	v[1] = 78;
	v[2] = 9;
	v[3] = 5;
	
	for(i=0; i<3; i++){
		printf("Digite um valor: ");
		scanf("%f", &v1[i]);
	}
	
	for(j=0 ; j<3; j++){
		printf("O valor de v1[%d] = %.2f\n", j, v1[j]);
	}
	
	return 0;
}
