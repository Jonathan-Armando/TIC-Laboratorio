#include <stdio.h>
#include <locale.h>

int main(){
	float pesoDoSaco, quantDoGato1, quantDoGato2;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o peso do saco de ra��o e a quantidade de ra��o dada para cada gato:");
	scanf("%f%f%f", &pesoDoSaco, &quantDoGato1, &quantDoGato2);
	
	float racaoRestante = pesoDoSaco - ((quantDoGato1 + quantDoGato2) * 0.001 * 5);
	
	printf("\nDepois de 5 dias restar� %.2f Kg de ra��o\n", racaoRestante); 
	
	return 0;
}