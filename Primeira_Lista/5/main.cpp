#include <stdio.h>
#include <locale.h>

int main(){
	float salarioActual, percentualAumento, valorAumento, novoSalario;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o salário de um funcionário e o percentual de aumento:");
	scanf("%f%f", &salarioActual, &percentualAumento);
	
	valorAumento = (salarioActual * percentualAumento) / 100;
	novoSalario = salarioActual + valorAumento;
	
	printf("\nO novo salário do funcionário é: %.2f AKZ\n", novoSalario);
	
	return 0;
}