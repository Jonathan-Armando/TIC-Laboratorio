#include <stdio.h>
#include <locale.h>

int main(){
	float custoEspetaculo, custoConvite;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o custo de um espetáculo teatral e o custo do convite para o mesmo espetáculo:");
	scanf("%f%f", &custoEspetaculo, &custoConvite);
	
	int quantConvites = custoEspetaculo / custoConvite;
	
	printf("\nPara alcançar o custo do espetáculo é preciso vender cerca de %d convites\n", quantConvites);
	
	return 0;
}