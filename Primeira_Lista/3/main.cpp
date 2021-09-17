#include <stdio.h>
#include <locale.h>

int main(){
	int anoNascimento, anoActual, idadeActual, idade2050;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o seu ano de nascimento e o ano actual:");
	scanf("%d%d", &anoNascimento, &anoActual);
	
	idadeActual = anoActual - anoNascimento;
	idade2050 = 2050 - anoNascimento;
	
	printf("\nA sua idade actual é: %d\n", idadeActual);
	printf("A sua idade em 2050 será %d anos de idade\n", idade2050);
	
	return 0;
}