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
    
    int i,N,x;
        printf("Quantos numeros voce vai digitar: \n");
        scanf("%d",&N);

        int vet[N];
        for (int i=0;i<N;i++){
            printf("Digite um numero: ");
            scanf("%d",&vet[i]);
        }
        printf("Valores negativos: \n");
        for (int i=0;i<N;i++){
            if (vet[i]<0){
                printf("%d\n",vet[i]);
            }
        }

	return 0;
}