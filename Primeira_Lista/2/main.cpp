#include <stdio.h>
#include <locale.h>

int main(){
	float salarioMinimo, salarioFuncionario, output;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o sal�rio m�nimo e o sal�rio de um funcion�rio:");
	scanf("%f%f", &salarioMinimo, &salarioFuncionario);
	
	output = salarioFuncionario / salarioMinimo;
	
	printf("\nEste funcion�rio ganha %.2f vezes o sal�rio m�nimo\n", output, salarioMinimo);
	
	return 0;
}