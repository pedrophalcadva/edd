#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, media;
	printf("Calcula a média com base em duas notas \n");
	printf("Informe a 1a nota: ");
	scanf("%f" , &a);
	printf("Informe a 2a nota: ");
	scanf("%f", &b);
	media = (a + b) / 2;
	printf("Média:  %3.1f" , media);
	if (media >=6){
		printf("\nAPROVADO");
	}else{
		printf("\nREPROVADO");
	}
}
