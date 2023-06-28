//main
int main()
{    //habilita as letras e acentos da lingua portuguesa
    setlocale(LC_ALL, "Portuguese");
//escolhe a arvore a ser "criada" essa q vai na função de navegar
    int escolhaArvore;

    printf("Escolha a história que deseja jogar:\n");
    printf("1) Idade Medieval\n");
    printf("2) Idade Moderna\n");
    printf("3) Fim?\n->");
    scanf("%d", &escolhaArvore);
//inicialmente temos raiz = null;
    No* raiz = NULL;

    if (escolhaArvore == 1)
    {
        raiz = criarNo(1, "Idade Medieval\nVocê é um jovem guerreiro que acaba acordando em uma vila depois de horas de sono\nAo acordar, se depara com uma grande quantidade de tropas cercando a região onde você se encontra\n(1) Perguntar ao Ferreiro Julius o que está acontecendo\n(2) Fugir da vila o mais rápido possível");
        raiz->esquerda = criarNo(5, "Você: Ferreiro, o que está havendo aqui? Eu acordei com tropas cercando o local, mal lembro de como cheguei aqui\nJulius: Bem, meu caro, é uma pena que não se lembre, mas você é o terceiro comandante do exército da luz. Essas tropas que nos cercam são a Vanguarda das Sombras\nLembro que enviaram você para negociar com eles em um duelo, onde o exército da luz enviaria seu mais nobre e forte guerreiro para confrontar o deles, porem Sir Arthur não estava disponível\nEntão escolheram você, já que é o único e mais velho aprendiz dele\n(1) Ir à batalha\n(2) Fugir");
        raiz->direita = criarNo(10, "O jovem guerreiro foge da vila, ao escutar 3 baladas do sino percebesse uma forte luz\nEra a vila que em um piscar de olhos não se passava de brasas");
        raiz->esquerda->esquerda = criarNo(3, "Você se dirige ao posto da Vanguarda e espera seu adversário\n(1) Usar uma arma sagrada em combate\n(2) Usar magias\n");
        raiz->esquerda->direita = criarNo(6, "Ao tentar fugir, um membro da Vanguarda das Sombras vê isso como um sinal de rendição\nAssim, o General Turoc empala você e arranca sua cabeça da forma mais brutal possível como troféu dessa, entre aspas, 'batalha'\n");
        raiz->esquerda->esquerda->esquerda = criarNo(2,"A batalha se inicia, você enfrenta o grande General Turoc\nNosso jovem guerreiro carregava consigo 2 armas lendárias\nA lendária Excalibur e a primeira e mais brutal arma da humanidade, a Primeira Lâmina, arma forjada por Caim. Poderosa o suficiente para matar cavaleiros do inferno\nQual deseja usar?\n(1) Excalibur\n(2) A Primeira Lâmina");
        raiz->esquerda->esquerda->direita = criarNo(4,"Como aprendiz de Arthur e tendo em si o sangue do próprio Adão\nVocê tem o poder mais legal de todos, a invocação de meteoros capazes de destruir uma nação inteira\nVocê faz uma chuva de meteoros que caem na arena, destruindo brutalmente o General Turoc e seu exército");
        raiz->esquerda->esquerda->esquerda->esquerda = criarNo(1,"Você saca a arma de seu mestre, que lhe emprestou para essa feroz batalha\nO General Turoc é um oponente formidável, possui níveis refinados de técnicas marciais e de esgrima\nApós uma grande troca de golpes que ecoaram por toda a arena, você finalmente consegue derrotar o Grande General Turoc. Seus ferimentos vão embora depois da batalha, pois esse é o verdadeiro poder da espada lendária Excalibur");
        raiz->esquerda->esquerda->esquerda->direita = criarNo(3,"Após anos de estudo sobre relíquias antigas, você e sua equipe de expedição encontram a Arca da Aliança. Ao lado dela, uma lâmina que possui um formato único, feito de ossos de uma antiga fera\nContudo, após anos de estudo, a academia titulou aquela lâmina como 'A Primeira Lâmina Criada', a espada de Caim. Apesar de ser feita de ossos, ninguém jamais foi capaz de usá-la\nTodos que a empunharam ficavam loucos ou simplesmente se matavam por não aguentar o tamanho poder de uma lâmina não apenas lendária, mas sim como a primeira lâmina a tirar uma vida\nAo sacá-la, você se sente como um deus por um breve momento, porém depois desse breve momento, a loucura sobe à cabeça, fazendo você enfrentar Turoc sem nenhuma estratégia, apenas atacando sem se defender. No final, todos que usam a lâmina de Caim não morrem, a única maneira seria se matar usando a mesma. Depois de um confronto brutal, você consegue aniquilar o general Turoc, mas a sua loucura é tanta que você acaba matando todos que estavam assistindo à luta na arena. Como seu último passo, você desafia todo o exército da luz e, no final, acaba sendo morto por seu mestre Arthur");
    }
    else if (escolhaArvore == 2)
    {

        raiz = criarNo(1, "Idade Moderna\nVocê é um estudante do ensino médio, porém, com um grande diferencial: nesse mundo, existe magia\nContudo, você tem aula de invocação e está atrasado\n(1) Ir à aula\n(2) Matar aula");
        raiz->esquerda = criarNo(5, "Ao se deparar com o horário, você sai voando em direção à aula\nSr. Thurm: Ora, ora, o que temos aqui, chegando atrasado mais uma vez. Não tem vergonha disso? Todos chegam na aula no horário, mas já que você é dado como prodígio, acha que pode chegar a hora que quiser?\nVá agora à diretoria e conte que sempre chega atrasado na minha aula desde o início do semestre\n(1) Ir à diretoria\n(2) Confrontar o Sr. Thurm");
        raiz->direita = criarNo(10, "Decidido a faltar à aula de invocação, você vai ao fliperama mais próximo. No entanto, acaba se deparando com Jazz, sua amiga de infância, que ao te ver questiona:\nJazz: Por que você está aqui? Não deveria estar na aula?\n(1) Mentir\n(2) Falar a verdade");
        raiz->esquerda->esquerda = criarNo(3, "Chegando à diretoria, você encontra Sra. Evelin, uma moça de cabelos longos, grandes olhos dourados, que te dá uma bronca por sempre chegar atrasado. No entanto, ela entende a difícil situação que está passando. Afinal, seus pais morreram no início do ano por um arque-mago chamado Slade, que anteriormente era o diretor dessa escola. Contudo, desde esse incidente, nunca ninguém mais ouviu ou viu Slade, que foi tomado totalmente pelo lado sombrio da magia\nSra. Evelin entende como se sente e te dá um quente e confortante abraço\n(1) Voltar à aula\n(2) Ir ao fliperama");
        raiz->esquerda->direita = criarNo(6, "Você decide confrontar o Sr. Thurm, dizendo:\nVocê: Meus pais morreram protegendo esse lugar, enquanto você não conseguia fazer nada além de ficar paralisado. Você fala de mim como se fosse um prodígio, mas sempre me esforço para segurar essa dor e seguir em frente, tanto nos estudos quanto na vida. E você aí só reclama de tudo que eu faço. Se diz professor, mas na hora de precisão, não passou de um peso morto.\nSr. Thurm fica paralisado com as palavras, percebendo assim seu erro em negligenciar a saúde mental e física de um aluno. Ele pede desculpas por tudo e reconhece os erros. Depois disso, você continua com as aulas");
        raiz->direita->direita = criarNo(11,"Por serem amigos de infacia ela sabe a expressão que você faz quando mente, mas ela entende que você não fez por mal e tem um motivo por tras\n ao mesmo tempo ela não força você a conta, ela te convida para ir na casa dela tomar um chá ja que sua cara não esta a melhor possivel\n");
        raiz->direita->esquerda = criarNo(9,"Você conta a verdade para Jazz falando o porque não gosta das aulas de invocação e sobre seu passado\n ela entende completamente e vocês passam a tarde inteira no fliperama jogando street fighter\n");
    }

    else if (escolhaArvore == 3)
    {

        raiz = criarNo(1, "Fim? \n você acorda em uma sala estranhamente familiar com um homem vestindo um terno preto\n ???: ora ora você acordou jogardor, estava ansioso para conhece-lo\n vi todas essas jornadas que você se aventurou realmente impressionante como você consegue entrar no papel assim tão facil\n   (1)quem é você? \n (2) a quanto tempo Braim\n");
        raiz->esquerda = criarNo(5, "???: Quem eu sou não importa posso ser todos e ninguem, um verdadeiro paradoxo \n (1)o que você fala não faz sentido \n (2) se diz ser ninguem então porque se importa de falar comigo?");
        raiz->direita = criarNo(10, "Braim: pelo visto não é a primeira vez que nos encontramos jogador\n (1) fazer algumas perguntas \n (2) deixar Braim em paz ");
        raiz->esquerda->esquerda = criarNo(3, "???: nada na vida faz sentido meu caro, qual a logica de viver se em breve vai morrer e nada do que fez realmente vai importar? \n (1) \n (2)");
        raiz->esquerda->direita = criarNo(6, "???: o motivo é simples eu estou preso nesse jogo, assistindo milhares de pessoas tomando suas deciões criando suas proprias versões da historia\n bem vamos acabar com o papo aqui o criador pode acabar descobrindo sobre minha presença , seria uma pena ele me excluir do arquivo final");
        raiz->direita->esquerda = criarNo(7, "(1) por que não tem mais historias? \n (2)o que você acha sobre desenvolvimento de games:");
        raiz->direita->direita = criarNo(11, "Braim: Até breve caro jogador");
        raiz->direita->esquerda->esquerda = criarNo(6, "Braim: sendo sincero o desenvolver teve preguiça de desenvolver novas historias, alem do mais ele tinha muitas ideias para implementar, mas não fez por falta de tempo ou por limitações de não saber como fazer tal cois\n um exemplo disso é essa arvore em que estamo que tem o titulo de O FIM? era para ser uma viagem temporal onde passariamos por todas as jornadas que você teve meu caro jogador\n mas como não foi dada continuidade agora é apenas meu lar eu diria");
        raiz->direita->esquerda->direita = criarNo(8, "Braim: eu não conheço muito sobre desenvolvimento de games porem são horas e horas de desenvolvedores, escritores, enfim de toda a equipe por apenas algumas horas de gameplay\n olhando assim é bem triste você se esforçar e dedicar todo seu tempo e esforço para muitas das vezes seu jogo cair no esquecimento ou nem ter reconhecimento\n jogos iniciaram como arte, mas atualmente grande parte não passa de produtos sem alma ou qualquer tipo de amor\n (1) por que eu só posso responder com 1 e 2?");
        raiz->direita->esquerda->direita->esquerda = criarNo(6,"Braim: resposta é muito simples é uma arvore binaria, só temos a opção de ir para esquerda ou direita, mesmo assim eu até gostei das historias que esse desenvolverdor criou\n ele é bem do ruizinho ? é kkkkk mas fazer oque, em fim nosso tempo esta acabando meu caro jovem vou me despedir antes que seja tarde\n até breve meu caro jogador talvez algum dia nos encontramos denovo quem sabe");
    }
    else
    {
        printf("História inexistente \n");
        return 0;
    }
   //chama no main a navegaArvore
    navegarArvore(raiz);


    return 0;
}
