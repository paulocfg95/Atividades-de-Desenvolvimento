#include <stdio.h>
#include <locale.h>

void lerNumero (int seletor){
	
	printf ("********* CALCULADORA*********\n");
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*       Digite %d numero:      *\n",seletor);
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*******************************\n");
	
}

int mensagemOperacao (){
	int operacao;
	
	printf ("********* CALCULADORA*********\n");
	printf("*                             *\n");
	printf("*        Escolha a operação:  *\n");
	printf("*     1 - para soma           *\n");
	printf("*     2 - para subtracao      *\n");
	printf("*     3 - para multiplicacao  *\n");
	printf("*     4 - para divisao        *\n");
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*******************************\n");
	scanf("%d",&operacao);
	return operacao;
	system("cls");
	
 }
 void mensagemOpcaoInvalida(){
 	system("cls");
		printf ("********* CALCULADORA*********\n");
		printf("*                             *\n");
		printf("*                             *\n");
		printf("*                             *\n");
		printf("*        Opcao Invalida!      *\n");
		printf("*                             *\n");
		printf("*                             *\n");
		printf("*                             *\n");
		printf("*                             *\n");
		printf("*******************************\n");
		system("pause");
		system("cls");
 }
 

 float soma( float numero1,float numero2){
 	float resultado=numero1+numero2;
 	return resultado;
 }
 
  float subtracao( float numero1,float numero2){
 	float resultado=numero1-numero2;
 	return resultado;
 }
 
  float multiplicacao( float numero1,float numero2){
 	float resultado=numero1*numero2;
 	return resultado;
 }
 
  float divisao( float numero1,float numero2){
 	float resultado=numero1/numero2;
 	return resultado;
 }
  float mostrarResultado(float result){
  	printf ("********* CALCULADORA*********\n");
	printf("*                             *\n");
	printf("*           Resultado:        *\n");
	printf("*                             *\n");
	printf("*             %.2f            *\n",result);
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*******************************\n");
  }
void main () {
	setlocale(LC_ALL,"");
	float n1, n2,resultado;
	int opcao;
	
	opcao=mensagemOperacao();
	while (opcao>4 || opcao<1){
		mensagemOpcaoInvalida();
		opcao=mensagemOperacao();
	}
		
		
	system("cls");
	lerNumero(1);
	scanf("%f",&n1);
	system("cls");
	lerNumero(2);
	scanf("%f",&n2);
	switch (opcao){
		case 1:
			resultado=soma(n1,n2);
			system("cls");
			mostrarResultado(resultado);
			
			break;
		case 2:
			resultado=subtracao(n1,n2);
			system("cls");
			mostrarResultado(resultado);
			break;
		case 3:
			resultado=multiplicacao(n1,n2);
			system("cls");
			mostrarResultado(resultado);
			break;
		case 4:
			resultado=divisao(n1,n2);
			system("cls");
			mostrarResultado(resultado);
			break;	
		default:
			mensagemOpcaoInvalida();				
	}
	printf("\nDigite 1 para Voltar ao Inicio ou Qualquer outra tecla para finalizar:\n");
	scanf("%d",&opcao);
	if (opcao==1){
		system("cls");
		main();
	}
		
	
}
