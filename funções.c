//estrutura da arvore
typedef struct No
{
    int x;
    char historia[2000];
    struct No* esquerda;
    struct No* direita;
} No;
//função cria nó
No* criarNo(int x, const char* historia)
{
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->x = x;
    strcpy(novoNo->historia, historia);
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}
//função para navegar na arvore atrasvez de sub arvores
void navegarArvore(No* raiz)
{
    int escolha;

    while (raiz != NULL)
    {
        printf("%s\n", raiz->historia);
        printf("(3) Sair da história\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            if (raiz->esquerda == NULL)
            {
                printf("Caminho inexistente\n");
            }
            else
            {
                raiz = raiz->esquerda;
            }
            break;
        case 2:
            if (raiz->direita == NULL)
            {
                printf("Caminho inexistente\n");
            }
            else
            {
                raiz = raiz->direita;
            }
            break;
        case 3:
            printf(". . .Saindo no Jogo. . .");
            return;
        default:
            printf("Caminho inválido\n");
        }
    }
}
//função para salvar em arquivos o caminho feito pelo usuario
void salvarCaminho(const char* aventura)
{
    FILE* arquivo = fopen("aventura.txt", "a");
    if (arquivo == NULL)
    {
        printf("Erro ao criar o arquivo\n");
        return;
    }

    fprintf(arquivo, "Caminho percorrido:\n");
    fprintf(arquivo, "%s", aventura);

    fclose(arquivo);
    printf("\nCaminho salvo no arquivo 'aventura.txt'\n");
}
