// nó da árvore
typedef struct No {
    int x;
    char historia[300];
    struct No* esquerda;
    struct No* direita;
} No;

// Função para criar um novo nó
No* criarNo(int x, char historia[300]) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->x = x;
    strcpy(novoNo->historia, historia);
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    //return novoNo permite q eu consiga acessar o endereço de memoria do nó recem criado assim conseguindo usa-lo na arvore
    return novoNo;
}
