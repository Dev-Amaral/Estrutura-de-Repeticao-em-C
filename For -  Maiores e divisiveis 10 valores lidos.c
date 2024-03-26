#include<stdio.h>
int main(){
	int i,valor,maior10=0,div10=0;
	for(i=0;i<10;i++){
		printf("Digite um valor\n");
		scanf("%d",&valor);
		if(valor>10){
			maior10++;
		}
		if(valor%10==0){
			div10++;
		}
	}
	printf("Qnt de valores maiores que 10= %d\nQtd de valores divisivei por 10= %d",maior10,div10);
	return 0;
}
