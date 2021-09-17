#include <stdio.h>
#include <locale.h>

int main(){
	int numero, somaDosPares = 0, somaDosImpares = 0, quantDosPares = 0, quantDosImpares = 0;
	float mediaDosPares, mediaDosImpares;
	
	setlocale(LC_ALL, "portuguese");
	
	for(int i = 1; i <= 10; i++){
		printf("Informe o %dº número: ", i);
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
	
	printf("\nA média dos pares é: %.2f\n", mediaDosPares);
	printf("A média dos ímpares é: %2.2f\n", mediaDosImpares); 
	
	return 0;
}