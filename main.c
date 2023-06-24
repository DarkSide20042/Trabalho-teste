


int main() {
    // raiz da árvore
    No* raiz = criarNo(1, "Idade medieval");

    // nós filhos
    raiz->esquerda = criarNo(5, "escolha 1");
    raiz->direita = criarNo(10, "escolha 2");

    // nós filhos dos nós filhos
    raiz->esquerda->esquerda = criarNo(3, "escolha 3");
    raiz->esquerda->direita = criarNo(6, "escolha 4");
    raiz->direita->esquerda = criarNo(7, "escolha 5");
    raiz->direita->direita = criarNo(11, "escolha 6");

    // Teste para ver se os nós estão funcionando
    printf("Valor da raiz: %d, Historia: %s\n", raiz->x, raiz->historia);
    printf("Valor do filho esquerdo: %d, Historia: %s\n", raiz->esquerda->x, raiz->esquerda->historia);
    printf("Valor do filho direito: %d, Historia: %s\n", raiz->direita->x, raiz->direita->historia);
    printf("Valor do neto esquerdo: %d, Historia: %s\n", raiz->esquerda->esquerda->x, raiz->esquerda->esquerda->historia);
    printf("Valor do neto direito: %d, Historia: %s\n", raiz->esquerda->direita->x, raiz->esquerda->direita->historia);
    printf("Valor do neto esquerdo do filho direito: %d, Historia: %s\n", raiz->direita->esquerda->x, raiz->direita->esquerda->historia);
    printf("Valor do neto direito do filho direito: %d, Historia: %s\n", raiz->direita->direita->x, raiz->direita->direita->historia);

    return 0;
}
