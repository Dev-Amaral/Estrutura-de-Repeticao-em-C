#include<stdio.h>
int main (){
	char resp;
	int valor,resultado=0;
	do{
		printf ("Digite um valor\n");
		scanf("%d",&valor);
		resultado=resultado+valor;
		printf("Deseja continuar? S ou N\n");
	    fflush(stdin);
		scanf("%c",&resp);
	} while (resp=='S'||resp=='s');
	
	printf("Somatorio= %d",resultado);
	
	return 0;
}
