#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main(){
	
	struct desc_avl *minhaAVL;
	struct nodo *novonodo;
	int op=0, chave=0, delecao=0;
	
	novonodo=crianodo();
	
	while(1){
	printf("\n============Menu=============\n");
	printf("1.Criar AVL\n");
	printf("2.Inserir na AVL\n");
	printf("3.Remover elemento\n");
	printf("4.Imprimir\n");
	printf("5.Sair\n");
	printf("\n=============================\n");
	printf("informe a opcao:");
	setbuf(stdin,NULL);
	scanf("%i", &op);
	switch(op){
		
		case 1:
		minhaAVL=criadescritor();
		break;
		case 2:
		printf("\ninforme a chave para ser alocada\n");
		setbuf(stdin,NULL);
		scanf("%i", &chave);
		//novonodo=crianodo();
		minhaAVL->raiz=insereAVL(chave,minhaAVL->raiz);
		break;
		case 3:
		printf("\nINFORME A CHAVE A SER REMOVIDA\n");
		scanf("%i", &delecao);
		minhaAVL->raiz=removeAVl(delecao,minhaAVL->raiz);
		break;
		case 4:
		imprimeinorder(minhaAVL->raiz);
		break;
		case 5:
		printf("\nsaindo do programa\n");
		return 0; 
		break;
		default:
		printf("\nopcao invalida\n");
		break;
		}
	
}
	return 0;
}

