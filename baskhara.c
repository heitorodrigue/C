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
    
    double a,b,c,d,x1,x2;
        printf("Coenficiente a: ");
        scanf("%lf",&a);
        printf("Coenficiente b: ");
        scanf("%lf",&b);
        printf("Coenficiente c: ");
        scanf("%lf",&c);
	
	d =pow(b,2.0)- (4 * a * c);
	if ( a==0 || d<0 ){
	    printf("Essa equação nao existe");
	}else{
	x1= (-b + sqrt(d))/(2 * a);
	x2= (-b - sqrt(d))/(2 * a);
	printf("x1: %.4lf\n",x1);
	printf("x2: %.4lf",x2);
	}
	return 0;
}