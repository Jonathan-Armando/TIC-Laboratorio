#include <stdio.h>
#include <locale.h>

int main(){
	float salarioActual, novoSalario;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe o salário de um funcionário: ");
	scanf("%f", &salarioActual);
	
	novoSalario = salarioActual + ((salarioActual * 25) / 100);
	
	printf("\nO novo salário do funcionário é: %.2f AKZ\n", novoSalario);
	
	return 0;
}