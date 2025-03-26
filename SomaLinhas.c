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
    int M,N,C,i,j;
    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d",&M);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d",&N);
    
    double mat[M][N];
    double vet[M];
    for (i = 0;i<M;i++){
        printf("Elementos da %d linha\n",i+1);
        for(j=0;j<N;j++){
        scanf("%lf",&mat[i][j]);
    }}
    
       for (i = 0;i<M;i++){
        vet[i]=0;
        for(j=0;j<N;j++){
        vet[i]=vet[i]+mat[i][j];
    }}
    
    printf("Vetor Gerado: \n");
    for (i = 0;i<M;i++){
        printf("%.1lf\n",vet[i]);
    }
    
    
	return 0;
}