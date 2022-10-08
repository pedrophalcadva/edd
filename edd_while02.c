#include <stdio.h>
main(){
	int a, b, soma, i;
	i = 1;
	while( i <= 5){
	printf("\n\n Informe um valor (inteiro) para a:" );
	scanf("%d", &a);
	printf("Informe um valor (inteiro) para b: ");
	scanf("%d", &b);
	soma = a + b;
	printf("\ni = %d", i);
	printf("\nSoma = %d", soma);
	i++;
	}
}
