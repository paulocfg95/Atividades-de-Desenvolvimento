#include <stdio.h>
#include <locale.h>

//Mensagem para Solicitar o Numero do Usuário
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

//Função Exibir Menu
int mensagemOperacao (){
	int operacao;
	
	printf ("********* CALCULADORA*********\n");
	printf("*                             *\n");
	printf("*        Escolha a opera��o:  *\n");
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

 //Função Exibir Mensagem de Opção Inválida
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
 
//Função Soma
 float soma( float numero1,float numero2){
 	float resultado=numero1+numero2;
 	return resultado;
 }
 
 //Função Subtração
  float subtracao( float numero1,float numero2){
 	float resultado=numero1-numero2;
 	return resultado;
 }
 
 //Função Multiplicação
  float multiplicacao( float numero1,float numero2){
 	float resultado=numero1*numero2;
 	return resultado;
 }
 
 //Função Divisao
  float divisao( float numero1,float numero2){
 	float resultado=numero1/numero2;
 	return resultado;
 }
 //Função par Imprimir o Resultado
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
	
	//Verifica se a opção é válida
	opcao=mensagemOperacao();
	while (opcao>4 || opcao<1){
		mensagemOpcaoInvalida();
		opcao=mensagemOperacao();
	}
	system("cls");

	//Input de Numeros
	lerNumero(1);
	scanf("%f",&n1);
	system("cls");
	lerNumero(2);
	scanf("%f",&n2);

	//seleção de operação e processamento do cálculo
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

	//Pergunta se deseja voltar ao início ou finalizar a calculadora.
	printf("\nDigite 1 para Voltar ao Inicio ou Qualquer outra tecla para finalizar:\n");
	scanf("%d",&opcao);
	if (opcao==1){
		system("cls");
		main();
	}
		
	
}
