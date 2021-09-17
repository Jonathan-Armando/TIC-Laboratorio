#include <stdio.h>
#include <locale.h>

int main(){
	int numero, somaDosPares = 0, somaDosImpares = 0, quantDosPares = 0, quantDosImpares = 0;
	float mediaDosPares, mediaDosImpares;
	
	setlocale(LC_ALL, "portuguese");
	
	for(int i = 1; i <= 10; i++){
		printf("Informe o %d� n�mero: ", i);
		scanf("%d", &numero);
		
		if(numero % 2 == 0)
			somaDosPares += i, quantDosPares++;
		
		else
		{
			somaDosImpares += i, quantDosImpares++;
		}
	}
	
	mediaDosPares = (float) (somaDosPares / quantDosPares);
	mediaDosImpares = (float) (somaDosImpares / quantDosImpares);
	
	printf("\nA m�dia dos pares �: %.2f\n", mediaDosPares);
	printf("A m�dia dos �mpares �: %2.2f\n", mediaDosImpares); 
	
	return 0;
}