/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
void limpar_entrada() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
	fgets(buffer, length, stdin);
	strtok(buffer, "\n");
}
int main()
{
    double area,largura,cumprimento,valor,preco;
    
	    printf("Digite a largura do terreno: ");
	scanf("%lf",&largura);
		printf("Digite o cumprimento do terreno: ");
	scanf("%lf",&cumprimento);
		printf("Digite o valor do terreno: ");
	scanf("%lf",&valor);
	
	area= largura * cumprimento; 
	printf("Area: %.2lf\n",area);
	preco = area * valor;
	printf("Valor do terreno: %.2lf",preco);
	
	return 0;
}