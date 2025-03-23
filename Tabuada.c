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
    
    int i, x, y;
        printf("Qual tabuada voce quer: \n");
        scanf("%d",&x);
        for(i=1;i<11;i++){
            y= x * i;
            printf("%d x %d=%d\n",x,i,y);
        }
	return 0;
}