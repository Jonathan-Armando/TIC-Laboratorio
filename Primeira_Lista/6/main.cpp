#include <stdio.h>
#include <locale.h>

int main(){
	float custoEspetaculo, custoConvite;
	
	setlocale(LC_ALL, "portuguese");
	
	puts("Informe o custo de um espet�culo teatral e o custo do convite para o mesmo espet�culo:");
	scanf("%f%f", &custoEspetaculo, &custoConvite);
	
	int quantConvites = custoEspetaculo / custoConvite;
	
	printf("\nPara alcan�ar o custo do espet�culo � preciso vender cerca de %d convites\n", quantConvites);
	
	return 0;
}