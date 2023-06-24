// n� da �rvore
typedef struct No {
    int x;
    char historia[300];
    struct No* esquerda;
    struct No* direita;
} No;

// Fun��o para criar um novo n�
No* criarNo(int x, char historia[300]) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->x = x;
    strcpy(novoNo->historia, historia);
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    //return novoNo permite q eu consiga acessar o endere�o de memoria do n� recem criado assim conseguindo usa-lo na arvore
    return novoNo;
}
