#include <stdio.h>
#include <locale.h>

int main(){
	float precoFabrica, percentualLucro, percentualImposto, valorLucro, valorImposto, precoFinal;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe o pre�o de f�brica de um ve�culo: ");
	scanf("%f", &precoFabrica);
	puts("Informe o percentual de lucro do distribuidor e o percentual de impostos:");
	scanf("%f%f", &percentualLucro, &percentualImposto);
	
	valorLucro = (precoFabrica * percentualLucro) / 100;
	valorImposto = (percentualImposto * precoFabrica) / 100;
	precoFinal = precoFabrica + valorLucro + valorImposto;
	
	printf("\nO valor do lucro do distribuidor � %.2f AKZ", valorLucro);
	printf("\nO valor dos impostos � %.2f AKZ\n", valorImposto);
	printf("O pre�o final do ve�culo � %.2f AKZ\n", precoFinal);
	
	return 0;
}