#include <stdio.h>

int main(){
	int valor,i=0,soma=0;
	while(i<10){
		++i;
		printf("Digite o valor %d\n",i);
		scanf("%d",&valor);
		soma=soma+valor;
	}
	printf("Soma= %d",soma);
	
	return 0;
}