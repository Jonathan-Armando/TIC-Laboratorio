#include <stdio.h>
#include <locale.h>

int main(){
	int numero, sucessor;
	
	setlocale(LC_ALL, "portuguese");
	
	do{
		printf("Digite algum número: ");
		scanf("%d", &numero);
		
		sucessor = numero+1;
		
		printf("O sucessor de %d é %d\n", numero, sucessor);
	}while(numero >= 0); 
	
	return 0;
}