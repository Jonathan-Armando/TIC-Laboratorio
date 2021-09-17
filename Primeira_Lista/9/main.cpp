#include <stdio.h>
#include <locale.h>

int main(){
	float pesoDoSaco, quantDoGato1, quantDoGato2;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o peso do saco de ração e a quantidade de ração dada para cada gato:");
	scanf("%f%f%f", &pesoDoSaco, &quantDoGato1, &quantDoGato2);
	
	float racaoRestante = pesoDoSaco - ((quantDoGato1 + quantDoGato2) * 0.001 * 5);
	
	printf("\nDepois de 5 dias restará %.2f Kg de ração\n", racaoRestante); 
	
	return 0;
}