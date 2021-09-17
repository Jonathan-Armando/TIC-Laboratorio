#include <stdio.h>
#include <locale.h>

int main(){
	float salarioMinimo, salarioFuncionario, output;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o salário mínimo e o salário de um funcionário:");
	scanf("%f%f", &salarioMinimo, &salarioFuncionario);
	
	output = salarioFuncionario / salarioMinimo;
	
	printf("\nEste funcionário ganha %.2f vezes o salário mínimo\n", output, salarioMinimo);
	
	return 0;
}