#include <stdio.h>
#include <locale.h>

int main(){
	int numeroHoras;
	float salarioMinimo;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o n�mero de hora trabalhadas e o sal�rio m�nimo:");
	scanf("%d%f", &numeroHoras, &salarioMinimo);
	
	float valorPorHora = salarioMinimo / 2;
	float salarioBruto = valorPorHora * numeroHoras;
	float imposto = (3 * salarioBruto) / 100;
	float salarioLiquido = salarioBruto - imposto;
	
	printf("\nValor por hora: %.2f AKZ", valorPorHora);
	printf("\nSal�rio bruto: %.2f AKZ", salarioBruto);
	printf("\nImposto: %.2f AKZ", imposto);
	printf("\nSal�rio a receber: %.2f AKZ\n", salarioLiquido);
	
	return 0;
}