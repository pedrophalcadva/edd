#include <stdio.h>
main() {
	char texto[] = "teste";
	int i;
	
	for (i=0; i<=5; i++) {
		printf("Valor do elemento %d da string = %c\n", i, texto[i]);
	}
}
