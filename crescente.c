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
    
    int a,b;
        printf("Digite dois valores: \n");
        scanf("%d",&a);
        scanf("%d",&b);
	
    while(a!=b){
	if ( a > b){
	    printf("Decrescente\n");
	     printf("Digite outros dois valores: ");
        scanf("%d",&a);
        scanf("%d",&b);
	}else {
	    printf("Crescente\n");
	     printf("Digite outros dois valores: \n");
        scanf("%d",&a);
        scanf("%d",&b);
	}
    }
	return 0;
}