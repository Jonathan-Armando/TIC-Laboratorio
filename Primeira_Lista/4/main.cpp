#include <stdio.h>
#include <locale.h>

int main(){
	float salarioActual, novoSalario;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe o sal�rio de um funcion�rio: ");
	scanf("%f", &salarioActual);
	
	novoSalario = salarioActual + ((salarioActual * 25) / 100);
	
	printf("\nO novo sal�rio do funcion�rio �: %.2f AKZ\n", novoSalario);
	
	return 0;
}