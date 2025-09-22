#include <stdio.h>
#include <unistd.h>
#include <locale.h>
#include <stdlib.h>

//var limitantes
int visitouCastelo = 0;
int visitouFloresta = 0;
int olharfloresta = 0;
int mecanismo =0;
int porta = 0;
// var globais
int vidas = 3;
int checkpoint = 0;
int checsave;
int escolha;

//conquistas
int paulada=0;
int checkpointsMarcados = 0;
int good = 0;
int neutrall = 0;
int mort=0;
int atalho=0;
int cano2=0;
int con=0;

//itens
int carnepulsante=0;

// variáveis para controle de checkpoint por fase
int checkpointRitual = 0;
int checkpointCidade = 0;
int checkpointCano = 0;
int checkpointcastelofuga = 0;
int checkpointporao = 0;
int checkpointmansao = 0;
int checkpointwes = 0;
int checkpointend = 0;
int checkpointbadend =0;

// declaração de funções
void ritual();
void morte();
int main();
void cidade();
void cano();
void dormir();
void floresta();
void florestaFuga();
void castelofuga();
void porao();
void prisao();
void mansao();
void deposito();
void depositofuga();
void wes();
int conquistas();
void resetGame();
void goodEnding();
void neutralEnding();
void badend();
void onca();

// função de conquistas
int conquistas() {
    printf("número de checkpoints marcados: %d\n", checkpointsMarcados);
    sleep(2);
    if (checkpointsMarcados == 0 && con==1){
        printf("parabéns, você zerou o jogo sem salvar nenhuma vez! troféu: 'A que é um checkpoint ?'\n");
    }
    if (vidas == 3){
        printf("parabéns, você zerou o jogo sem morrer nenhuma vez! troféu: 'Zero Mortes, Zero Desculpas'\n");
    }
    if(paulada==1){
        printf("parabéns, você quebrou um cano no seu amigo, ou melhor...não amigo. troféu:'Amigos amigos, negócios aparte'\n");
    }
    if(carnepulsante==1){
        printf("parabéns, você obteve um emaranhado de carne viva: a carne pulsante, que nojo ! troféu: 'Açougueiro'\n");
    }
    if(good==1){
        printf("parabéns, voce deteve Wartrox e seu assistente Marxion! troféu: 'Abyss Watcher'\n");
    }
    if(neutrall==1){
        printf("parabéns, você alcançou o final neutro! troféu: 'Apenas mais um dia'\n");
    }
    if(mort==1){
        printf("voce condenou Wes e a si próprio à uma tortura interminável\n e um mal terrível ao seu mundo! troféu: 'tão inteligente quanto um asno'\n");
    }
    if(atalho==1){
        printf("parabéns, você foi direto para o final por um atalho! troféu: 'Sonho maluco'");
    }
    if(visitouFloresta == 1){
        printf("parabéns, você visitou a floresta e sobreviveu! troféu: 'Fanático pelo Utinga'");
    }
    if(cano2==1){
        printf("parabéns, voce acertou Marxion uma segunda vez com o cano...\nou pelo menos tentou! troféu: 'A vingança do cano'");
    }
    exit(0);
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
    checkpointwes = 0;
}

void onca(){
printf("Continuação:\n");
sleep(2);

printf("A criatura começou a se comunicar:\n");
sleep(2);

printf("???: você… não pertence a esse mundo, nem aquele… ser… o que traz vocês aqui nesse mundo?\n");
sleep(3);
printf("Walter: e-e-euu… não sei dizer, estávamos em um hospício abandonado quando fomos pegos por pessoas e capturados.\n");
sleep(3);
printf("???: hospício? Hm… O que é um hospício? ……. Seja como for, você citou mais alguém certo? Suponho que não seja aquilo que estava lhe perseguindo.\n");
sleep(3);
printf("Walter: sim, estava procurando meu amigo Wes, você viu ele? Ele é mais ou menos da minha altura, um pouco mais magro e deve estar se cagando de medo.\n");
sleep(3);
printf("???: me parece que você está se descrevendo… enfim, não tenho muito tempo a perder, há um mau maior planejando algo…\n");
sleep(3);
printf("eu sinto uma energia muito forte dentro daquele castelo, talvez você devesse procurar lá.\n");
sleep(3);
printf("A criatura desaparece no ar na sua frente… uma pequena bola de luz avança contra seu corpo e desaparece, você sente uma ressonância com as coisas ao seu redor.\n");
sleep(3);
printf("Walter: isso foi muito estranho, será que aquele monstro ainda está por aqui?\n");
sleep(3);
printf("Você lentamente tenta voltar pelo caminho de onde você entrou pela floresta, olhando cada canto, você vê apenas restos de animais mutilados e algo que parece ser um sangue roxo, está fedendo muito.\n");
sleep(3);
printf("Você finalmente consegue sair da floresta, agora coberta de uma mistura de roxo e pedaços de animais.\n");
sleep(3);
printf("Você tem 2 opções de local:\n");
sleep(2);
printf("1 - Ir para a cidade.\n");
    printf("2 - Ir para o castelo [opção história].\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Você passa mais uma vez por aquele local desolado, não mudou nada,\n");
        printf("além de parecer agora mais abandonado depois de ter sido parcialmente destruído.\n");
        printf("A cabana que antes você e aquele falso amigo ficaram, estava completamente destroçada.\n");
        printf("Quem dera que ainda desse pra chamar aquilo de 'cabana'.\n");
        printf("Você não encontra nada de útil na cidade e decide ir para o castelo.\n");
        sleep(6);
        printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
        scanf("%d", &checsave);
        while(checsave != 0 && checsave != 1) {
            printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
            scanf("%d", &checsave);
        }
        if(checsave == 1 && checkpointcastelofuga == 0){
            printf("checkpoint marcado");
            sleep(2);
            checkpoint = 4;
            checkpointcastelofuga = 1;
            checkpointsMarcados++;
        }
        castelofuga();
    } 
    else{
        printf("Você caminha em direção ao castelo, pensando se aquele efeito de distância ainda está presente\n");
        printf("e se aquela barreira permanece de pé, porém você sente que ela está se dissipando.\n");
        sleep(5);
        printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
        scanf("%d", &checsave);
        while(checsave != 0 && checsave != 1) {
            printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
            scanf("%d", &checsave);
        }
        if(checsave == 1 && checkpointcastelofuga == 0){
            printf("checkpoint marcado");
            sleep(2);
            checkpoint = 4;
            checkpointcastelofuga = 1;
            checkpointsMarcados++;
        }
        castelofuga();
    } 
}

void badend(){
    printf("Pergunta: Quem vai usar a faca e derramar seu sangue no círculo?\n");
    printf("1 - Wes\n");
    printf("2 - Você\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
if (escolha == 1) {
    printf("Walter: Wes, por favor, corte sua mão com essa faca, precisamos tentar ativar esse portal...\n");
    sleep(3);
    printf("Wes: tudo bem\n");
    sleep(2);
    printf("Wes corta a própria mão em cima do círculo, deixando sangue derramar nele, mas após alguns segundos nada acontece\n");
    sleep(3);
    printf("Wes: Eu não quero fazer isso de novo…\n");
    sleep(2);
    printf("Sem escolha você é o próximo a fazer isso.\n");
    sleep(3);
}

if (escolha == 2 || escolha == 1) {
    printf("Você corta sua mão, derramando sangue no círculo...\n");
    sleep(3);
    printf("Quase instantaneamente o círculo começa a brilhar e um portal aparece, dando para ver o mesmo hospício onde tudo começou.\n");
    sleep(3);
    printf("Você puxa a mão de Wes e passa pelo portal. Ao passarem, o portal fecha instantaneamente.\n");
    sleep(3);
    printf("Antes que pudesse virar para ver Wes, você é golpeado...\n");
    sleep(3);
    printf("Você acorda em alguma sala estranha. Uma dor indescritível atinge você, mas você não consegue gritar...\n");
    sleep(3);
    printf("Seu corpo está destruído, barras de ferro atravessam seu corpo...\n");
    sleep(3);
    printf("À sua frente está Wes.\n");
    sleep(2);
    printf("Wes: Olá meu querido Walter, como está se sentindo...\n");
    sleep(3);
    printf("Não-Wes: sei que está doendo, era para doer, afinal esse é o destino de alguém tão inferior como você...\n");
    sleep(3);
    printf("final ruim! tente alcançar os outros finais !\n");
    mort++;
    con++;
    }
    conquistas();
}

void goodEnding(){//fase final bom
    printf("Aquele pedaço de carne que você pegou, escorrega do seu bolso, Marxion é o primeiro a notar…\n");
    sleep(4);
    printf("Marxion: como foi que você conseguiu isso em seu merdinha?\n");
    sleep(3);
    printf("Marxion segurava a carne em suas mãos, e por algum motivo, Wes cospe na direção de Marxion, afetando a carne pulsante, mudando sua aparência,\n");
    sleep(4);
    printf("Marxion não estava prestando atenção e reabsorve a carne de volta para seu corpo. Após alguns segundos, Marxion começa a ter alterações extremas em seu corpo,\n");
    sleep(4);
    printf("sua habilidade de trocar de corpo várias vezes estava entrando em um colapso, seu corpo se expandia e contraia em rápida sucessão até partes de seus membros começarem a explodir,\n");
    sleep(4);
    printf("Marxion tenta atacar Wes de último momento porém seu braço cai e danifica o painel com os cabos, desativando eles e libertando você e Wes.\n");
    sleep(4);
    printf("Wartrox: COMO QUE VOCÊ…..\n");
    sleep(3);
    printf("Wartrox gritava contra vocês dois e avançava em sua direção primeiro, Wes empurra Wartrox contra uma parede e Wartrox escorrega nos pedaços do corpo de Marxion,\n");
    sleep(4);
    printf("vocês aproveitam a chance para tentar escapar. Enquanto isso, uma luz de dentro do você começa a reagir à presença de Wes, saindo do seu corpo e sendo absorvida por Wes,\n");
    sleep(4);
    printf("você não entendeu o que aconteceu, e nem Wes, ambos vocês estavam correndo pela escada para sair daquele lugar.\n");
    sleep(4);
    printf("Ao sair da prisão e chegando no térreo do castelo, você começa a sentir o castelo mudando de forma, quebrando e amassando contra o seu próprio centro,\n");
    sleep(4);;
    printf("vocês dão um último pulo para fora do castelo, Wes cai em seus braços e você sente uma energia forte emanando dele, enquanto você encarava ele, vocês trocam olhares longos e depois desviam o olhar.\n");
    sleep(4);
    printf("Walter: Wes… desde quando você tem tanta força?\n");
    sleep(3);
    printf("Wes: e-e-eu… não sei… eu realmente me sinto diferente, mas não sei explicar bem como.\n");
    sleep(3);
    printf("O céu começava a cair, o mundo em que vocês se encontravam estava entrando em colapso, a grama estava mudando de cor, o céu se despedaçando e as construções mudando de forma,\n");
    sleep(4);
    printf("parece que Wes estava balanceando o mundo com sua energia, com sua luz… Enquanto você pensava, um abismo surge na frente da floresta,\n");
    sleep(4);
    printf("e não era o único, várias rachaduras com formatos variados abriam pelo mundo, no chão, no céu, por todo lugar.\n");
    sleep(4);
    printf("Pergunta: para onde eu vou agora?\n");
    sleep(2);
    printf("1- Ir para a floresta.\n");
    printf("2- Ir para a cidade.\n");
    printf("3- Voltar para o castelo.\n");
    printf("4- Ficar parado olhando para o céu.\n");
    printf("escolha:");
    scanf("%d",&escolha);
    if(escolha==1 || escolha== 2 || escolha== 4){
        printf("2,3,4 - Não havia nada lá, Nada? Não era um nome de uma criatura que \nassombrava as terras desoladas e esquecidas?\n");
        sleep(4);
        printf("Uma lenda urbana que você escutava desde criança, em poucos segundos, \nvocê vira para trás e vê o corpo de Wes desmembrado pelo chão\n");
        sleep(4);
        printf("e uma criatura com uma cabeça de um esqueleto de um animal e o resto do \nseu corpo era uma fumaça com aspectos de sombra,\n");
        sleep(4);
        printf("com braços e pernas por toda a sua extensão.\n");
        sleep(3);
        printf("Parece que essa criatura invadiu esse mundo, ela não poupa ninguém, \nnão tem razão e nem sentimento, apenas anda por aí.\n");
        sleep(4);
        printf("Você se encontra com o mesmo destino de Wes e tem seu corpo desmembrado.\n");
        sleep(3);
        morte();
    }
    else{
        printf("1- A floresta tinha um abismo notável na entrada da floresta,\n");
        sleep(3);
        printf("algo que parecia interagir com a essência de Wes, então vocês decidem ir para lá.\n");
        sleep(4);
        printf("No caminho, uma onça feita de luz aparece do lado de vocês.\n");
        sleep(3);
        printf("???: então foi você que derrotou aquele canalha transmorfo… meus agradecimentos.\n");
        sleep(2);
        printf("Wes: e quem é você?\n");
        sleep(2);
        printf("Walter: não temos tempo para isso! Senhora onça, o que é aquele abismo?\n");
        sleep(2);
        printf("???: pode me chamar de Lux. Aquilo é o que deve levar vocês de volta para o mundo de onde vieram, talvez…\n");
        sleep(2);
        printf("Eu tentei interagir mas parece necessitar de algo mais forte para abrir a fronteira.\n");
        sleep(2);
        printf("Walter: certo, Wes vamos, é nossa chance de sair daqui!\n");
        sleep(2);
        printf("Wes: …… ainda não acabou… Lux não é? O que você vai fazer com Wartrox?\n");
        sleep(2);
        printf("Lux: bom… vou dar um jeito. Vocês podem fugir.\n");
        sleep(2);
        printf("Wes: … eu não aceito isso?\n");
        sleep(2);
        printf("Walter: WES QUAL FOI CARA? NOSSA MELHOR CHANCE É AGORA.\n");
        sleep(2);
        printf("Wes: Lux… você consegue se juntar a mim não é?\n");
        sleep(2);
        printf("Lux: hmm… parece que você finalmente entendeu… Vamos então.\n");
        sleep(2);
        printf("Você se vê sem entender nada, Wes estava tremendo, ainda fragilizado de tudo que aconteceu.\n");
        sleep(2);
        printf("Mas por que ele estava tão confiante?\n");
        sleep(2);
        printf("Wes estica os dois braços e Lux se desintegra em partículas luminosas que são absorvidas por Wes.\n");
        sleep(2);
        printf("À distância, você via Wartrox se aproximando rapidamente, com uma arma que distorcia o espaço ao seu redor.\n");
        sleep(2);
        printf("Aquilo lhe dava calafrios, vocês estavam na beira do abismo.\n");
        sleep(2);
        printf("Tão perto de fugir e Wes inventa de ser o herói justo agora.\n");
        sleep(2);
        printf("Wartrox joga a sua arma contra Wes.\n");
        sleep(2);
        printf("Wes lança uma barreira que soava gritos agonizantes, impedindo a espada de avançar contra vocês.\n");
        sleep(2);
        printf("Mas ela estava alcançando, os gritos estavam ficando mais altos.\n");
        sleep(2);
        printf("Você só tapava o ouvido enquanto observava a cena.\n");
        sleep(2);
        printf("Um feixe de luz estava piscando constantemente nessa espécie de barreira protetora que Wes segurava.\n");
        sleep(2);
        printf("A espada estava suspensa no ar e logo foi arremessada para o chão, atravessando tudo sem nenhuma dificuldade.\n");
        sleep(2);
        printf("Wartrox: AAAAAHHH DESGRAÇADO! PENSA QUE SEUS PODERES PODEM ME IMPEDIR? PEREÇA PERANTE MINHA PRESENÇA!\n");
        sleep(2);
        printf("Wartrox estendia seus braços e saía uma gosma sombria que cobria todo lugar que passava.\n");
        sleep(2);
        printf("Wes já estava ficando cansado, parece que aquela barreira era tudo que podia manifestar com a ajuda de Lux.\n");
        sleep(2);
        printf("Wes despenca de costas no abismo, quebrando uma barreira invisível da mesma.\n");
        sleep(2);
        printf("Walter: NÃOOOO, WEEEES!\n");
        sleep(2);
        printf("Wartrox: É O SEU FIM WALTER!\n");
        sleep(2);
        printf("Wartrox consegue lhe acertar um golpe feroz com suas unhas alongadas.\n");
        sleep(2);
        printf("Você despenca do abismo com um corte profundo em seu peito…\n");
        sleep(2);
        printf("Wartrox: boa viagem SEU LIXO, espero que você não acorde mais com esse ataq—-- o quê?\n");
        sleep(2);
        printf("Isso é meu sangue? O que é isso atravessando o meu peito?\n");
        sleep(2);
        printf("Uma criatura estava observando, Nada, uma criatura que não poupa nada pelo seu caminho.\n");
        sleep(2);
        printf("E agora que restava só Wartrox nesse mundo, estava claro qual era o seu próximo alvo.\n");
        sleep(2);
        printf("Wartrox tentou se virar mas Nada o empurrou para o abismo e pulou logo em seguida.\n");
        sleep(2);
        printf("Depois disso, sua visão embaçou… Talvez seu tempo tenha chegado ao fim.\n");
        sleep(2);
        printf("Pelo menos deu para salvar Wes.\n");
        sleep(2);
        printf("Você começa a ver todas as lembranças que você teve com ele.\n");
        sleep(2);
        printf("Pensa como nunca pôde se expressar de verdade com ele.\n");
        sleep(2);
        printf("Agora seus sentimentos serão carregados para junto de seu túmulo.\n");
        sleep(2);
        printf("???: Wal…ter…..Walter!.... WALTER ACORDA!\n");
        sleep(2);
        printf("Você abre os olhos, com lágrimas caindo sobre sua face, não eram suas, eram de outra pessoa.\n");
        sleep(3);
        printf("Você já havia aceitado a morte, então o que você ainda fazia vivo?\n");
        sleep(2);
        printf("O céu estava claro, porém nublado.\n");
        sleep(2);
        printf("Wes: Walter! Você acordou! O que aconteceu? Nós voltamos?\n");
        sleep(2);
        printf("Walter: pera aí cara, sai de cima de mim.\n");
        sleep(2);
        printf("Você empurra Wes para o lado e observa o seu arredor, parece que vocês tinham voltado àquele hospício abandonado.\n");
        sleep(3);
        printf("Também estava ao seu lado a roupa que Wartrox utilizava, uma espécie de manto manchado de sangue roxo.\n");
        sleep(3);
        printf("Parece ser a única coisa que sobrou daquele mundo inóspito.\n");
        sleep(2);
        printf("Walter: por que mesmo nós entramos aqui em?\n");
        sleep(2);
        printf("Wes: para conseguir dados para aquela matéria, lembra? Dos residentes próximos vendo visagens e etc.\n");
        sleep(3);
        printf("Walter: bom, ninguém vai acreditar em nós mesmos, só sobrou esse manto e algumas imagens na câmera com fotos de rituais nesse hospício.\n");
        sleep(3);
        printf("Wes: e essa marca no seu peito… será que ela ajuda?\n");
        sleep(2);
        printf("Walter: que marca?\n");
        sleep(2);
        printf("Você olha para o seu peito, aquilo realmente tinha ficado marcado, não estava sangrando nem doendo,\n");
        sleep(3);
        printf("era como se você tivesse tido uma tatuagem indolor e instantânea.\n");
        sleep(2);
        printf("Walter: bom… vão achar que eu só fiz isso pra criar história, sabe como aquele pessoal do estúdio é.\n");
        sleep(3);
        printf("Wes: realmente… vamos sair logo daqui? Eu já tô tremendo todo aqui, só não borrei as calças porque não comi nada.\n");
        sleep(3);
        printf("Walter: Hahaha, eu digo o mesmo, vamos levar este manto, pode render em algo.\n");
        sleep(3);
        printf("Wes: ei… Walter…\n");
        sleep(2);
        printf("Walter: diga.\n");
        sleep(2);
        printf("Wes: eu não consigo sair do lugar, minhas pernas estão falhando, pode me ajudar?\n");
        sleep(2);
        printf("Walter: mas você é folgado em cara, tá bom, sobe nas minhas costas vai.\n");
        sleep(3);
        printf("Wes: valeu! Só tu mesmo pra me ajudar assim.\n");
        sleep(2);
        printf("Walter: Sim sim, agora bora logo que já vai chover aqui.\n");
        sleep(2);
        printf("Wes subiu em suas costas e apertou bem forte, você ia reclamar mas decidiu ficar calado.\n");
        sleep(3);
        printf("Tanta coisa aconteceu, você só está feliz que você e Wes saíram daquilo vivos.\n");
        sleep(3);
        printf("Vai ser bem difícil dormir tranquilo depois de tudo o que aconteceu.\n");
        sleep(2);
        printf("Ao sair do hospício, você dá uma última olhada para trás, e depois segue em frente para voltar ao carro de onde vieram.\n");
        sleep(3);
        printf("Impressionante não ter sido assaltado ainda.\n");
        sleep(2);
        printf("Você põe Wes no banco de trás e se posiciona para dirigir o carro.\n");
        sleep(2);
        printf("Foi um longo dia, afinal que dia já era hoje? Sábado… Certo, dá para dormir em paz.\n");
        sleep(3);
        printf("Afinal o que era tudo aquilo? Você só sente uma voz ecoando na sua cabeça com as palavras “Luz” e “Abismo”.\n");
        sleep(3);
        printf("Você decide que a próxima matéria vai se chamar “Abismo da Luz”, vai ser um grande sucesso.\n");
        sleep(3);
        printf("Fim de Jogo. final bom, muito obrigado por ter jogado abismo da luz !!!\n");
        sleep(2);
        good++;
        con ++;
        conquistas();
    }
    
}

void neutralEnding(){//fase final neutro
    printf("Parece que uma criatura que estava a espreita começou a atacar Marxion.\n");
    sleep(3);
    printf("A criatura desferia golpes ferozes contra todas as direções, acertou você e Wes, mas você conseguiu se soltar.\n");
    sleep(3);
    printf("Wes ainda estava preso, você tenta soltá-lo, porém não tem força para isso.\n");
    sleep(3);
    printf("Aquela criatura era 'Nada', um ser composto de pura violência e ausência de razão.\n");
    sleep(3);
    printf("O que ele fazia ali era desconhecido, mas parecia que Wartrox havia antecipado isso e \ncomeça a mexer no painel em que Wes estava preso, até mesmo te ignorando.\n");
    sleep(3);
    printf("Pergunta: o que você vai fazer?\n");
    printf("1- Usar um dos cabos que te prenderam, e acertar Wartrox.\n");
    printf("2- Fugir do laboratório imediatamente.\n");
    printf("3- Atacar Marxion com um pedaço de cano (de novo).\n");
    sleep(2);
    scanf("%d",&escolha);
    if(escolha==1){
        printf("1- Você usa o cabo que te prendia para tentar enforcar Wartrox.\n");
        sleep(3);
        printf("Wartrox simplesmente corta o cabo e corta a sua cabeça sem nem perceber. Fim de jogo.\n");
        sleep(3);
        morte();
    }
     else if(escolha==2){
         printf("2- Você decide que aquela era a melhor chance de você fugir.\n");
         sleep(3);
         printf("Talvez Wes tivesse a mesma sorte que você e 'Nada' poderia cortar o cabo com um de seus golpes desgovernados.\n");
         sleep(3);
         printf("Você escapa do laboratório e chega até o térreo do castelo.\n");
         sleep(3);
            printf("Enquanto você fugia, você vê Wes se arrastando pela escada, parece que ele de fato conseguiu fugir, mas estava muito debilitado.\n");
            sleep(3);
            printf("Você o carrega pelo braço e vocês caminham até fora do castelo.\n");
            sleep(3);
            printf("Ao olhar para trás, você vê o castelo sendo reconfigurado para uma forma gigante: um monstro de 6 patas e 3 cabeças, pernas como de uma aranha e olhos como de uma mosca.\n");
            sleep(3);
            printf("Aquilo estava mirando em vocês.\n");
            sleep(2);
            printf("Vocês correm na melhor velocidade que podiam até a floresta para fazê-lo perder campo de visão, porém uma das patas rasga uma perna de ambos.\n");
            sleep(3);
            printf("Ao se aproximar da floresta, crateras começaram a surgir do céu, do chão e, na sua frente, um abismo que emanava um ar fresco, como se tivesse uma saída por lá.\n");
            sleep(3);
            printf("Você estava com medo, não sabia se aquilo iria te ajudar ou apenas te matar.\n");
            sleep(2);
            printf("Antes mesmo de pensar, você olha para trás e vê Wes sendo empalado por duas patas daquele ser grotesco.\n");
            sleep(3);
            printf("De longe, você olha para a cara de Wes em seus últimos momentos.\n");
            sleep(3);
            printf("Wes: obrigado por tudo Walter… eu te am—-\n");
            sleep(2);
            printf("Antes que Wes terminasse de falar, a criatura perfura o coração de Wes e uma explosão de luz cobre toda a área ao redor dele,\n eventualmente te empurrando contra o abismo.\n");
            sleep(3);
            printf("Sua perna até voou junto contigo.\n");
            sleep(2);
            printf("Você sente uma barreira te impedindo de cair completamente pelo abismo, porém uma segunda explosão de luz força seu corpo contra a barreira e a quebra.\n");
            sleep(3);
            printf("Enquanto tudo que você podia fazer era chorar.\n");
            sleep(2);
            printf("Walter: WEEEEEEEEEES!!! NÃO MORRA SEM MIM!\n");
            sleep(3);
            printf("A sua vista fica embaçada enquanto você via aquele mundo se destruir por completo.\n");
            sleep(3);
            printf("Seu amigo havia morrido, você fugiu, mas a que preço?\n");
            sleep(2);
            printf("Essa pergunta ecoava pelo silêncio que tomava a sua queda durante o abismo, e um sentimento de amargura e dor preenchia seu coração.\n");
            sleep(3);
            printf("Você acorda, está de tarde, chovendo, você acorda com a água batendo na sua cara.\n");
            sleep(3);
            printf("Seu corpo está completamente dormente, sua perna está conectada de alguma forma, mas Wes não está contigo.\n");
            sleep(3);
            printf("Tudo foi em vão, as gravações do hospício estavam perdidas pela chuva, suas lágrimas se misturavam com as gotas da chuva…\n");
            sleep(3);
            printf("Você se levanta, dá uma olhada na sala ao seu redor, cheio de marcas e símbolos de uma espécie de religião.\n");
            sleep(3);
            printf("As paredes começaram a cair por conta da intensa chuva que estava afetando o lugar.\n");
            sleep(3);
            printf("Você foi obrigado a sair de mãos vazias do hospício, e muito mais que mãos vazias, sem um amigo que você tanto gostava…\n");
            sleep(3);
            printf("Ao entrar no carro, todo molhado e triste, você olha para o seu celular e vê que dia era.\n");
            sleep(3);
            printf("Walter: Segunda? Hahahaha……… eu mereço mesmo.\n");
            sleep(3);
            printf("Você dirige voltando para casa para trocar de roupa e ir trabalhar.\n");
            sleep(3);
            printf("É bem capaz que vai levar um esporro do seu chefe por chegar tarde e não conseguir nenhum material de pesquisa.\n");
            sleep(3);
            printf("Havia algo no seu bolso quando você esticou para pegar o que tinha lá, estava escrito um bilhete: “Não se esqueça, da Luz que ilumina o Abismo no seu coração”.\n");
            sleep(3);
            printf("Lágrimas caíram, você dirige com um peso que nunca poderá contar para ninguém, e é obrigado a tratar como se tudo aquilo não tivesse acontecido.\n");
            sleep(3);
            printf("Fim de Jogo. Final Mediano.\nTente conseguir os outros dois finais!");
            neutrall++;
            con ++;
            conquistas();
        }
        else{
            printf("3- Você pondera sobre a possibilidade de algo que funcionou antes funcionar de novo.\n");
            sleep(3);
            printf("Sem hesitar muito, você pega um pedaço de cano próximo e acerta as costas de Marxion enquanto ele se defendia de Nada.\n");
            sleep(3);
            printf("Marxion solta um berro em sua direção e você fica surdo na hora, porém Marxion cai no chão e começa a levar uma sequência feroz de golpes no chão.\n");
            sleep(3);
            printf("Enquanto isso, Wartrox estava muito focado em seu painel e assim que termina, olha para Wes, perfura seu coração e obtém um coração luminoso.\n");
            sleep(3);
            printf("Ele usa para explodir a criatura 'Nada', você é pego na explosão colateral. Fim de jogo.\n");
            sleep(3);
            cano2++;
            morte();
        }
}

void wes(){//fase 3.1.5 caminho para finalbom/regular
    printf("Ao acordar, você está no laboratório preso que nem Wes, Wes agora estava acordado,\n mas você está começando a entender o porquê dele estar tão fraco,\n");
    sleep(4);
    printf("aqueles tubos estavam tirando toda a que lhe restava, você sente que não consegue nem sequer mexer os braços direito.\n");
    sleep(4);
    printf("Marxion: e aí espertão? Não é tão legal quando você tem um pedaço de si arrancado não é? Ei Wartrox— \nquer dizer, chefe! Eles tão bem presos e agora?\n");
    sleep(4);
    printf("Você não entende o que ele quis dizer com um pedaço de si arrancado,\n até você olhar para o seu peito, um pedaço retangular foi arrancado,\n");
    sleep(4);
    printf("você começa a sentir o ardor, é como se tivessem queimando uma placa de metal sob o seu peito, \nparece que tiraram só o suficiente para te manter vivo e para te torturar.\n");
    sleep(4);
    printf("Você olha pro lado e vê Wes preso, pelo menos ele não tinha sido marcado também.\n");
    sleep(4);
    printf("Wartrox: bom, eu não tô nem com vontade de explicar nada para esse palhaço aí, mas eu irei só dizer uma coisa, \nseu amigo Wes, é um grande receptáculo para nosso plano,\n");
    sleep(4);
    printf("você tentar interrompê-lo foi o seu maior erro…\n");
    sleep(4);
    printf("Você tenta se debater com os cabos, mas eles não mexem, porém isso resultou em uma coisa…\n");
    sleep(4);
    if (carnepulsante == 1){
        goodEnding();
    }
    printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
    scanf("%d", &checsave);
    while(checsave != 0 && checsave != 1) {
        printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
        scanf("%d", &checsave);
    }
    if(checsave == 1 && checkpointend == 0){
        printf("checkpoint marcado...");
        sleep(2);
        checkpoint = 8;
        checkpointend = 1;
        checkpointsMarcados++;
    }
    neutralEnding();
}

void depositofuga(){//fase 3.2.3caminho para final ruim
    printf("tem um homem velho, tão magro que você poderia ver seus ossos mesmo debaixo dos trapos que ele vestia.\n");
    sleep(3);
    do {
        printf("Pergunta: O que você faz?\n");

        if (porta == 0) {
            printf("1 - Tentar sair pela porta\n");
            printf("2 - Tentar falar com o homem\n");
        } else if (porta == 1) {
            printf("E agora? O que vai fazer?\n");
            printf("1 - Tentar arrombar a porta\n");
            printf("2 - Se virar para o homem preso e tentar falar com ele\n");
        }
        printf("Escolha: ");
        scanf("%d", &escolha);
        if (escolha == 1 && porta==0){
            printf("Ao tentar abrir a porta, você percebe que ela está trancada.\n");
            porta++;
        }
        else if(escolha==1 && porta==1){
            printf("Você tenta arrombar a porta, mas falha miseravelmente.\n");
            sleep(2);
            printf("Ela parece tão robusta que nem mesmo com alguma ferramenta você conseguiria abri-la.\n");
            sleep(2);
            printf("O esforço apenas te deixa exausto e mais consciente de que fugir exigirá outra estratégia.\n");
            sleep(2);
            printf("Você respira fundo e observa novamente o ambiente, procurando alguma alternativa.\n");
            sleep(2);
            printf("Enquanto isso, o prisioneiro idoso continua a te observar com olhos fundos e enigmáticos.\n");
            sleep(2);
        }
    } while (escolha == 2);
            printf("Você decide falar com o homem.\n");
            printf("Walter: senhor? O senhor está bem?\n");
            sleep(3);
            printf("Aquele prisioneiro idoso que antes estava olhando fixamente para o chão, levanta a sua cabeça,\n");
            sleep(3);
            printf("revelando olhos quase tão fundos quanto os de um cadáver.\n");
            sleep(3);
            printf("Prisioneiro: Você.. por acaso você é o anjo da morte que veio cumprir minha maldição?\n");
            sleep(3);
            printf("\"Anjo da morte\"? \"maldição\"?\n");
            sleep(2);
            printf("Walter: Não senhor, meu nome é Walter, sou um… hóspede aqui, ou pelo menos achava que era…\n");
            sleep(3);
            printf("Prisioneiro: HAHAHAHA - ri o prisioneiro entre tosses violentas.\n");
            sleep(3);
            printf("Prisioneiro: Você é uma vítima dele não é?\n");
            sleep(3);
            printf("Walter: Vítima de quem?\n");
            sleep(2);
            printf("Prisioneiro: Do senhor desta mansão, um imponente lorde deste mundo, a pessoa que me amaldiçoou\n");
            sleep(3);
            printf("com uma doença incurável que poderá me matar a qualquer momento e que provavelmente\n");
            sleep(3);
            printf("tentará matar você e qualquer outra pessoa que deu azar de vir para este mundo que nem você.\n");
            sleep(3);
            printf("Você reflete por alguns segundos, você sabe que não tem muito tempo para agir.\n");
            sleep(2);
            printf("Walter: Se estamos em um lugar tão ruim temos que fugir, como podemos sair daqui desta mansão,\n");
            sleep(3);
            printf("ou até mesmo desse mundo?\n");
            sleep(2);
            printf("Prisioneiro: Meu jovem rapaz, eu não conseguiria sair nem se fosse novo como você,\n");
            sleep(3);
            printf("essa maldição maldita me enfraquece ao ponto das minhas pernas não funcionarem mais\n");
            sleep(3);
            printf("e me prende a este lugar, a este mundo. Se eu ao menos pisar para fora desta sala, eu morrerei na hora.\n");
            sleep(3);
            printf("Não consigo nem mesmo tirar minha própria vida, mas você pode fazer isso, pode fugir por mim..\n");
            sleep(3);
            printf("Walter: Eu lamento muito pelo senhor..\n");
            sleep(2);
            printf("Prisioneiro: Lamentar por outra pessoa aqui, é para quem pode seu tolo, e nós não podemos!\n");
            sleep(3);
            printf("Walter: Me diga, como posso fugir daqui desta mansão?\n");
            sleep(2);
            printf("Prisioneiro: Tem uma maneira de não só fugir desse lugar, mas desse mundo também e voltar para casa.\n");
            sleep(3);
            printf("Walter: Como?\n");
            sleep(2);
            printf("Prisioneiro: Existe um portal no subterrâneo desta mansão, entre esse mundo e o nosso mundo,\n");
            sleep(3);
            printf("é só atravessá-lo e fechar ele do outro lado que você vai conseguir escapar.\n");
            sleep(3);
            printf("Walter: Isso é verdade? E como podemos chegar até ele?\n");
            sleep(2);
            printf("Prisioneiro: Sim criança… “podemos”? hahaha, então tem outra vítima com você?\n");
            sleep(3);
            printf("Walter: Sim senhor, um amigo…\n");
            sleep(2);
            printf("Prisioneiro: Não se preocupe, vocês conseguirão escapar, naquele lugar não tem guardas,\n");
            sleep(3);
            printf("pois o mestre desse lugar não dá para ninguém permissão para chegar perto do portal.\n");
            sleep(3);
            printf("Agora vou contar para você como chegar lá.\n");
            sleep(2);
            printf("Aquele prisioneiro conta detalhadamente como chegar no tal portal e lhe entrega uma chave\n");
            sleep(3);
            printf("que abre a porta para sair da prisão. Após se despedirem, você parte para encontrar Wes.\n");
            sleep(3);
            printf("Você sai daquele lugar, e como se nada tivesse acontecido, e então começa a andar pela mansão procurando Wes.\n");
            sleep(3);
            printf("Você acha ele andando por um dos corredores, parecendo procurar alguém.\n");
            sleep(2);
            printf("Wes: Walter, onde você estava? Te procurei por toda a parte!\n");
            sleep(3);
            printf("Walter: Não dá tempo de explicar, venha comigo, esse lugar, não é seguro!\n");
            sleep(3);
            printf("Wes: O que quer dizer?\n");
            sleep(2);
            printf("Walter: Não temos tempo agora, só me segue e tente não ser visto!\n");
            sleep(3);
            printf("Wes concorda com a cabeça, e então vocês seguem para o lugar que aquele senhor tinha dito a você.\n");
            sleep(3);
            printf("Ao chegar lá vocês se deparam com uma sala parecida com o interior de um templo egípcio,\n");
            sleep(3);
            printf("com um arco circular no centro, a mesma estrutura detalhada por aquele senhor,\n");
            sleep(3);
            printf("que invocará o portal, mas o portal não está lá onde ele disse que estaria.\n");
            sleep(3);
            printf("Vocês vão para o arco, mas você não sabe como invocar de alguma forma ele.\n");
            sleep(3);
            printf("O que você faz agora?\n");
            sleep(2);
            printf("Pergunta: E agora?\n");
            sleep(2);
            printf("1 - Sair daquele lugar e encontrar outra forma de fugir\n");
            sleep(1);
            printf("2 - Procurar pistas de como ativar ele\n");
            sleep(1);
            printf("Escolha: ");
            scanf("%d", &escolha);

if (escolha == 1) {
    printf("Você fala pro Wes que não sabe como abrir o portal, e que pensava que ele estaria aberto.\n");
    sleep(3);
    printf("Você diz que é melhor vocês procurarem outro meio de sair desse mundo antes que seja tarde.\n");
    sleep(3);
    printf("Wes concorda sem dizer uma palavra.\n");
    sleep(2);
    printf("Ao voltar pelo caminho que vieram, quase no final dele, você se depara com várias pessoas à sua frente,\n");
    sleep(3);
    printf("armadas com vários tipos de armas brancas. Da morte não havia uma escapatória sequer naquele momento.\n");
    sleep(3);
    printf("Fim de Jogo!\n");
    morte(); // chama a função que finaliza o jogo
    } 
    else{
        printf("Ao olhar mais atentamente esse lugar, vocês encontram imagens na parede.\n");
        sleep(3);
        printf("Havia pessoas se cortando nas imagens, bem acima daquele círculo.\n");
        sleep(3);
        printf("Além disso, havia uma faca de aparência ritualística em cima de um bloco de pedra.\n");
        sleep(3);
        printf("Você interpreta que para abrir o portal, é preciso sangue ser derramado no círculo, assim como nas imagens.\n");
        sleep(3);
        printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
        scanf("%d", &checsave);
        while(checsave != 0 && checsave != 1) {
            printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
            scanf("%d", &checsave);
        }
        if(checsave == 1 && checkpointbadend == 0){
            printf("checkpoint marcado...");
            sleep(2);
            checkpoint = 9;
            checkpointbadend = 1;
            checkpointsMarcados++;
        }
        badend();
}
}

void deposito(){//fase 3.2.2 caminho para final ruim
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
            depositofuga();
        }
        else{
            printf("Você continua bisbilhotando o depósito quando a porta abre de novo,\n");
            sleep(3);
            printf("você consegue se esconder como da primeira vez, mas dessa vez os 2 homens\n");
            sleep(3);
            printf("procuraram você, e alguns segundos depois deles entrarem, seus gritos\n");
            sleep(3);
            printf("ecoaram por aquele depósito...\n");
            morte();
        }
    }
}

void mansao(){//fase3.2.1 caminho para final ruim
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
        morte();
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
            deposito();
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
            morte();
        }
    }
}

void dormir(){//fase3.2 caminho para final ruim
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
                printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
            scanf("%d", &checsave);
            while(checsave != 0 && checsave != 1) {
                printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
                scanf("%d", &checsave);
            }
            if(checsave == 1 && checkpointmansao == 0){
                printf("checkpoint marcado\n");
                sleep(2);
                checkpoint = 6;
                checkpointmansao = 1;
                checkpointsMarcados++;
            }
            mansao();
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
            morte();
        }
    }
    else if(escolha==2){
        printf("Você decide continuar seguindo o Wes,\n");
        sleep(3);
        printf("e pensa nesse lugar desprezado por qualquer deus que exista,\n");
        sleep(3);
        printf("não existe uma escolha boa, e sim a menos pior.\n");
        sleep(3);
        mansao();
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
        morte();
    }
}

void prisao(){//fase 3.1.5 caminho para final bom/final regular
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
	    morte();
    }
    else if(escolha==2){
        printf("Você sente que logo logo está chegando até Wes, o verdadeiro Wes…\n");
        sleep(3);
        printf("Não uma cópia barata e monstruosa, você então avança até a próxima sala de onde a dupla saiu,\n");
        sleep(4);
        printf("ao entrar, você se depara com uma vista assustadora.\n");
        sleep(4);
        printf("Ao se aproximar você vê Wes, pendurado em suspensão no ar,\n");
        sleep(3);
        printf("com tubos conectados em seu pescoço na parte de trás da cabeça,\n");
        sleep(3);
        printf("e um tubo ligado diretamente ao seu umbigo.\n");
        sleep(3);
        printf("Impossível tentar entender para quê toda aquela estrutura estava ligada ao seu amigo,\n");
        sleep(3);
        printf("você só sabia que tinha que tirá-lo de lá imediatamente.\n");
        sleep(3);
        printf("Você rapidamente analisa os seus arredores à procura de algo para liberá-lo.\n");
        sleep(3);
        printf("Pergunta: o que você vai fazer?\n");
        sleep(2);
        printf("1- Arrancar os cabos à força.\n");
        if(mecanismo==0){
            printf("2- Procurar um mecanismo que libere automaticamente.\n");
        }
        printf("3- Sair apertando todos os botões.\n");//opcao historia
        printf("escolha: ");
        scanf("%d",&escolha);
        if(escolha ==1){
            printf("1- Você arranca todos os cabos puxando-os com toda a sua força.\n");
            sleep(3);
            printf("Wes começa a se debater fortemente no chão, como se estivesse possuído, porém dormindo.\n");
            sleep(3);
            printf("Você observa sem saber o que fazer enquanto Wes vomita uma luz de dentro da sua boca.\n");
            sleep(3);
            printf("A luz com o tempo vai cobrindo o chão e antes que você pudesse fugir, a luz começa a desintegrar seus pés.\n");
            sleep(3);
            printf("Você cai de cara no chão direto com a luz, seu corpo inteiro foi reduzido à partículas luminosas.\n");
            sleep(3);
            morte();
        }
        else if(escolha==2 && mecanismo==0){
            printf("2- Você procura algo que possa facilitar a retirada dos cabos.\n");
            sleep(3);
            printf("Alguma coisa que esteja prendendo ele lá, uma engrenagem para girar, \num parafuso para desmontar, mas você não encontra nada.\n");
            sleep(3);
            mecanismo++;
        }
        else{
            printf("3- Você desesperadamente aperta vários botões em um painel em frente ao seu amigo suspendido ao ar.\n");
            sleep(3);
            printf("Eventualmente os tubos foram saindo de Wes, devagar e cuidadosamente.\n");
            sleep(3);
            printf("Você corre para segurá-lo antes que ele caia no chão.\n");
            sleep(3);
            printf("Você consegue segurá-lo porém cai de costas no chão.\n");
            sleep(3);
            printf("Wes começa a acordar.\n");
            sleep(3);
            printf("Wes abre a boca e uma voz fraca saía de sua boca:\n");
            sleep(3);
            printf("Wes: w….al…..ter….? É….. voc….ê?\n");
            sleep(3);
            printf("Walter: Wes! Wes! Você tá bem?\n");
            sleep(3);
            printf("Wes: *tosse *tosse, nem um pouco… o que estamos fazendo aqui?\n");
            sleep(3);
            printf("Walter: não temos tempo para explicações agora Wes, consegue se levantar?\n");
            sleep(3);
            printf("Wes: acho que sim…\n");
            sleep(3);
            printf("Wes tenta se levantar mas tropeça logo no primeiro passo, você o segura e põe ele nas suas costas.\n");
            sleep(3);
            printf("Walter: vamos sair daqui logo!\n");
            sleep(3);
            printf("Finalmente vocês tinham se reencontrado, mas não havia nem tempo para poder regozijar, o medo daquela dupla voltar e estragar tudo era muito maior.\n");
            sleep(3);
            printf("Wes segurava nas suas costas com todas as forças que tinha, parece que ele estava com saudades, mas você ignora e só corre com tudo para fora do porão.\n");
            sleep(3);
            printf("Sua melhor opção era tentar se recuperar na floresta, mas quando você passava pela porta do castelo…\n");
            sleep(3);
            printf("Marxion: ora ora, quem eu encontro depois de tanto tempo… Meu caro amigo Walter, e quem é este cadáver nas suas costas?\n");
            sleep(3);
            printf("Antes que você pudesse abrir a boca, Marxion desfere um golpe avassalador na sua barriga, lhe apagando em questão de segundos.\n");
            sleep(3);
            printf("Você cai sobre o chão, vendo a porta do castelo fechando, enquanto uma figura observa…\n");
            sleep(3);
            printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
            scanf("%d", &checsave);
            while(checsave != 0 && checsave != 1) {
                printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
                scanf("%d", &checsave);
            }
            if(checsave == 1 && checkpointwes == 0){
                printf("checkpoint marcado");
                sleep(2);
                checkpoint = 7;
                checkpointwes = 1;
                checkpointsMarcados++;
            }
            wes();
        }

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
        morte();
    }
}

void porao(){//fase 3.1.4 caminho para final bom/ final regular
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
    if(escolha==1 || escolha==3){
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
        printf("Ele vai sofrer demais na próxima vez que eu vê-lo,\n");
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
        prisao();
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
        morte();
    }
}

void castelointerior(){//fase 3.1.3 caminho para final bom/ final regular 
    
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
        printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
        scanf("%d", &checsave);
        while(checsave != 0 && checsave != 1) {
            printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
            scanf("%d", &checsave);
        }
        if(checsave == 1 && checkpointwes == 0){
            printf("checkpoint marcado");
            sleep(2);
            checkpoint = 7;
            checkpointwes = 1;
            checkpointsMarcados++;
        }
        atalho++;
        wes();
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
        morte();
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
        printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
        scanf("%d", &checsave);
        while(checsave != 0 && checsave != 1) {
            printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
            scanf("%d", &checsave);
        }
        if(checsave == 1 && checkpointporao == 0){
            printf("checkpoint marcado");
            sleep(2);
            checkpoint = 5;
            checkpointporao = 1;
            checkpointsMarcados++;
        }
        porao();
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
        morte();
    }
}

void castelofuga(){//fase 3.1.2 caminho para final bom/ final regular
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
        castelointerior();
    }
    else if(escolha==2){
        printf("Você decide que ainda há algo na cidade que pode lhe ajudar,\n");
        sleep(3);
        printf("mesmo tendo passado por lá várias vezes, talvez dessa vez você encontre algo de valor.\n");
        sleep(4);
        printf("Ao visitar a cidade, você procura cada lugar que ainda parecia minimamente estruturado\nquando fez a sua primeira visita.\n");
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
        castelointerior();
    }
}

void florestaFuga(){//fase 3.1.1 caminho para final bom/ final regular
   
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
    printf("Pergunta: O que você vai fazer?\n");
    printf("1 - Atacar a onça.\n");
    printf("2 - Fingir de morto.\n");
    printf("3 - Sair correndo do lugar.\n");
    printf("4 - Não fazer nada.\n");
    printf("Escolha: \n");
    scanf("%d", &escolha);
if (escolha == 3) {
    printf("Você sai correndo com medo de que algo fosse acontecer...\n");
    sleep(3);
    printf("Sem ver onde corria pela floresta, você leva um golpe colateral do combate do monstro que te perseguia contra a alcateia de onças...\n");
    sleep(3);
    printf("Fica gravemente ferido e sangrando pela cabeça, o seu fim está claro… Fim de jogo.\n");
    sleep(2);
    morte();
} 
else if (escolha == 1 || escolha == 2 || escolha == 4) {
    printf("A onça não entendeu a sua intenção e apenas te encarou com mais ênfase.\n");
    sleep(3);
    onca();
} 
}

void cano(){//fase 3.1 caminho para final bom/ final regular
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
    florestaFuga();
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
        morte();
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
        morte();
    }
    else{
        printf("\nOpção inválida. Tente novamente.\n");
    }
}

void cidade() {//fase 3
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
        morte();
    }
    else if(escolha == 2){
        printf("Você volta pra cama improvisada e pensa ser só ilusão sua,\n");
	    sleep(3);
	    printf("e que situações adversas mudam as pessoas drasticamente.\n");
	    sleep(3);
        dormir();
    }
    else if(escolha == 3){
	paulada++;
    printf("Você acerta Wes nas costas com toda sua força com um pedaço de cano que havia pego ao passar pela cidade,\n");
	sleep(4);
	printf("o cano entorta e Wes solta um grito desumano enquanto sua forma antes humana se retorce violentamente.\n");
	sleep(4);
	printf("Não-Wes: VERME MISERÁVEL, PENSA MESMO QUE PODE ME MACHUCAR COM UM OBJETO TÃO FRÁGIL?\n");
	sleep(4);
    printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
    scanf("%d", &checsave);
    while(checsave != 0 && checsave != 1) {
        printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
        scanf("%d", &checsave);
    }
    if(checsave == 1 && checkpointCano == 0){
        printf("checkpoint marcado");
        sleep(2);
        checkpoint = 3;
        checkpointCano = 1;
        checkpointsMarcados++;
    }
    cano();
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
        morte();
    }
    else{
        printf("\nOpção inválida. Tente novamente.\n");
    }
}

void floresta() {//fase 2.1
    
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
        morte();
    } 
    else if(escolha == 2){
        visitouFloresta = 1;
        ritual();
    } 
    else {
        printf("\nOpção inválida. Tente novamente.\n");
    }
}

void ritual() {//fase 2
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
            printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
            scanf("%d", &checsave);
            while(checsave != 0 && checsave != 1) {
                printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
                scanf("%d", &checsave);
            }
            if(checsave == 1 && checkpointCidade == 0){
                printf("checkpoint marcado\n");
                sleep(2);
                checkpoint = 2;
                checkpointCidade = 1;
                checkpointsMarcados++;
            }
            cidade();
        } 
        else if (escolha == 3 && visitouFloresta == 0) {
            floresta();
        }
        else {
            printf("\nOpção inválida ou já visitada.\n");
        }
    } while(1);
}

void Escapar() {//fase 1
    
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
            printf("gostaria de marcar o checkpoint? [1] Sim / [0] Não: ");
            scanf("%d", &checsave);
            while (checsave != 0 && checsave != 1) {
                printf("Opção inválida. Digite 1 para SIM ou 0 para NÃO.\n");
                scanf("%d", &checsave);
            }
            if (checsave == 1 && checkpointRitual == 0) {
                printf("checkpoint marcado\n");
                sleep(2);
                checkpoint = 1;
                checkpointRitual = 1;
                checkpointsMarcados++;
            }
            ritual();
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
                morte();
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
            morte();
        }
        else {
            printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (escolha != 1);
}

void morte() {//função de morte e checkpoints
    
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
            printf("\nDeseja continuar jogando? [1] Sim / [0] Não: ");
            scanf("%d", &escolha);
            if (escolha == 0) {
                printf("Obrigado por jogar!\n");
                conquistas();
            } 
            else{
        printf("Reiniciando do último checkpoint...\n");
        sleep(3);
        if(checkpoint == 0){
            Escapar();
        }
        else if(checkpoint == 1){
           ritual();
        }
        else if(checkpoint == 2){
            cidade();
        }
        else if(checkpoint == 3){
            cano();
        }
        else if(checkpoint == 4){
            castelofuga();
        }
        else if(checkpoint == 5){
            porao();
        }
        else if(checkpoint == 6){
            mansao();
        }
        else if(checkpoint == 7){
            wes();
        }
        else if(checkpoint == 8){
            neutralEnding();
        }
    }
    
        }
        else {
            printf("\nVocê perdeu todas as suas vidas...\n");
            sleep(2);
            printf("FIM DE JOGO\n");
            sleep(2);
            printf("\nDeseja jogar novamente? [1] Sim / [0] Não: ");
            scanf("%d", &escolha);
            if (escolha == 1) {
                resetGame();
                Escapar();
            }   
            else {
                printf("Obrigado por jogar!\n");
                conquistas();
            }   
    }
}

int main() {//menu
    system("chcp 65001");
    system("cls");
    setlocale(LC_ALL, "pt_BR.UTF-8");
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