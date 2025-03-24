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
    int N,cont,i,j;
    printf("Qual a ordem da matriz? ");
    scanf("%d",&N);
    
    int mat[N][N];
    for (i = 0;i<N;i++){for(j=0;j<N;j++){
        printf("Elemento[%d,%d]:",i,j);
        scanf("%d",&mat[i][j]);
    }}
    cont=0;
    printf("Diagonal principal: ");
    if(i==j){printf(mat[i][j]);};
    
    for (i = 0;i<N;i++){for(j=0;j<N;j++){
        if(mat[i][j]<0){
           cont++; 
        }
    }}
    printf("Negativos: %d",cont);
	return 0;
}