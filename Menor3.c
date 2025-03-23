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
    
    int menor,a,b,c;
        printf("Primeiro valor: ");
        scanf("%d",&a);
        printf("Segundo valor: ");
        scanf("%d",&b);
        printf("terceiro valor: ");
        scanf("%d",&c);
	

	if ( a<c && a<b){
	    printf("Menor: %d",a);
	}else if(c<b){
	    printf("Menor: %d",c);
	}else{
	    printf("Menor: %d",b);
	}
	return 0;
}