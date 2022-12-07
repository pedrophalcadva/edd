#include <stdio.h>

float calculaArea(float largura, float comprimento) {
	return largura * comprimento;
}

int main() {
	
	float larg, comp, area;
	
	printf("\nDigite a largura: ");
	scanf("%f", &larg);
	printf("\nDigite o comprimento: ");
	scanf("%f", &comp);
	
	area = calculaArea(larg, comp);
	
	printf("A area e igual a %f", area);
	
}
