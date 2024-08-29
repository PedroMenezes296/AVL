#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

struct desc_avl *criadescritor(){
	struct desc_avl *minhaAVL = (struct desc_avl *)malloc(sizeof(struct desc_avl));
	minhaAVL->raiz=NULL;
	minhaAVL->tamanho=0;
	return minhaAVL;
	}
struct nodo *crianodo(){
	struct nodo *meunodo=(struct nodo*)malloc(sizeof(struct nodo));
	meunodo->pai=NULL;
	meunodo->esq=NULL;
	meunodo->dir=NULL;
	meunodo->chave=0;
	return meunodo;
	}
struct nodo *insereAVL(int chave, struct nodo *meunodo){
	
	if(meunodo==NULL){
		meunodo=(struct nodo *)malloc(sizeof(struct nodo));
		meunodo->chave=chave;
		meunodo->dir=NULL;
		meunodo->esq=NULL;
		}else{
		if(chave<meunodo->chave){
		meunodo->esq=insereAVL(chave, meunodo->esq);
			}else{
			if(chave>meunodo->chave){
			meunodo->dir=insereAVL(chave,meunodo->dir);	
			}}	
		}
		
		return meunodo;
		
		}
		struct nodo *removeAVl(int chave, struct nodo *meunodo){
			struct nodo *parametro, *filho;
			if(meunodo==NULL){
				printf("\nNodo nao encontrado\n");
				return meunodo;
				}else{
					if(chave<meunodo->chave){
						meunodo->esq=removeAVl(chave, meunodo->esq);
					}else{
						if(chave>meunodo->chave){
							meunodo->dir=removeAVl(chave,meunodo->dir);
							}else{//2 filhos
							if(meunodo->esq!=NULL && meunodo->dir!=NULL){
								parametro=find_min(meunodo->dir);
								meunodo->chave=parametro->chave;
								meunodo->dir=removeAVl(meunodo->chave,meunodo->dir);
								}else{//1 filhos
									parametro=meunodo;
									if(meunodo->esq==NULL){
										filho=meunodo->dir;
										}
									if(meunodo->dir==NULL){
										filho=meunodo->esq;
										}
										free(parametro);
									return filho;
								}
							}
					
						}
					}
			return meunodo;
			}
	struct nodo *find_min(struct nodo *meunodo){
		if(meunodo->esq!=NULL){
			meunodo=find_min(meunodo->esq);
			}
		return meunodo;
		}
	void imprimeinorder (struct nodo *meunodo){
    if(meunodo != NULL){
        imprimeinorder(meunodo->esq);
        printf("%i, ", meunodo->chave);
        imprimeinorder(meunodo->dir);
    }
}
	void imprimirPreOrdem(struct nodo *pRaiz){
    if(pRaiz != NULL){
        printf("\n%i", pRaiz->chave);
        imprimirPreOrdem(pRaiz->esq);
        imprimirPreOrdem(pRaiz->dir);
    }
}
	
	
	
	
	
