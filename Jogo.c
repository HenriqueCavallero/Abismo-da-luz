#include <stdio.h>
#include <unistd.h>
#include <locale.h>

// var globais
int visitouCastelo = 0;
int visitouFloresta = 0;
int olharfloresta = 0;
int vidas = 3;
int checkpoint = 0;
int checsave;
int checkpointsMarcados = 0;
int escolha;

//conquistas
int paulada;

//itens
int carnepulsante=0;

// variáveis para controle de checkpoint por fase
int checkpointRitual = 0;
int checkpointCidade = 0;
int checkpointCano = 0;
int checkpointcastelofuga = 0;
int checkpointporao = 0;
int checkpointmansao = 0;

// declaração de funções
int ritual();
int morte();
int main();
int cidade();
int cano();
int dormir();
int floresta();
int florestaFuga();
int castelofuga();
int porao();
int prisao();
int mansao();
int deposito();
int depositofuga();
void resetGame();
void conquistas();

// função de conquistas
void conquistas() {
    printf("número de checkpoints marcados: %d\n", checkpointsMarcados);
    sleep(2);
    if (checkpointsMarcados == 0){
        printf("parabéns, você zerou o jogo sem salvar nenhuma vez! troféu: 'o que é um checkpoint ?'\n");
    }
    if (vidas == 3){
        printf("parabéns, você zerou o jogo sem morrer nenhuma vez! troféu: 'Zero Mortes, Zero Desculpas'\n");
    }
    if(paulada==1){
        printf("parabéns, você quebrou um cano no seu amigo, ou melhor...não amigo. troféu:'amigos amigos, negócios aparte'\n");
    }
    if(carnepulsante==1){
        printf("parabéns, você obteve um emaranhado de carne viva: a carne pulsante, que nojo ! troféu: 'açougueiro'");
    }
}

// reset de variáveis
void resetGame() {
    vidas = 3;
    checkpoint = 0;
    visitouCastelo = 0;
    visitouFloresta = 0;
    olharfloresta = 0;
    checkpointRitual = 0;
    checkpointCidade = 0;
    checkpointCano = 0;
    checkpointsMarcados = 0;
    checkpointcastelofuga = 0;
    checkpointporao = 0;
    carnepulsante=0;
    checkpointmansao=0;
}

int depositofuga(){
    printf("tem um homem velho, tão magro que você poderia ver seus ossos mesmo debaixo dos trapos que ele vestia.\n");
    sleep(3);
    printf("Pergunta: O que você faz?\n");
    sleep(2);
    printf("1 - Tenta sair pela porta\n");
    printf("2 - Tenta falar com o homem\n");
    return 0;
}

int deposito(){
    printf("Após essa conversa os 2 desconhecidos acabam saindo do depósito,\n");
    sleep(3);
    printf("trancando a porta ao saírem, você sabe que tem algo de errado nesta mansão,\n");
    sleep(3);
    printf("e precisa tomar uma atitude para escapar junto com o Wes.\n");
    sleep(3);
    printf("Pergunta: O que você faz?\n");
    sleep(2);
    printf("1 - Vai procurar uma maneira de sair daquele depósito e encontrar o Wes\n");
    printf("2 - Continua investigando o depósito\n");
    printf("escolha: \n");
    scanf("%d",&escolha);
    if(escolha==1){
        printf("Procurar uma maneira de escapar é a decisão mais óbvia nessa situação,\n");
        sleep(3);
        printf("e por sorte encontra um tipo de Túnel escondido atrás de uma caixa,\n");
        sleep(3);
        printf("ele está bem empoeirado assim como a passagem estreita e pequena que ele oferece,\n");
        sleep(3);
        printf("não entrar lá não é uma opção, já que Wes corre perigo.\n");
        sleep(3);
    }

    else{
        printf("Você continua procurando coisas suspeitas no depósito,\n");
        sleep(3);
        printf("você só acha pilhas e mais pilhas de pedaços de cadáver,\n");
        sleep(3);
        printf("uma cena digna de um documentário de um serial killer..\n");
        printf("O que você faz?\n");
        sleep(2);
        printf("Agora vai procurar uma maneira de sair daquele depósito e encontrar o Wes\n");
        printf("Continuar procurando coisas\n");
        printf("escolha: \n");
        scanf("%d",&escolha);
        if(escolha==1){
            printf("Ao adentrar nesse túnel, você encontra uma sala parecida com uma prisão,\n");
            sleep(3);
            printf("com poucas celas e com uma única porta reforçada, e em uma das celas\n");
            sleep(3);
            return depositofuga();
        }
        else{
            printf("Você continua bisbilhotando o depósito quando a porta abre de novo,\n");
            sleep(3);
            printf("você consegue se esconder como da primeira vez, mas dessa vez os 2 homens\n");
            sleep(3);
            printf("procuraram você, e alguns segundos depois deles entrarem, seus gritos\n");
            sleep(3);
            printf("ecoaram por aquele depósito...\n");
            return morte();
        }
    }

    return 0;
}

int mansao(){//fase3.2.1 caminho para final ruim
    printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
    scanf("%d", &checsave);
    while(checsave != 0 && checsave != 1) {
        printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
        scanf("%d", &checsave);
    }
    if(checsave == 1 && checkpointmansao == 0){
        checkpoint = 6;
        checkpointmansao = 1;
        checkpointsMarcados++;
    }
    printf("Quanto mais vocês adentram esse lugar, mais sinistro ele parece,\n");
    sleep(4);
    printf("até que vocês se deparam com uma mansão, quase escondida na paisagem,\n");
    sleep(4);
    printf("e sem nem parar Wes avança para ela, e você o segue enquanto sente o clima ficando frio\n");
    sleep(4);
    printf("e por um instante tem uma sensação arrepiante, seu amigo não parece estar sendo afetado por isso,\n");
    sleep(4);
    printf("ele parece tão corajoso, você se pergunta se ele sempre teve esse jeito escondido pela sua personalidade adorável,\n");
    sleep(4);
    printf("ou se tudo que ele passou antes acabou o mudando.\n");
    sleep(4);

    printf("Vocês entram na mansão, e surpreendentemente encontram pessoas,\n");
    sleep(4);
    printf("elas parecem simpáticas embora não falem muito, e acolhem vocês dizendo que seu patrão adora abrigar pessoas\n");
    sleep(4);
    printf("que se encontram perdidas nesse mundo, elas falaram que você e o Wes podem passar um tempo aqui,\n");
    sleep(4);
    printf("que seriam convidados privilegiados, você tenta perguntar sobre esse mundo,\n");
    sleep(4);
    printf("mas elas só falam dos incontáveis perigos lá fora e que hoje daqui a algumas horas, teria uma festa,\n");
    sleep(4);
    printf("e que os dois estavam convidados a participar dela, além disso eles lhes ofereceram comida, água,\n");
    sleep(4);
    printf("diversas roupas novas que pareciam ter saído de alguma novela do século 19 e prepararam até um banho de banheira,\n");
    sleep(4);
    printf("parecia que aquele lugar não fazia nem parte daquele mundo, e assim chega a noite.\n");
    sleep(4);

    printf("A noite o lugar em que estão parece ainda mais desconexo com todos os lugares que você viu,\n");
    sleep(4);
    printf("a mansão antes um pouco sombria, agora estava viva e quase tão iluminada quanto o próprio dia,\n");
    sleep(4);
    printf("as roupas que você e Wes vestem são dignas de um Baile Real, e se fosse isso, Wes certamente seria o Príncipe,\n");
    sleep(4);
    printf("aquela roupa parece só realçar o seu charme natural, vocês estão no quarto ainda e preparando para ir para o salão,\n");
    sleep(4);
    printf("mas você não é muito fã de bailes, dá para fazer alguma coisa para passar o tempo, Wes diz que quer ir a um lugar\n");
    sleep(2);
    printf("antes de vocês descerem...\n");
    sleep(2);
    printf("apartir disso, você se vê na necessiadade de fazer uma escolha");
    sleep(3);
    printf("Pergunta: O que você faz?\n");
    sleep(3);
    printf("1 - Você decide esperar Wes voltar\n");
    sleep(2);
    printf("2 - Você decide passear pela mansão\n");
    sleep(2);
    scanf("%d",&escolha);
    if (escolha==1){
        printf("Você fala para ele que vai esperá-lo, e que continuará a arrumar detalhes da sua roupa enquanto ele não volta.\n");
        sleep(4);
        printf("Ele sai do quarto e você se vira para continuar a se arrumar,\n");
        sleep(3);
        printf("mas poucos segundos a porta abre novamente, você começa a se virar pensando que ele tinha voltado por algum motivo,\n");
        sleep(4);
        printf("mas antes que consiga completar o movimento completamente, uma lâmina perfura um dos seus olhos,\n");
        sleep(4);
        printf("a dor e a surpresa impedem você de raciocinar naquele instante quem é que fez isso mesmo estando de frente para a pessoa,\n");
        sleep(4);
        printf("mas se pudesse você perceberia que era um dos convidados, ele não fala nada, só tira a lâmina de sua cavidade ocular,\n");
        sleep(4);
        printf("arrancando o seu olho do seu crânio, e com essa mesma lâmina.\n");
        sleep(4);
        printf("Você não teve a mínima chance de reagir…\n");
        sleep(3);
        return morte();
    }
    else{
        printf("Você decide dar uma volta pela mansão, festas como essa nunca foram do seu feitio,\n");
        sleep(3);
        printf("bem, de onde vocês vieram não tinha festas assim também, além disso, a mansão está linda,\n");
        sleep(3);
        printf("e seu espírito de jornalista lhe diz por que não um passeio né?\n");
        sleep(3);
        printf("Ao passear pela mansão e admirar as lindas esculturas e quadros, se desviando da visão das pessoas,\n");
        sleep(3);
        printf("você acaba por curiosidade adentrando em lugares não tão decorados da mansão,\n");
        sleep(3);
        printf("ao ir fundo em um deles você acaba encontrando um tipo de depósito,\n");
        sleep(3);
        printf("você abre muitas das caixas e barris que tem lá, em geral não tem nada demais neles,\n");
        sleep(3);
        printf("mas ao seguir para as profundezas daquele depósito, você sente um cheiro podre de carniça,\n");
        sleep(3);
        printf("e sem perceber acaba pisando em alguma coisa mole, ao olhar para o chão, tinha algo branco e vermelho,\n");
        sleep(3);
        printf("e ao se agachar para ver melhor, aquilo era definitivamente um olho humano,\n");
        sleep(3);
        printf("e antes que você pudesse pensar mais sobre isso, alguém abre a porta do depósito.\n");
        sleep(3);
        printf("Pergunta: O que você faz?\n");
        sleep(3);
        printf("1 - Você decide se esconder\n");
        printf("2 - Você decide ficar parado e contar para aquela pessoa o que encontrou\n");
        printf("escolha: \n");
        scanf("%d",&escolha);
        if(escolha==1){
            printf("Apesar de estar apavorado, você rapidamente decide se esconder, escapando por 1 fio de ser visto,\n");
            sleep(4);
            printf("você escuta vozes..\n");
            sleep(2);
            printf("Desconhecido 1: Falei homem, você deve estar com o ouvido cheio de mosca!\n");
            sleep(3);
            printf("Desconhecido 2: Cala boca, eu escutei alguma coisa aqui! Você sabe que o mestre não gosta que suas vítimas\n");
            sleep(4);
            printf("descubram os seus planos antes que ele faça o que quiser com eles antes.\n");
            sleep(3);
            printf("Desconhecido 1: Você deve ter peidado sem perceber e achou que esse estrondo veio daqui, vamos embora logo!\n");
            sleep(4);
            printf("Desconhecido 2: Tomara que seja isso mesmo Haahaha! vamos então!\n");
            sleep(3);
            return deposito();
        }
        else{
            printf("Você fica parado e é rapidamente avistado por 2 homens,\n");
            sleep(3);
            printf("você chama eles quase desesperadamente para eles verem o que você encontrou,\n");
            sleep(3);
            printf("mas antes que você sequer consiga falar o que você...\n");
            sleep(2);
            printf("Desconhecido: Parece que o chefe vai ficar decepcionado, afinal ele esperava que você fosse esperto, eu acho.\n");
            sleep(4);
            printf("- fala enquanto desembainhando algo que parece uma espada\n");
            sleep(3);
            printf("Antes que você pudesse falar qualquer coisa, ele o apunhala bem no peito,\n");
            sleep(3);
            printf("a lâmina atravessa seu coração e seu corpo, sua morte foi instantânea.\n");
            sleep(3);
            return morte();
        }
    }

    return 0;
}

int dormir(){//fase3.2 caminho para final ruim
    printf("Você ignora essa sensação,\n");
    sleep(3);
    printf("afinal com tantas coisas que vocês passaram,\n");
    sleep(3);
    printf("mas agora você está com ele,\n");
    sleep(3);
    printf("esses pensamentos devem ser só algum tipo de paranoia sua...\n");
    sleep(4);
    printf("não é?\n");
    sleep(3);
    printf("Vocês têm uma noite tranquila, apesar de tudo...\n");
    sleep(4);
    printf("Ao acordar, você se encontra frente a frente com ele,\n");
    sleep(3);
    printf("Wes estava lhe observando, o seu rosto continua indecifrável.\n");
    sleep(4);
    printf("No momento que ele vê que você acordou, ele mostra um sorriso,\n");
    sleep(3);
    printf("você fica feliz por estar naquela situação por pelo menos alguns segundos,\n");
    sleep(4);
    printf("afinal, embora o lugar onde se encontram seja terrível, vocês estão próximos,\n");
    sleep(4);
    printf("e definitivamente isso foi o mais próximo que você chegou de uma intimidade com ele.\n");
    sleep(4);
    printf("E após essa troca de olhares, sem nem mesmo dar um sinal, ele lhe beija.\n");
    sleep(4);
    printf("Foi muito repentino, tão repentino que você paralisa.\n");
    sleep(3);
    printf("E sem mais nem menos ele se levanta, e apesar dos seus pedidos de espera,\n");
    sleep(4);
    printf("ele sai da cabana.\n");
    sleep(3);
    printf("Você o segue, mas antes que possa falar algo, ele fala:\n");
    sleep(3);
    printf("Wes: Para onde vamos agora?\n");
    sleep(3);
    printf("A mistura entre felicidade e confusão que você está sentindo\n");
    sleep(3);
    printf("te deixa incapaz de sequer questionar o porquê daquela ação.\n");
    sleep(4);
    printf("E então fala com as palavras quase não saindo:\n");
    sleep(3);
    printf("Walter: b-bem, po-podemos seguir a trilha, o que acha?\n");
    sleep(4);
    printf("Wes, sem pensar muito, concorda, então vocês partem.\n");
    sleep(3);
    printf("Vocês andam bastante, dessa vez Wes está guiando,\n");
    sleep(3);
    printf("talvez tentando seguir seus instintos para encontrar a saída mais rápido possível.\n");
    sleep(4);
    printf("Claro que você se deixa levar, ainda está pensando no que aconteceu mais cedo...\n");
    sleep(4);
    printf("Você percebe que enquanto andam o ambiente parece mudar ainda mais.\n");
    sleep(3);
    printf("Estranhamente, quanto mais seguem em frente, mais o dia desaparece.\n");
    sleep(4);
    printf("Ali não parecia seguro, você sente que deve tomar uma atitude.\n");
    sleep(4);
    printf("Pergunta: O que você faz?\n");
    sleep(3);
    printf("1 - Você decide avisá-lo sobre a sua sensação.\n");
    printf("2 - Você não fala nada, afinal, parece que qualquer lugar nesse mundo não parece seguro.\n");
    printf("3 - Você decide que vocês não podem ir naquele lugar, e fala pro Wes sobre a sua decisão.\n");
    printf("escolha: ");
    scanf("%d",&escolha);
    if(escolha==1){
        printf("Você avisa ele sobre essa sensação, então ele se vira para você.\n");
        sleep(4);
        printf("Wes: Walter, nesse lugar, qualquer caminho é ruim para humanos,\n");
        sleep(4);
        printf("e eu não quero ir para outro lugar - Disse Wes expressando uma convicção notável.\n");
        sleep(3);
        printf("O que você faz?\n");
        sleep(2);
        printf("1- Você concorda com Wes \n");//[mesmo resultado da reação 2]
        printf("2- Você discorda de Wes e convence ele a seguir por outro caminho \n");//[mesmo resultado da reação 3]
        scanf("%d",&escolha);
        if(escolha==1){
            printf("Você decide continuar seguindo o Wes,\n");
            sleep(3);
            printf("e pensa nesse lugar desprezado por qualquer deus que exista,\n");
            sleep(3);
            printf("não existe uma escolha boa, e sim a menos pior.\n");
            sleep(3);
            return mansao();
        }
        else{
            printf("Você convence Wes que aquele caminho não era bom,\n");
            sleep(3);
            printf("e que poderiam achar outro melhor, e Wes aceita com só pouca resistência.\n");
            sleep(4);
            printf("No entanto, logo após você se virar, você sente garras rasgarem a sua garganta,\n");
            sleep(4);
            printf("você olha para trás sentindo sangue escorrer pelo seu corpo.\n");
            sleep(3);
            printf("não-Wes: Seu tolo, eu pensei que poderia brincar com você um pouco mais,\n");
            sleep(4);
            printf("mas bichas como você não sabem serem guiadas para o abate,\n");
            sleep(4);
            printf("pelo menos beija bem.. hahaha\n");
            sleep(3);
            printf("Fim de jogo!\n");
            sleep(2);
            return morte();
        }
    }
    else if(escolha==2){
        printf("Você decide continuar seguindo o Wes,\n");
        sleep(3);
        printf("e pensa nesse lugar desprezado por qualquer deus que exista,\n");
        sleep(3);
        printf("não existe uma escolha boa, e sim a menos pior.\n");
        sleep(3);
        return mansao();
    }
    else{
        printf("Você convence Wes que aquele caminho não era bom,\n");
        sleep(3);
        printf("e que poderiam achar outro melhor, e Wes aceita com só pouca resistência.\n");
        sleep(4);
        printf("No entanto, logo após você se virar, você sente garras rasgarem a sua garganta,\n");
        sleep(4);
        printf("você olha para trás sentindo sangue escorrer pelo seu corpo.\n");
        sleep(3);
        printf("não-Wes: Seu tolo, eu pensei que poderia brincar com você um pouco mais,\n");
        sleep(4);
        printf("mas bichas como você não sabem serem guiadas para o abate,\n");
        sleep(4);
        printf("pelo menos beija bem.. hahaha\n");
        sleep(3);
        printf("Fim de jogo!\n");
        sleep(2);
        return morte();
    }
    return 0;
}

int prisao(){//fase 3.1.5 caminho para final bom/final regular
    printf("Conforme a dupla saía da prisão, as vozes ficavam cada vez mais distantes\n");
	sleep(4);
	printf("e você não conseguia mais compreender o que era dito,\n");
	sleep(3);
	printf("a sua missão estava clara e seu tempo se esgotando.\n");
	sleep(3);
	printf("Você sai do seu esconderijo e se vê na necessidade de fazer uma escolha:\n");
	sleep(3);
	printf("Pergunta: o que você vai fazer?\n");
	printf("1- Seguir a dupla, furtivamente.\n");
	printf("2- Se aprofundar no laboratório.\n");
	printf("3- Pegar uma barra de metal e atacar o chefe por trás.\n");
    printf("escolha: \n");
    scanf("%d",&escolha);
    if(escolha==1){
        printf("Você decide seguir os dois, quem sabe que segredos mais você pode descobrir com eles.\n");
        sleep(4);
        printf("Você segue eles pela escada, escutando a conversa deles,\n");
        sleep(3);
        printf("porém um passo errado fez um barulho na escada, o chefe logo percebeu sua presença\n");
        sleep(4);
        printf("e você sente um peso invisível no seu pescoço lhe empurrando escada abaixo, seu medo se concretizou.\n");
        sleep(3);
	    return morte();
    }
    else if(escolha==2){
        printf("Você sente que logo logo está chegando até Wes, o verdadeiro Wes…\n");
        sleep(3);
        printf("Não uma cópia barata e monstruosa, você então avança até a próxima sala de onde a dupla saiu,\n");
        sleep(4);
        printf("ao entrar, você se depara com uma vista assustadora.\n");
        sleep(4);
    }
    else{
        printf("Você pega uma barra de metal que estava jogada pelo chão e segue de fininho até atacar o chefe pelas costas,\n");
        sleep(4);
        printf("ao acertar, a barra se deformou sem fazer sequer um arranhão nele,\n");
        sleep(3);
        printf("ele olha para trás enquanto Wartrox ri da sua cara de idiota.\n");
        sleep(3);
        printf("Pouco tempo depois dessa cena toda, você sente uma força agarrando sua cabeça\n");
        sleep(4);
        printf("e arrastando ela pela escadaria toda, sua cara está irreconhecível.\n");
        sleep(3);
        return morte();
    }
    return 0;
}

int porao(){//fase 3.1.4 caminho para final bom/ final regular
    printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
    scanf("%d", &checsave);
    while(checsave != 0 && checsave != 1) {
        printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
        scanf("%d", &checsave);
    }
    if(checsave == 1 && checkpointporao == 0){
        checkpoint = 5;
        checkpointporao = 1;
        checkpointsMarcados++;
    }
    printf("Você segue encarando para o abismo à sua frente,\n");
    sleep(4);
    printf("o seu maior medo nem é a escuridão, é algo de lhe empurrar da escada,\n");
    sleep(4);
    printf("experiências passadas marcam bem a sua vida.\n");
    sleep(3);
    printf("Mesmo com medo, a luz ilumina levemente este abismo,\n");
    sleep(3);
    printf("enquanto você segue com cada passo em um local que começa a cheirar podre,\n");
    sleep(4);
    printf("mas você sente já estar se acostumando com essas ocorrências.\n");
    sleep(3);
    printf("Seguindo ainda mais fundo, você começa a se deparar com uma sala que parece ser uma prisão,\n");
    sleep(4);
    printf("mas não tem grades, não tem prisioneiros,\n");
    sleep(3);
    printf("apenas mesas de uma pedra clara-escura, um tom nunca antes observado,\n");
    sleep(4);
    printf("pena que você não está com sua câmera.\n");
    sleep(3);
    printf("Ao avançar no corredor dessa 'prisão', você confere cada lado com medo de algo lhe atacar,\n");
    sleep(4);
    printf("a atmosfera pesa muito na sua decisão: que tipo de coisas você encontrará aqui?\n");
    sleep(4);
    printf("De repente, você começa a escutar vozes subindo de algum lugar,\n");
    sleep(3);
    printf("sua melhor opção é se esconder.\n");
    sleep(3);
    printf("Pergunta: onde você escolherá?\n");
    sleep(2);
    printf("1- Atrás de cortinas rasgadas em uma sala.\n");
    printf("2- Debaixo de uma mesa.\n");
    printf("3- Debaixo de uma cama quebrada.\n");
    printf("escolha: ");
    scanf("%d",&escolha);
    if(escolha==1 || escolha==2){
        printf("Não cobria muito do seu corpo, mas era o bastante.\n");
        sleep(3);
        printf("Você observa à distância uma conversa entre duas figuras,\n");
        sleep(3);
        printf("uma delas possui uma voz memorável...\n");
        sleep(3);
        printf("???: e aquele sujeito que veio conosco? Vai me dizer que perdeu ele?\n");
        sleep(3);
        printf("Não-Wes: aquele cara deu sorte que aquela floresta tinha obstáculos...\n");
        sleep(3);
        printf("Ele vai sofrer demais na próxima vez que eu o vê-lo,\n");
        sleep(3);
        printf("dá pra acreditar que ele me acertou nas costas com um pedaço de cano? UM PEDAÇO DE CANO,\n");
        sleep(4);
        printf("EU, WARTORX, SENDO ATACADO POR UM LIXO DESSES.\n");
        sleep(3);
        printf("???: calma Wartrox, nosso plano está fluindo bem, acho que esse cano te causou mais dano psicológico\n");
        sleep(4);
        printf("do que físico mesmo... Mas se ele não te causou tanto, como você voltou tão machucado?\n");
        sleep(4);
        printf("Wartrox: eu te falei chefe, aquele cara deu muita sorte, naquela floresta havia seres parecidos\n");
        sleep(4);
        printf("com aqueles gatos gigantes lá do nosso mundo e eles começaram a me atacar depois que eu pisei no rabo de um deles,\n");
        sleep(4);
        printf("e eu estava tomando tanto cuidado...\n");
        sleep(3);
        printf("???: que mancada em, mas tudo bem, Wes ainda está trancafiado,\n");
        sleep(3);
        printf("a energia dele está sendo bem filtrada para nossos fins, logo logo sairemos deste lugar\n");
        sleep(4);
        printf("e iremos dominar aquele lugar que só chove e fica congestionado toda hora.\n");
        sleep(4);
        printf("Não que eu sinta saudade, mas lá é melhor que aqui.\n");
        sleep(3);
        printf("Wartrox: sei bem chefe... e agora, o que faremos com aquele outro sujeito?\n");
        sleep(3);
        printf("???: ele também vai ser usado, mas se não conseguir pode só matar ele,\n");
        sleep(3);
        printf("Wes tem muito mais potencial que aquele varapau.\n");
        sleep(3);
        printf("Wartrox: ótimo, eu ainda tenho muito a fazer contra ele...\n");
        sleep(3);
        return prisao();
    }
    else{
        printf("Você decide escolher ficar debaixo de uma mesa, parecia simples, porém eficaz...\n");
        sleep(3);
        printf("Só parecia, esse tipo de esconderijo só funciona quando se é uma criança,\n");
        sleep(4);
        printf("você já estava bem grandinho, a mesa era alta demais para se esconder.\n");
        sleep(3);
        printf("Você não pode nem piscar para ver quem passava\n");
        sleep(3);
        printf("e você sente seu corpo sendo esmagado pela mesa que você pensou em se esconder.\n");
        sleep(4);
        printf("Não sobra nada de sólido no seu corpo.\n");
        sleep(3);
        return morte();
    }
    return 0;
}

int castelointerior(){//fase 3.1.3 caminho para final bom/ final regular 
    
    printf("Você se depara com um salão com corredores e uma escada no meio do salão,\n");
    sleep(4);
    printf("que bifurca em formato de T para duas direções.\n");
    sleep(3);
    printf("Há muito para explorar, cada tempo que você perde pode significar algo acontecendo com Wes.\n");
    sleep(4);
    printf("Só de pensar nisso, você sente uma mistura de medo e desconforto.\n");
    sleep(3);
    printf("Aquele desgraçado tentou te enganar fingindo ser Wes, você espera nunca mais ver ele,\n");
    sleep(4);
    printf("mas algo te diz que aquilo ainda vai voltar, o que quer que seja.\n");
    sleep(4);
    printf("Você encontra uma sala que parece ser um dormitório,\n");
    sleep(3);
    printf("não está nas melhores condições, mas ainda pode ser usado...\n");
    sleep(3);
    printf("Você quer descansar um pouco?\n");
    printf("1- Sim\n");
    printf("2- Não\n");
    printf("escolha: ");
    scanf("%d",&escolha);
    if(escolha==1){//opcao atalho
       printf("Talvez você não tenha muito tempo, mas é melhor deitar um pouco.\n");
        sleep(3);
        printf("Você, ao se aproximar da cama, sente cada passo pesado, o cansaço realmente está te vencendo,\n");
        sleep(4);
        printf("quem diria que uma noite sem dormir, sem nenhum café, iria te acabar tanto,\n");
        sleep(4);
        printf("é a idade cobrando suas dívidas.\n");
        sleep(3);
        printf("Você deita... você sente algo lhe movendo, mas o sono é mais forte que você...\n");
        sleep(4);
        printf("Você finalmente acorda, está numa sala estranhamente familiar,\n");
        sleep(3);
        printf("é a mesma sala em que você viu Wes preso, mas você estava lá deitado babando no chão.\n");
        sleep(4);
        printf("Um perigo eminente está para recair sobre você.\n");
        sleep(4);
    }
    else{
        printf("É melhor seguir em frente, a oferta é tentadora,\n");
        sleep(3);
        printf("porém seus objetivos são prioridade,\n");
        sleep(3);
        printf("há muitas salas para explorar e pouco tempo para perder.\n");
        sleep(3);
    }
	printf("Você sente algo começar a ressoar dentro de você assim que você sai do dormitório,\n");
	sleep(4);
	printf("parece ser aquela mesma luz que te ajudou na barreira, até quando será que ela vai te ajudar...\n");
	sleep(4);
	printf("Pergunta: Você quer confiar na luz?\n");
	sleep(2);
	printf("1- Não.\n");
	printf("2- Sim.\n");
	printf("3- Acertar a luz com suas mãos.\n");
    printf("escolha:");
    scanf("%d",&escolha);
    if(escolha==1){

        printf("A luz tenta te guiar para uma sala no andar de baixo,\n");
        sleep(4);
        printf("você decide ir para o andar de cima, ao entrar em uma sala de jantar,\n");
        sleep(4);
        printf("você dá de cara com várias sombras vermelhas, elas tinham forma de uma sombra humana, mas não era humana,\n");
        sleep(4);
        printf("aquilo emanava pura maldade; antes mesmo que você pudesse virar de costas,\n");
        sleep(4);
        printf("todas aquelas sombras forçaram as suas formas perturbadoras para dentro da sua boca,\n");
        sleep(4);
        printf("uma dor excruciante preenchia sua mandíbula, que tentava fechar, porém não conseguia de jeito nenhum.\n");
        sleep(4);
        printf("Depois de todas as sombras entrarem na sua carne, você sente como se seu corpo não te obedecesse mais\n");
        sleep(4);
        printf("e estivesse te expulsando, a sensação dolorosa de ser pressionado para fora de uma sala apertada, que não tem saída,\n");
        sleep(4);
        printf("a sensação angustiante de não conseguir mexer nada do seu corpo e ainda assim sentir dor...\n");
        sleep(4);
        printf("Você é comprimido por uma força invisível e seu corpo inteiro sofre uma implosão.\n");
        sleep(3);
        return morte();
    }
    else if(escolha==2){
        printf("A luz tem te ajudado bastante nesses últimos tempos,\n");
        sleep(3);
        printf("então você decide a seguir e ver aonde ela pretende te levar.\n");
        sleep(3);
        printf("Após um breve momento, a luz te leva até uma sala do andar de baixo, logo ao lado da escada.\n");
        sleep(4);
        printf("A sala parece bem escura, mas ainda parece que houve movimento por aquele caminho.\n");
        sleep(3);
        printf("A luz atravessa a porta e segue adiante, você tenta acompanhar e se dá de cara com uma escadaria para um tipo de porão.\n");
        sleep(4);
        return porao();
    }
    else{
        printf("Suas mãos atravessam a luz como se não fossem nada.\n");
        sleep(3);
        printf("A luz, que nem expressão possui de algum forma, expressava uma reação de decepção,\n");
        sleep(3);
        printf("e de repente várias luzes entram pelas janelas do castelo e te cercam, girando em uma velocidade assustadora.\n");
        sleep(4);
        printf("Você sente cada pedaço de seu corpo sendo queimado como se o Sol estivesse do seu lado,\n");
        sleep(3);
        printf("e eventualmente você vira cinzas.\n");
        sleep(3);
        return morte();
    }
    
    return 0;
}

int castelofuga(){//fase 3.1.2 caminho para final bom/ final regular
    
    printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
    scanf("%d", &checsave);
    while(checsave != 0 && checsave != 1) {
        printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
        scanf("%d", &checsave);
    }
    if(checsave == 1 && checkpointcastelofuga == 0){
        checkpoint = 4;
        checkpointcastelofuga = 1;
        checkpointsMarcados++;
    }
	printf("Incerto do que pode acontecer, você toca na barreira e sente uma luz saindo de seu corpo.\n");
	sleep(4);
	printf("A luz interage com a barreira e faz ela quebrar como se fosse pedaços de vidro,\n");
	sleep(4);
	printf("porém que não te cortam, apenas atravessam seu corpo, sem lhe afetar.\n");
	sleep(4);
	printf("O castelo, com um formato distorcido, agora está aberto.\n");
	sleep(3);
	printf("Você tem uma decisão a tomar.\n");
	sleep(2);
    printf("Para onde você quer ir?\n");
    sleep(2);
    printf("1- Entrar no castelo.\n");
    printf("2- Olhar a cidade novamente.\n");
    if(olharfloresta == 0){
        printf("3- Olhar a floresta novamente.\n");
    }
    scanf("%d",&escolha);
    if(escolha == 3 && olharfloresta == 0){
	printf("Você decide visitar a floresta conturbada que antes foi um grande campo de batalha,\n");
	sleep(4);
	printf("agora está completamente marcada com vísceras e sangue roxo,\n");
	sleep(4);
	printf("quem sabe tem algo de útil para você lá.\n");
	sleep(3);
	printf("Você se aprofunda na floresta, o lugar permanece com um cheiro pútrido desde antes,\n");
	sleep(4);
	printf("você explora cada pedaço da floresta em procura por algo,\n");
	sleep(3);
	printf("nem mesmo você tem certeza do que está procurando.\n");
	sleep(3);
	printf("Enfim, você percebe que só perdeu tempo e decide voltar pro castelo\n");
	sleep(3);
	printf("logo antes que seja tarde demais.\n");
	sleep(3);
        olharfloresta++;
    }
    else if(escolha==1){
        printf("Você decide que já perdeu tempo demais e adentra o castelo de uma vez,\n");
        sleep(4);
        printf("ainda com calafrios dos últimos ocorridos do seu caminho até aqui.\n");
        sleep(3);
        printf("Você mal pôde descansar apropriadamente, mas tem que seguir em frente.\n");
        sleep(3);
        return castelointerior();
    }
    else if(escolha==2){
        printf("Você decide que ainda há algo na cidade que pode lhe ajudar,\n");
        sleep(3);
        printf("mesmo tendo passado por lá várias vezes, talvez dessa vez você encontre algo de valor.\n");
        sleep(4);
        printf("Ao visitar a cidade, você procura cada lugar que ainda parecesse minimamente estruturado.\n");
        sleep(4);
        printf("Você novamente se vê diante da cabana, você decide dar uma olhada nos escombros.\n");
        sleep(3);
        printf("Ao levantar várias tábuas, você encontra um pedaço de carne pulsante,\n");
        sleep(4);
        printf("algo que parece vivo e que se adapta com o ambiente.\n");
        sleep(3);
        printf("Não está sangrando, não está te machucando, você decide manter, pode ser útil futuramente.\n");
        sleep(4);
        carnepulsante++;
        printf("você tem: %d carne pulsante\n",carnepulsante);
        return castelointerior();
    }
    return 0;
}

int florestaFuga(){//fase 3.1.1 caminho para final bom/ final regular
   
    printf("O monstro entra na floresta, ele parece te rastrear mas não precisamente,\n");
	sleep(4);
	printf("você se vê obrigado a continuar andando, o monstro assumiu uma forma sorrateira para te perseguir,\n");
	sleep(4);
	printf("o medo entrega a sua localização pouco a pouco.\n");
	sleep(3);
	printf("Você passa por um rio raso, olha para trás e percebe que o monstro parece evitar a água do rio,\n");
	sleep(4);
	printf("não faz sentido, quando ele assumia a forma de Wes ele não parecia evitar nenhum líquido,\n");
	sleep(4);
	printf("até bebeu água na sua frente.\n");
	sleep(3);
	printf("Sem muito tempo para pensar, você se vê perto de uma alcateia de onças dormindo,\n");
	sleep(3);
	printf("com passos cuidadosos você contorna os felinos, entretanto um deles acorda e corre em sua direção.\n");
	sleep(4);
	printf("Você já havia aceitado a morte nesse ponto, porém ele passou direto e avançou atrás de você,\n");
	sleep(4);
	printf("atacando o monstro que estava fazendo um péssimo trabalho em se esconder dos sentidos aguçados das onças.\n");
	sleep(4);
	printf("O monstro resistia aos ataques ferozes da onça até aparecer mais e mais, de repente vários animais cercavam o monstro,\n");
	sleep(4);
	printf("cobras, aranhas, todo tipo de ser vivo que nem mesmo você conhecia,\n");
	sleep(3);
	printf("porém parecia muito com o que você via na Internet.\n");
	sleep(3);
	printf("Você aproveita a chance e se aproxima de um lago e decide descansar lá,\n");
	sleep(3);
	printf("o monstro parecia estar com grandes dificuldades, mas você não quis pagar para ver se ele seria derrotado ou não.\n");
	sleep(4);
	printf("Você sente algo lhe observando...\n");
	sleep(3);
	printf("Ao acordar, você vê a onça líder da alcateia te observando,\n");
	sleep(3);
	printf("ela poderia ter te matado a qualquer momento, mas não o fez, e agora te encarava.\n");
	sleep(3);
    return 0;
}

int cano(){//fase 3.1 caminho para final bom/ final regular
    
    printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
    scanf("%d", &checsave);
    while(checsave != 0 && checsave != 1) {
        printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
        scanf("%d", &checsave);
    }
    if(checsave == 1 && checkpointCano == 0){
        checkpoint = 3;
        checkpointCano = 1;
        checkpointsMarcados++;
    }
    printf("Antes mesmo dessa criatura se virar, você já estava correndo para fora da cabana,\n");
	sleep(4);
	printf("ainda ouvindo a voz ecoando vindo da cabana.\n");
	sleep(3);
	printf("Aquilo parecia ter de fato machucado ele, mas não vai ajudar muito.\n");
	sleep(3);
	printf("Você corre da cabana até passar pela cidade e chegar novamente ao local onde você acordou.\n");
	sleep(4);
	printf("Aquela criatura ainda estava te perseguindo, cada vez mais mudando sua forma para te alcançar mais rápido.\n");
	sleep(4);
    printf("Mais uma vez, você se vê diante de 3 opções:\n");
    printf("1- Esconder-se na floresta.\n");
    printf("2- Voltar para a cidade.\n");
    printf("3- Ir para o castelo.\n");
    printf("para onde você vai ?");
    scanf("%d", &escolha);
    if(escolha == 1){
    printf("Você decide passar pela floresta, talvez você consiga usar um pouco do seu conhecimento para se esconder\n");
	sleep(4);
	printf("e quem sabe despistar o monstro.\n");
	sleep(3);
	printf("Você segue fundo, adentrando na floresta familiar.\n");
	sleep(3);
	printf("Você vê animais silvestres semelhantes a tigres e cobras, porém eles estão dormindo,\n");
	sleep(4);
	printf("afinal ainda é madrugada, todo cuidado é pouco ao caminhar.\n");
	sleep(3);
    return florestaFuga();
    }
    else if (escolha == 2){
        printf("Você volta para a cidade, mas é pego imediatamente pelo monstro que o perseguia.\n");
        sleep(3);
        printf("criatura: Que ideia mais idiota... voltar para onde você havia acabado de sair.\n");
        sleep(4);
        printf("Você sente sua vida se esvaindo...\n");
        sleep(3);
        printf("Enquanto o monstro lhe despedaça com extrema fúria.\n");
        sleep(4);
        printf("Ele grita contra o seu corpo sem vida.\n");
        sleep(3);
        return morte();
    }
    else if (escolha == 3){
        printf("O castelo não mudou em nada.\n");
        sleep(3);
        printf("Os tijolos parecem trepidar levemente e a barreira que antes estava firme agora parece instável.\n");
        sleep(4);
        printf("Ela lhe permite ver mais de perto o local, mas ainda não é possível atravessá-la.\n");
        sleep(4);
        printf("O monstro o alcança e você se vê sem saída.\n");
        sleep(3);
        printf("Desesperado, você tenta entrar no castelo.\n");
        sleep(3);
        printf("O monstro o agarra pelo torso.\n");
        sleep(3);
        printf("Ele o lança violentamente contra a parede.\n");
        sleep(3);
        printf("De novo...\n");
        sleep(2);
        printf("E de novo...\n");
        sleep(2);
        printf("Até que não sobra mais nenhum pedaço sólido do seu corpo.\n");
        sleep(3);
        return morte();
    }
    else{
        printf("\nOpção inválida. Tente novamente.\n");
    }
    return 0;
}

int cidade() {//fase 3
    
    printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
    scanf("%d", &checsave);
    while(checsave != 0 && checsave != 1) {
        printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
        scanf("%d", &checsave);
    }
    if(checsave == 1 && checkpointCidade == 0){
        checkpoint = 2;
        checkpointCidade = 1;
        checkpointsMarcados++;
    }
    printf("O que você faz?\n");
    printf("1- Sair da cabana discretamente e fugir\n");
    printf("2- Voltar a dormir \n");
    printf("3- Acertar Wes com um pedaço de cano da sua mochila \n");
    printf("4- Acordar Wes e enchê-lo de perguntas.\n");
    printf("Escolha: \n");
    scanf("%d", &escolha);
    if(escolha == 1){
        printf("\nVocê suspeita de algo...\n");
        sleep(2);
        printf("Não confia bem naquele Wes e sai de fininho levando suas coisas da cabana.\n");
        sleep(3);
        printf("Ao se afastar...\n");
        sleep(2);
        printf("...uma figura se aproxima por trás de você...\n");
        sleep(3);
        printf("e então...\n");
        sleep(2);
        printf("...você sente algo perfurando sua coluna...\n");
        sleep(2);
        printf("atravessando seus ossos.\n");
        sleep(3);
        printf("Não-Wes: que tolice sua... pensar que deixaria você fugir...\n");
        sleep(4);
        printf("Não-Wes: eu planejava me divertir um pouco mais... antes de te matar...\n");
        sleep(4);
        printf("Não-Wes: porém... você é esperto demais para o seu próprio bem...\n");
        sleep(4);
        printf("Não-Wes: sorte a sua que nem mesmo eu tenho tanto poder aqui...\n");
        sleep(4);
        printf("Não-Wes: ainda estou... aprendendo a usar melhor minhas habilidades\n");
        sleep(4);
        printf("...\n");
        sleep(2);
        printf("Aquilo de fato... não era Wes.\n");
        sleep(3);
        printf("Sua forma havia mudado...\n");
        sleep(3);
        printf("para a de um ser alongado... e cinza...\n");
        sleep(3);
        printf("com uma mão afiada...\n");
        sleep(2);
        printf("que atravessava seu abdômen...\n");
        sleep(3);
        printf("...paralisando quase que por completo seu corpo.\n");
        sleep(3);
        printf("Walter: seu... desgraçado... *tosse sangue*... o que você fez... com Wes?\n");
        sleep(4);
        printf("Não-Wes: primeiramente não me chamo 'desgraçado'\n");
        sleep(3);
        printf("Não-Wes: sou... Wartrox.\n");
        sleep(3);
        printf("Wartrox: segundamente eu não preciso explicar nada...\n");
        sleep(3);
        printf("...para um peso morto como você.\n");
        sleep(3);
        printf("Wartrox: durma bem, Walter\n");
        sleep(3);
        printf("foi bom brincar com você...\n");
        sleep(3);
        printf("mas eu já enjoei disso.\n");
        sleep(4);
        printf("Wartrox abre você de dentro para fora pelo seu abdômen\n");
        return morte();
    }
    else if(escolha == 2){
        printf("Você volta pra cama improvisada e pensa ser só ilusão sua,\n");
	    sleep(3);
	    printf("e que situações adversas mudam as pessoas drasticamente.\n");
	    sleep(3);
        return dormir();
    }
    else if(escolha == 3){
	paulada++;
    printf("Você acerta Wes nas costas com toda sua força com um pedaço de cano que havia pego ao passar pela cidade,\n");
	sleep(4);
	printf("o cano entorta e Wes solta um grito desumano enquanto sua forma antes humana se retorce violentamente.\n");
	sleep(4);
	printf("Não-Wes: VERME MISERÁVEL, PENSA MESMO QUE PODE ME MACHUCAR COM UM OBJETO TÃO FRÁGIL?\n");
	sleep(4);
        return cano();
    }
    else if(escolha == 4){
        printf("\nVocê acorda Wes e começa a questioná-lo sobre a sua chegada até a cidade...\n");
        sleep(3);
        printf("Wes parece claramente incomodado com tantas perguntas.\n");
        sleep(2);
        printf("Seu olhar se torna pesado.\n");
        sleep(2);
        printf("De repente...\n");
        sleep(2);
        printf("...algo acerta sua cabeça com muita força!\n");
        sleep(3);
        printf("Não-Wes: eu já tive o bastante...\n");
        sleep(2);
        printf("Não-Wes: não aguento mais pessoas como você...\n");
        sleep(3);
        printf("Não-Wes: que só ficam falando... e falando...\n");
        sleep(3);
        printf("Não-Wes: duvidando de tudo...\n");
        sleep(2);
        printf("Não-Wes: morra de uma vez!\n");
        sleep(3);
        printf("Você vê, de último relance, a forma de Wes.\n");
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".\n");
        sleep(2);
        printf("Não... aquilo não era Wes.\n");
        sleep(2);
        printf("Aquilo era tudo... menos o amigo que você jurava conhecer.\n");
        sleep(3);
        printf("A criatura diante de você tem uma forma perturbadora.\n");
        sleep(3);
        printf("Como se tivesse saído de um quadro expressionista...\n");
        sleep(3);
        printf("um sorriso deturpado...\n");
        sleep(2);
        printf("...e olhos sem nenhuma luz.\n");
        sleep(3);
        printf("Um verdadeiro abismo.\n");
        sleep(2);
        printf("Você sente seu corpo esfriar rapidamente...\n");
        sleep(3);
        printf("...\n");
        sleep(2);
        printf("você foi rasgado em pedaços enquanto agonizava\n");
        sleep(2);
        printf("a criatura parecia estar se divertindo\n");
        return morte();
    }
    else{
        printf("\nOpção inválida. Tente novamente.\n");
    }
    return 0;
}

int floresta() {//fase 2.1
    
    printf("Você caminha até uma floresta que parece idêntica às que você via no seu dia a dia\n");
    sleep(2);
    printf("eventualmente adentrando, ao chegar você se depara com animais silvestres.\n");
    sleep(2);
    printf("Entrar mais a fundo da floresta?\n");
    printf("1 - Sim\n");
    printf("2 - Não (voltar)\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    if(escolha == 1){
        printf("Esses animais são exatamente iguais aos que você conhece\n");
        sleep(3);
        printf("devorando carne de maneira esfomeada e desesperada\n");
        sleep(3);
        printf("porém havia um detalhe do qual você não havia se tocado\n");
        sleep(3);
        printf("esses animais estavam de olho em você\n");
        sleep(3);
        printf("você foi atacado e devorado de maneira brutal\n");
        sleep(2);
        return morte();
    } 
    else if(escolha == 2){
        visitouFloresta = 1;
        return ritual();
    } 
    else {
        printf("\nOpção inválida. Tente novamente.\n");
    }
    return 0;
}

int ritual() {//fase 2
    
    printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
    scanf("%d", &checsave);
    while (checsave != 0 && checsave != 1) {
        printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
        scanf("%d", &checsave);
    }
    if (checsave == 1 && checkpointRitual == 0) {
        checkpoint = 1;
        checkpointRitual = 1;
        checkpointsMarcados++;
    }
    printf("Você acorda, em um mundo confuso, como se tivesse acabado de ser criado,\n");
    sleep(2);
    printf("você se levanta e observa 3 lugares à distância:\n");
    sleep(3);
    do {
        printf("\nO que você faz?\n");
        if (visitouCastelo == 0) {
            printf("1 - Ir para um castelo feito de tijolos opacos, distorcendo a luz próxima.\n");
        }
        printf("2 - Ir para uma cidade sem nenhum sinal de vida.\n");
        if (visitouFloresta == 0) {
            printf("3 - Uma floresta normal (bizarramente comum).\n");
        }
        printf("Escolha: ");
        scanf("%d", &escolha);
        if (escolha == 1 && visitouCastelo == 0) {
            printf("\nVocê decide caminhar até o castelo, não estava tão longe...\n");
            sleep(2);
            printf("Ao caminhar, você sentia como se não avançasse do lugar.\n");
            sleep(2);
            printf("Parecia até que o castelo estivesse se movendo para longe de você.\n");
            sleep(2);
            printf("Uma barreira invisível te impedia de avançar. Você eventualmente desiste.\n");
            sleep(2);
            visitouCastelo = 1;
        } 
        else if (escolha == 2) {
            printf("\nVocê caminha até uma cidade, não parecia estar abandonada,\n");
            sleep(2);
            printf("mas você também não via nenhum sinal de vida: nem rios, nem animais, nem pessoas.\n");
            sleep(3);
            printf("Você adentra uma casa central da cidade, atraído pelo seu tamanho e arquitetura.\n");
            sleep(3);
            printf("Para sua surpresa, você se reencontra com Wes, \nele parece estar confuso e assustado mas ao lhe ver \nele pareceu ficar aliviado");
            sleep(3);
            printf(" você pergunta se ele está bem, ele diz que não, \nele explicou que acordou naquela sala \npouco antes de você entrar naquele momento\n");
            sleep(3);
            printf(" mas se recusa a falar o que aconteceu lá, ele propõe que \nencontremos uma maneira de fugir daquele lugar");
            sleep(3);
            printf(" você sente que ele está estranho, você se pergunta o que ele passou \ne o que fizeram com ele, mas decide não perguntar");
            sleep(3);
            printf("Enquanto caminham seu subconsciente investiga este lugar,\nele parece tão real, ao mesmo tempo você tem a estranha sensação \nque o próprio lugar parece estar tentando pregar uma peça em você");
            sleep(4);
            printf(" você se pergunta se Wes está sentindo a mesma coisa que você, \nmas não pergunta, você não sabe como ele está realmente.. ");
            sleep(3);
            printf("após uma longa caminhada, você está exausto de tanto andar, \ne já estava escurecendo, por sorte, uma cabana está \napenas a alguns metros de vocês");
            sleep(3);
            printf("e então você decide perguntar ao Wes se ele quer parar, e passar a noite ali:\n");
            sleep(3);
            printf("Walter: Wes, já estamos caminhando a horas, e já está anoitecendo, \nvamos parar e descansar naquela cabana, está bem?");
            sleep(3);
            printf("Wes se vira para você com um rosto indecifrável e então fala expressando um alívio quase teatral…\n");
            sleep(3);
            printf("Wes: tudo bem, eu já estava quase caindo no chão de cansaço, vamos lá amigo.\n");
            sleep(3);
            printf("Vocês chegam em uma cabana abandonada, \no local estava até que em boas condições, o que contrasta com o cenário da cidade \ndesolada onde você encontrou Wes");
            sleep(3);
            printf(" alguém tinha passado por lá antes? \nVocê para de pensar demais nisso e foca em descansar");
            sleep(3);
            printf("Onde você quer dormir?\n");
            printf("1- Na cidade.\n");
            printf("2- No chão.\n");
            printf("3- Não dormir.\n");
            scanf("%d",&escolha);
            printf("Você sugere um local para você e Wes dormirem,\n");
            sleep(3);
            printf("Wes olha para você com uma cara clara de julgamento,\n");
            sleep(3);
            printf("e faz 'não' com a cabeça, sugerindo dormirmos na cabana à frente.\n");
            sleep(3);
            printf("Você pensa que nem deveria ter perguntado nada.\n");
            sleep(3);
            printf("foi um longo caminho, luzes misteriosas, \ncaminhos confusos e reencontros inesperados, \né melhor descansar para o que há de vir amanhã");
            sleep(3);
            printf(" Vocês improvisam um travesseiro com uma mochila e algumas \nroupas e se cobrem com um pedaço pano longo coletado na cidade,\n");
            sleep(3);
            printf("estava um pouco sujo mas estava confortável, vocês deitam \npróximos um do outro para aproveitar o máximo do pano\n");
            sleep(3);
            printf(" Você decide ter uma última conversa com Wes antes de dormir:\n");
            sleep(2);
            printf("Walter: Wes?");
            sleep(2);
            printf("Wes: Problemas para dormir?");
            sleep(2);
            printf("Walter: Mais ou menos. Me diz, o que aconteceu contigo depois \ndaquela explosão de luz em que nos separamos naquela sala?\n");
            sleep(3);
            printf("Wes: Comigo? Não aconteceu nada, ainda sou eu mesmo hahahaha.\n");
            sleep(3);
            printf("Walter: ok então… Boa noite.\n");
            sleep(2);
            printf("Wes: boa noite amigo, descanse bem.\n");
            sleep(2);
            printf("De repente, você sente como se algo estivesse errado, Wes não é assim,\n");
            sleep(3);
            printf("uma atitude brincalhona e confiante, não estava com aquele jeito fofo e meigo que faz parte de seu charme\n");
            sleep(3);
            printf("ele também parecia mais alto do que o de costume, \ncoisa de alguns poucos centímetros de diferença e o modo como ele \nronca também não está igual como era antes\n");
            sleep(4);
            printf("um sentimento de insegurança lhe toma pela noite e você se levanta:\n");
            sleep(1);
            return cidade();
        } 
        else if (escolha == 3 && visitouFloresta == 0) {
            return floresta();
        }
        else {
            printf("\nOpção inválida ou já visitada.\n");
        }
    } while(1);
    return 0;
}

int Escapar() {//fase 1
    
    int ajuda = 0;
    printf("Você acorda em uma sala escura...\n");
    sleep(2);
    printf("Ela tem a aparência sombria de um hospital abandonado.\n");
    sleep(3);
    printf("Você está amarrado em uma cadeira, seus braços e pernas.\n");
    sleep(3);
    printf("Há um cheiro insuportável de podridão.\n");
    sleep(2);
    do {
        printf("\nO que você faz?\n");
        printf("1 - Tenta se soltar\n");
        printf("2 - Observa a sala\n");
        printf("3 - Pedir por ajuda\n");
        printf("4 - Se arrastar até uma porta próxima\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        if (escolha == 1){
            printf("\nVocê tenta se soltar... e por sorte o braço esquerdo da cadeira,\n");
            sleep(2);
            printf("já danificado, se solta, permitindo sua libertação!\n");
            sleep(2);
            printf("Após se libertar, você foge da sala...\n");   
            sleep(3);
            printf("o ambiente do lugar em que você está parece macabro.\n");
            sleep(3);
            printf("algo totalmente distinto de onde você e seu amigo estavam\n");
            sleep(2);
            printf("ao pensar nisso você se lembra do seu amigo, \no que será que aconteceu com ele, vocês foram sequestrados?\n");
            sleep(4);
            printf("Finalmente após o choque de estar ali \nvocê começa a se questionar onde está, \no que aconteceu e quem eram aquelas figuras.\n");
            sleep(5);
            printf("Você escuta vozes distantes, semelhante a uma conversa, \nporém muito longe, você segue a voz até chegar numa sala extremamente iluminada.\n");
            sleep(5);
            printf("Você tenta tirá-lo de lá, porém uma poderosa onda de choque perturba o ritual, \nWes cai no chão e a cadeira se desintegra, \ncomo se nunca existisse\n");
            sleep(5);
            printf("O local antes extremamente iluminado começa a escurecer, \num abismo se forma entre o chão do ritual puxando tudo ao seu redor \ncom uma força avassaladora.\n");
            sleep(5);
            printf("Quando você se dá conta, está em volta de luz, \numa luz violenta, sem cor, sem cheiro, vazia, \ncaindo e ao mesmo tempo subindo...\n");
            sleep(5);
            printf(", sem nenhuma noção de espaço ou tempo. Você fecha os olhos e dispersa sua consciência.\n");
            sleep(5);
            return ritual();
        } 
        else if (escolha == 2){
            printf("\nVocê observa a sala mais atentamente...\n");
            sleep(2);
            printf("Ela está quase vazia, apenas você e uma mesa cheia de um fluido escuro.\n");
            sleep(2);
            printf("Nada parece útil por enquanto.\n");
            sleep(2);
        } 
        else if (escolha == 3){
            ajuda++;
            if (ajuda == 1) {
                printf("\nVocê grita por ajuda, mas ninguém veio...\n");
                sleep(2);
                printf("Um silêncio sufocante domina o lugar.\n");
                sleep(2);
                printf("Você sente que pode tentar novamente, mas nada garante que sairá vivo...\n");
            }
            else {
                printf("\nVocê grita uma última vez...\n");
                sleep(3);
                printf("Nada apareceu... Nada apenas...\n");
                sleep(2);
                printf("Uma criatura que só existia em lendas está diante de você.\n");
                sleep(3);
                printf("Sem voz, sem opção e sem escapatória...\n");
                sleep(3);
                printf("Você foi morto e reduzido em pedaços minúsculos por uma força invisível.\n");
                sleep(4);
                return morte();
            }
        }
        else if(escolha == 4){
            printf("\nVocê se arrasta, mesmo amarrado, até uma porta à sua direita...\n");
            sleep(3);
            printf("Demorou, porém conseguiu chegar em uma sala mais escura.\n");
            sleep(3);
            printf("Você desvia o olhar da sala e ao olhar novamente uma luz te engolfa completamente.\n");
            sleep(4);
            printf("Você sente uma dor inexorável...\n");
            sleep(3);
            printf("Seus sentidos falham...\n");
            sleep(3);
            printf("Você não sente nem sequer a sua própria presença no mundo.\n");
            sleep(2);
            return morte();
        }
        else {
            printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (escolha != 1); 
    return 0;
}

int morte() {//função de morte e checkpoints
    
    vidas--;
    if (vidas > 0){
        printf("\nvocê morreu...");
        sleep(2);
        printf("não desista walter");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".\n");
        sleep(1);
        printf("Wes ainda precisa de você !!!\n");
        sleep(2);
        printf("Vidas restantes: %d\n", vidas);
        do {
            printf("\nDeseja continuar jogando? [1] Sim / [0] Não: ");
            scanf("%d", &escolha);
            if (escolha != 0 && escolha != 1) {
                printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
            }
        } while (escolha != 0 && escolha != 1);
        if (escolha == 0) {
            printf("Obrigado por jogar!\n");
            conquistas();
            return 0;
        } else {
            printf("Reiniciando do último checkpoint...\n");
            sleep(3);
            if(checkpoint == 0){
                return Escapar();
            }
            else if(checkpoint == 1){
                return ritual();
            }
            else if(checkpoint == 2){
                return cidade();
            }
            else if(checkpoint == 3){
                return cano();
            }
            else if(checkpoint == 4){
                return castelofuga();
            }
            else if(checkpoint == 5){
                return porao();
            }
            else if(checkpoint ==6){
                return mansao();
            }
        }
    } 
    else {
        do {
            printf("\nVocê perdeu todas as suas vidas...\n");
            sleep(2);
            printf("FIM DE JOGO\n");
            sleep(2);
            printf("\nDeseja jogar novamente? [1] Sim / [0] Não: ");
            scanf("%d", &escolha);
            if (escolha != 0 && escolha != 1) {
                printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
            }
        } while (escolha != 0 && escolha != 1);
        if (escolha == 1) {
            resetGame();
            return Escapar();
        } else {
            printf("Obrigado por jogar!\n");
            conquistas();
        }
    }
    return 0;
}

int main() {//menu
    setlocale(LC_ALL, "portuguese");
    printf("--  _________  --\n");
    printf("_|=============|_\n");
    printf("||Abismo da Luz||\n");
    printf("_|=============|_\n");
    do {
        printf("Jogar ?\n");
        printf("\n");
        sleep(1);
        printf("Pressione [1] para SIM ou [0] para NÃO\n");
        scanf("%d", &escolha);
        if (escolha != 0 && escolha != 1) {
            printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
        }
    } while (escolha != 0 && escolha != 1);
    if (escolha == 0){
        printf("encerrando...\n");
        return 0;
    }
    printf("seja bem vindo ao Abismo da Luz, conheça as regras\n");
    sleep(2);
    printf("você começa com 3 vidas, cada vez que morrer você perde uma vida, \nquando suas vidas chegarem a 0, o jogo acaba\n");
    sleep(4);
    printf("voce terá que tomar decisões de forma que consiga sobreviver e escapar deste lugar\n");
    sleep(4);
    printf("você terá oportunidade de escolher salvar o seu progresso\n");
    sleep(3);
    printf("mas quem sabe o que pode acontecer se você não salvar ?...\n");
    sleep(3);
    printf("lembre-se, você não joga\n");
    sleep(2);
    printf(".");
    sleep(1);
    printf(".");   
    sleep(1);
    printf(".\n");
    sleep(1);
    printf("você sobrevive\n");
    sleep(2);
    printf("boa sorte\n");
    printf("Você é um jornalista junior chamado Walter, buscando oportunidades de alavancar sua carreira \njunto com seu amigo Wes, tentam buscar reportagens que consigam fazer isso para os dois, e ao procurarem reportagens, \nem suas buscas eles acabam ouvindo relatos de movimentação suspeita um certo lugar, \num hospício,há muito tempo fechado, este hospício foi palco de múltiplas denúncias de torturas e desaparecimentos, \ne até mesmo relatos de pactos a algum tipo de entidade da crença local \nsegundo moradores de um vilarejo próximo, eles decidem investigar. \nNo entanto, ao adentrar a fundo naquele lugar, figuras não identificadas \nos pegaram desprevenidos, apagando os dois jornalistas...\n");
    printf("digite qualquer número para continuar\n");
    scanf("%d",&escolha);
    Escapar();
    return 0;
}