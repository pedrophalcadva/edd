#include <stdio.h>
main() {
	int matriz[4];
	int i;
	for (i = 0; i <= 3; i++) {
		printf("Informe o %do. valor: ", i+1);
		scanf("%d", &matriz[i]);
	}
	printf("\nIndice 0 (zero): %d", matriz[0]);
	printf("\nIndice 1 (um): %d", matriz[1]);
	printf("\nIndice 2 (dois): %d", matriz[2]);
	printf("\nIndice 3 (três): %d", matriz[3]);
}
