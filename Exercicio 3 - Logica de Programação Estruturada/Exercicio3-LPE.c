#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void verificaParOuImpar(int numero){
		if(numero%2==0)
		printf("%d � par.\n",numero);
	else 
		printf("%d � �mpar. \n",numero);	
	
}

void verificaDivisivelpor3(int numero){
	if(numero%3==0)
		printf("%d � divis�vel por 3.\n",numero);
	else 
		printf("%d n�o � divis�vel por 3. \n",numero);
	
}
void cubo(int numero){
	int resultado;
	resultado=pow(numero,3);
	printf("O cubo de %d � %d\n",numero,resultado);
	}
void main() {
	setlocale(LC_ALL,"");
	int opcao,n;
	printf("Digite um numero!\n");
	scanf("%d",&n);
	system("cls");
	printf("Escolha a opera��o desejada: \n 1 - Par ou Impar \n 2 - Verificar se � divisivel por 3 \n 3 - Cubo do n�mero \n");
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
	

}
