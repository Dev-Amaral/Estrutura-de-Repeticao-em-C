#include<stdio.h>
int main (){
	int i=0, par=0, valor;
	char resp;
	do{
		printf("Digite um valor\n");
		scanf("%d",&valor);
		i++;
		if(valor%2==0){
			par++;
		}
		printf("Deseja continuar digitando numero? S ou N?\n");
		fflush(stdin);
		scanf("%c",&resp);
	} while (resp=='s'||resp=='S');
	
	printf("Quantidade de valores lidos= %d\n",i);
	printf("Quantidade de valores pares lidos= %d",par);
	
	return 0;
}
