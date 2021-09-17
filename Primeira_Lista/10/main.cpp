#include <stdio.h>
#include <locale.h>

int main(){
	float salarioMinimo;
	int quilowattsConsumidos;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o sal�rio m�nimo e a quantidade de quilowatts consumidos por uma resid�ncia:");
	scanf("%f%d", &salarioMinimo, &quilowattsConsumidos);
	
	float valorPorQuilowatts = salarioMinimo * 0.2;
	float valorAPagar = quilowattsConsumidos * valorPorQuilowatts;
	float valorComDesconto = valorAPagar - ((15 * valorAPagar) / 100);
	
	printf("\nValor por Quilowatts: %.2f AKZ", valorPorQuilowatts);
	printf("\nValor a pagar pela resid�ncia: %.2f AKZ", valorAPagar);
	printf("\nValor a pagar com desconto de 15%%: %.2f AKZ\n", valorComDesconto);
	
	return 0;
}