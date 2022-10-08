#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocate(LC_ALL, "Portuguese");
	
	float a;
	const float media = 6.0;
	
	printf("Digite a Média da Nota....");
	scanf("f%", &a);
	
	if(a >= media){
		printf("A Média da Nota é maior que 6.0");
	}
}
