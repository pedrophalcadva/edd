#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocate(LC_ALL, "Portuguese");
	
	float a;
	const float media = 6.0;
	
	printf("Digite a M�dia da Nota....");
	scanf("f%", &a);
	
	if(a >= media){
		printf("A M�dia da Nota � maior que 6.0");
	}
}
