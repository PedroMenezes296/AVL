struct nodo{
struct nodo *pai;
int chave;
struct nodo *esq;
struct nodo *dir;
int fator; 
int balanco;
};
struct desc_avl{
struct nodo *raiz;
int tamanho;
};
struct desc_avl *criadescritor();
struct nodo *crianodo();
struct nodo *insereAVL(int chave, struct nodo *meunodo);
struct nodo *removeAVl(int chave, struct nodo *meunodo);
struct nodo *find_min(struct nodo *meunodo);
void imprimeinorder(struct nodo *meunodo);
void imprimirPreOrdem(struct nodo *pRaiz);


