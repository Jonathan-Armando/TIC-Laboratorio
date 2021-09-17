#include <stdio.h>
#include <locale.h>

int main(){
	float precoFabrica, percentualLucro, percentualImposto, valorLucro, valorImposto, precoFinal;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe o preço de fábrica de um veículo: ");
	scanf("%f", &precoFabrica);
	puts("Informe o percentual de lucro do distribuidor e o percentual de impostos:");
	scanf("%f%f", &percentualLucro, &percentualImposto);
	
	valorLucro = (precoFabrica * percentualLucro) / 100;
	valorImposto = (percentualImposto * precoFabrica) / 100;
	precoFinal = precoFabrica + valorLucro + valorImposto;
	
	printf("\nO valor do lucro do distribuidor é %.2f AKZ", valorLucro);
	printf("\nO valor dos impostos é %.2f AKZ\n", valorImposto);
	printf("O preço final do veículo é %.2f AKZ\n", precoFinal);
	
	return 0;
}