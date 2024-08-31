#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void verificaParOuImpar(int numero){
		if(numero%2==0)
		printf("%d É par.\n",numero);
	else 
		printf("%d É ímpar. \n",numero);	
	
}

void verificaDivisivelpor3(int numero){
	if(numero%3==0)
		printf("%d É divisível por 3.\n",numero);
	else 
		printf("%d Não é divisível por 3. \n",numero);
	
}
void cubo(int numero){
	int resultado;
	resultado=pow(numero,3);
	printf("O cubo de %d é %d\n",numero,resultado);
	}
int main() {
	setlocale(LC_ALL,"");
	int opcao,n;
	printf("Digite um numero!\n");
	scanf("%d",&n);
	system("cls");
	printf("Escolha a operação desejada: \n 1 - Par ou Impar \n 2 - Verificar se é divisivel por 3 \n 3 - Cubo do número \n");
	scanf("%d",&opcao);
	system("cls");

	switch (opcao){
		case 1 :
			verificaParOuImpar(n);
		break;
		
		case 2:
			verificaDivisivelpor3(n);
		break;
		
		case 3: 
			cubo(n);
		break;
		default:
			printf("Opcao invalida!\n");
			system("pause");
			
			
	}
	
return 0;
}