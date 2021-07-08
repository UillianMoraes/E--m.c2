#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

float energia = 0;
float massa = 0;
const float velocidade = 8.987551787368176;

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a massa do objeto. %f \n", massa);
	scanf("%f" , &massa);
	fflush(stdin);
	energia = massa * velocidade;
	printf("A energia deste objeto é de %f joules. \n", energia);

};
