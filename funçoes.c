#include <stdio.h>

float soma(float a, int b) {
	float resultado;
	resultado = a + b;
	return resultado;
}

float multiplica(float a, int b) {
	float resultado;
	resultado = a * b;
	return resultado;
}
int main() {
	float a;
	int b;
	float s;
	a = 10.3;
	b = 20;
	s = soma(a,b);
	printf("A soma de %f com %d e %f\n", a, b, s);
}
