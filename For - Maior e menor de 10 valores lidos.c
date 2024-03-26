#include <stdio.h>
int main (){
	
	int i, valor,maior=0,menor=2147483647;
	for (i=0;i<10;i++) {
		printf("Digite um valor\n");
		scanf("%d",&valor);
		if(valor>=maior){
			maior=valor;
		} else if (valor<=menor){
			menor=valor;
		}
		
	}
	
	printf("Maior= %d\nMenor= %d",maior,menor);
	return 0;
}
