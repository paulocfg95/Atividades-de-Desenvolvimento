#include <stdio.h>
#include <stdlib.h>

void verificaParOuImpar(int numero){
		if(numero%2==0)
		printf("%d e par.\n",numero);
	else 
		printf("%d e impar. \n",numero);	
	
}

void verificaDivisivelpor5(int numero){
	if(numero%5==0)
		printf("%d e divisivel por 5.\n",numero);
	else 
		printf("%d nao e divisivel por 5. \n",numero);
	
}
void fatorial(int numero){
	int i,fatorial=1;
		for (i=1;i<=numero;i++){
		fatorial*=i;
		}
		printf("O valor do fatorial de %d e: %d\n",numero,fatorial);
		}
		
void tabuada(int numero){
	int i;
	for (i=1;i<=10;i++){
	printf("%d x %d = %d\n",numero,i,numero*i);
}
	
	
}
void main() {
	int n;
	printf("Digite um numero!\n");
	scanf("%d",&n);
	verificaParOuImpar(n);
	verificaDivisivelpor5(n);
	fatorial(n);
	tabuada(n);
	

}
