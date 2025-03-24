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
    
    double media,x;
    int i,N;
    
        printf("Quantos numeros voce vai digitar: \n");
        scanf("%d",&N);

        double vet[N];
        for (int i=0;i<N;i++){
            printf("Digite um numero: ");
            scanf("%lf",&vet[i]);
        }
        
        printf("\nValores: ");
        for (int i=0;i<N;i++){
                printf("%.1lf ",vet[i]);
        }
        printf("\n");
        x=0;
        for (int i=0;i<N;i++){
                x= x + vet[i];
        }
        printf("Soma: %.2lf\n",x);
        
        media= x/N;
        printf("Media: %.2lf\n",media);
	return 0;
}