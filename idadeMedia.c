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
    int idade1,idade2;
    char nome1[50],nome2[50];
    double media;
        printf("Dados primeira pessoa:\n");
	    printf("Nome: ");
	ler_texto(nome1,50);
		printf("Idade: ");
	scanf("%d",&idade1);
	
	printf("Dados segunda pessoa:\n");
	limpar_entrada();
	    printf("Nome: ");
	ler_texto(nome2,50);
		printf("Idade: ");
	scanf("%d",&idade2);
		
	media= (idade1+idade2)/2.0;
	printf("A idade media de %s e de %s é de: %.1lf",nome1,nome2,media);
	
	
	return 0;
}