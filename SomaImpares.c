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
    
    int i, x, y, soma,troca;
        printf("Qual digite dois numeros: \n");
        scanf("%d %d",&x,&y);

        if(x>y){
            troca=x;
            x=y;
            y=troca;
        }
        soma=0;
        for (int i=x+1;i<y;i++){
            if(i%2!=0){
                soma=soma + i;
            }
        }
        printf("Soma dos impares: %d",soma);
	return 0;
}