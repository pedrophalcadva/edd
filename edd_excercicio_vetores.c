#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	struct cad_aluno {
		char nome[10];
		float nota1;
		float nota2;
		float media;
	};
	struct cad_aluno aluno;
	
	printf("Cadastro de alunos\n\n");
	printf("Informe o nome .......: "); scanf("%s", &aluno.nome);
	printf("Informe a 1a. nota ...: "); scanf("%f", &aluno.nota1);
	printf("Informe a 2a. nota ...: "); scanf("%f", &aluno.nota2);
	
	media = (nota1 + nota2) / 2;
	print
}
