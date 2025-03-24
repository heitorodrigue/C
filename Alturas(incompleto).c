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
    
    double soma,media,perc;
    int i,N,nmenor;
    
        printf("Quantas  pessoas voce vai digitar: \n");
        scanf("%d",&N);
        char nomes[N][50];
        double altura[N];
        int idade[N];
        soma=0;
        for (int i=0;i<N;i++){
            printf("Digite a %d pessoa: \n",i+1);
            printf("Nome :");
            limpar_entrada();
            ler_texto(nomes,50);
            printf("Idade: ");
            scanf("%d",&idade[i]);
            printf("Altura: ");
            scanf("%lf",&altura[i]);
            soma = soma + altura[i];
        }
        printf("\n");
        media=soma/N;
        printf("Media das alturas: %.2lf\n",media);
       nmenor=0;
        for (int i=0;i<N;i++){
            if(idade[i]<16)
            nmenor++;
        }
        perc = nmenor * 100.0 / N;
        printf("Percentual dos menores: %.1lf %%\n",perc);
        
        for (int i=0;i<N;i++){
            if(idade[i] <16){
                printf("%s\n", nomes[i]);
            }
        }
	return 0;
}