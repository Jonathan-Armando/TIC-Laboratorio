#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int numero;
	
	setlocale(LC_ALL, "portuguese");
	
	do{
		system("cls");
		printf("Informe um número de 5 dígitos: ");
		scanf("%d", &numero);
	}while(numero < 10000 || numero > 99999);
	
	int digito1 = (int) (numero/10000);
	int digito5 = (int) (numero%10);
	int digito2 = (int) ((numero/1000)%10);
	int digito4 = (int) ((numero%100)/10);
	
	if(digito1 == digito5 && digito2 == digito4){
		printf("\nO número %d é palíndromo\n", numero);
	}
	
	else
		printf("\nO número %d não é palíndromo\n", numero);
	
	return 0;
}