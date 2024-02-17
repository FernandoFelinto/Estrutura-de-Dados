#include <stdio.h>
#include <stdlib.h>

int mat[2][3];

int main() {
	int i, j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("Digite um numero: ");
			scanf("%d", &mat[i][j]);
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("\nO valor de mat[%d][%d] = %d", i, j, mat[i][j]);
			}
	}
	return 0;
}
