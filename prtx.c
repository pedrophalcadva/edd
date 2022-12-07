#include <stdio.h>

void troca_valores(int *ptrx, int *ptry) {
	int auxiliar;
	auxiliar = *ptrx;
	*ptrx = *ptry;
	*ptry = auxiliar;
	return;
}
int main(void) {
	int a, b;
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	
	printf("Voce digitou os valores na seguinte ordem: %d e %d\n", a, b);
	
	troca_valores(&a, &b);
	
	printf("Os valores trocados são: %d e %d", a, b);
	
}

int main(void) {
	
	int x = 20;
	
	printf("x vale: %d\n", x);
	
	soma10(x);
	printf("Agora x vale: %d\n", x);
	
	soma10p(&x);
	printf("Agora x vale: %d\n", x);
}
