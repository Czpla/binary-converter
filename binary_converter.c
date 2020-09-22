//algoritimo desenvolvido por Eduardo Czpla Senkiw para trabalho de AEP da Unicesumar
//data: 20/09/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	//declaracao de variaveis
	int nDecimal, resto, i, j, opcao;
	
	char binarios[1000] = {};
	
	//saida de dados perguntando o numero a ser convertido
	system("cls");
	system("color a");
	printf("\n\t\t\t Bem vindo ao conversor de numeros decimais para binarios");
	printf("\n\n Dev: Eduardo Czpla Senkiw");
	printf("\n\n Digite o numero a ser convertido: ");
	
	//entrada de dados logo inserida na variavel nDecimal
	scanf("%d", &nDecimal);
	
	//repete enquanto o nDecimal for maior que 0
	for(i = 0; nDecimal > 0; i++){
		//adiciona na variavel resto o resto da divisao do numero nDecimal
		resto = nDecimal % 2;
		
		//caso nao tenha resto e acrescentado 0 no vetor binarios caso tenha resto adiciona 1
		if(resto == 0){
			binarios[i] = '0';
		} else {
			binarios[i] = '1';
		}
		
		//divide o numero nDecimal por 2 e adiciona a variavel nDecimal novamente
		nDecimal = nDecimal / 2;
	}
	
	//saida do resultado convertido
	printf("\n\n Resultado: ");
	for(j = strlen(binarios) - 1; j >= 0; j--){
		printf("%c ", binarios[j]);
	}
	
	//repete ate que o usuario informe a opcao correta
	while(opcao != 1 || opcao != 2) {
		//limpa o buffer do teclado
		setbuf(stdin, NULL);
		
		//saida de dados questionando o usuario para converter mais numeros
		printf("\n\n\n Deseja converter mais algum numero?");
		printf("\n\n 1 - SIM");
		printf("\n 2 - NAO");
		printf("\n\n Digite sua opcao: ");
	
		//entrada de dados logo inserida na variavel opcao
		scanf("%d", &opcao);
	
		//verifica opcao informada pelo usuario
		switch(opcao){
			case 1:
				//vai para o inicio do programa
				main();
			break;
			case 2:
				//sai do programa
				exit(0);
			break;
			default:
				printf("\n\n Opcao invalida, tecle enter e tente novamente");
				system("pause > NULL");
				system("cls");	
		}
	}
	
	system("pause > NULL");
	
	return 0;
}