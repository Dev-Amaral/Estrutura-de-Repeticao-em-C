#include <stdio.h>

int main(){
	int i=50, soma=0;
	while(i<=70){
		soma=soma+i;
		i+=2;	
	}
	
	printf("Soma= %d\nMedia= %d",soma,soma/10);
	
	return 0;
}
