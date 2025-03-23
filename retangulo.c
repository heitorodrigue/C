/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
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
    double area,base,altura,perimetro,diagonal;
    
	    printf("Digite a base do retangulo: ");
	scanf("%lf",&base);
		printf("Digite a altura: ");
	scanf("%lf",&altura);
		
	
	area= base * altura; 
	printf("Area: %.4lf\n",area);
    perimetro= (base * 2)+(altura*2);
	printf("perimetro: %.4lf\n",perimetro);
	diagonal=sqrt(pow(base,2.0)+pow(altura,2.0));
	printf("diagonal: %.4lf",diagonal);
	
	return 0;
}