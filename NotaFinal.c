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
    
    double nota1,nota2, media;
        printf("Digite a primeira nota: ");
        scanf("%lf",&nota1);
         printf("Digite a segunda nota: ");
        scanf("%lf",&nota2);
	  media= nota1+nota2;
	  printf("Nota final: %.1lf\n",media);
	if(media<60.00){
	    printf("REPROVADO");
	    }
	
	
	
	
	return 0;
}