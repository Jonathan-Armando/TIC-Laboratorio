#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int numero;
	
	setlocale(LC_ALL, "portuguese");
	
	do{
		system("cls");
		printf("Informe um n�mero de 5 d�gitos: ");
		scanf("%d", &numero);
	}while(numero < 10000 || numero > 99999);
	
	int digito1 = (int) (numero/10000);
	int digito5 = (int) (numero%10);
	int digito2 = (int) ((numero/1000)%10);
	int digito4 = (int) ((numero%100)/10);
	
	if(digito1 == digito5 && digito2 == digito4){
		printf("\nO n�mero %d � pal�ndromo\n", numero);
	}
	
	else
		printf("\nO n�mero %d n�o � pal�ndromo\n", numero);
	
	return 0;
}