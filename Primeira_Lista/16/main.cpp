#include <stdio.h>
#include <locale.h>

int main(){
	float altura, menor, maior;
	int cont = 1;
	
	menor = maior = 0.0;
	
	setlocale(LC_ALL, "portuguese");
	
	while(cont <= 15){
		printf("Informe a altura da %dª pessoa: ", cont);
		scanf("%f", &altura);
		
		if(cont == 1)
			menor = altura, maior = altura;
		
		else{
			if(altura < menor)
				menor = altura;
		
			if(altura > maior)
				maior = altura;
		}
		
		cont++;
	}
	
	printf("\nA menor altura é: %.2f\n", menor);
	printf("\nA maior altura é: %.2f\n", maior);
	
	return 0;
}