#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	float lado;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o lado de um quadrado: ");
	scanf("%f", &lado);
	
	float area =  pow(lado, 2.0);
	
	printf("A �rea do quadrado �: %.2f", area);
	
	return 0;
}