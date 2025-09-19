#include <stdio.h>
#include <unistd.h> // sleep()
#include <locale.h>

//var globais
int visitouCastelo = 0;
int visitouFloresta = 0;
int vidas = 3;
int checkpoint = 0;

void resetGame() {
    vidas = 3;
    checkpoint = 0;
    visitouCastelo = 0;
    visitouFloresta = 0;
}

int floresta(){
    int escolhaFloresta;
    do {
        printf("Você caminha até uma floresta que parece idêntica às que você via no seu dia a dia\n");
        sleep(2);
        printf("eventualmente adentrando, ao chegar você se depara com animais silvestres.\n");
        sleep(2);
        printf("Entrar mais a fundo da floresta?\n");
        printf("1 - Sim\n");
        printf("2 - Não (voltar)\n");
        printf("Escolha: ");
        scanf("%d", &escolhaFloresta);

        if(escolhaFloresta == 1){
            printf("Esses animais são exatamente iguais aos que você conhece\n");
            sleep(3);
            printf("devorando carne de maneira esfomeada e desesperada\n");
            sleep(3);
            printf("porém havia um detalhe do qual você não havia se tocado");
            sleep(3);
            printf("...");
            sleep(2);
            printf("esses animais estavam de olho em você\n");
            sleep(3);
            printf("você foi atacado e devorado de maneira brutal\n");
            sleep(2);
            return morte();
        } 
        else if(escolhaFloresta == 2){
            visitouFloresta = 1; // marca que a floresta já foi visitada
            return ritual();     // volta pro ritual
        } 
        else {
            printf("\nOpção inválida. Tente novamente.\n");
        }
    } while(1);

    return 0;
}

int ritual(){
    int respostaRitual;
    checkpoint = 1;

    printf("Você acorda, em um mundo confuso, como se tivesse acabado de ser criado,\n");
    printf("você se levanta e observa 3 lugares à distância:\n");
    sleep(3);

    do {
        printf("\nO que você faz?\n");
        sleep(1);

        if (visitouCastelo == 0) {
            printf("1 - Ir para um castelo feito de tijolos opacos, distorcendo a luz próxima.\n");
        }
        printf("2 - Ir para uma cidade sem nenhum sinal de vida.\n");
        if (visitouFloresta == 0) {
            printf("3 - Uma floresta normal (bizarramente comum).\n");
        }

        printf("Escolha: ");
        scanf("%d", &respostaRitual);

        if (respostaRitual == 1 && visitouCastelo == 0) {
            printf("\nVocê decide caminhar até o castelo, não estava tão longe...\n");
            sleep(2);
            printf("Ao caminhar, você sentia como se não avançasse do lugar.\n");
            sleep(2);
            printf("Parecia até que o castelo estivesse se movendo para longe de você.\n");
            sleep(2);
            printf("Uma barreira invisível te impedia de avançar. Você eventualmente desiste.\n");
            sleep(2);

            visitouCastelo = 1; // marca como visitado
        } 
        else if (respostaRitual == 2) {
            printf("\nVocê caminha até uma cidade, não parecia estar abandonada,\n");
            sleep(2);
            printf("mas você também não via nenhum sinal de vida: nem rios, nem animais, nem pessoas.\n");
            sleep(3);
            printf("Você adentra uma casa central da cidade, atraído pelo seu tamanho e arquitetura.\n");
            sleep(3);
            // aqui poderia seguir para outra parte da história
        } 
        else if (respostaRitual == 3 && visitouFloresta == 0) {
            return floresta();
        }
        else {
            printf("\nOpção inválida ou já visitada.\n");
        }

    } while(1);

    return 0;
}

int Escapar(){
    int resposta;
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
        sleep(1); 
        printf("1 - Tenta se soltar\n");
        printf("2 - Observa a sala\n");
        printf("3 - Pedir por ajuda\n");
        printf("4 - Se arrastar até uma porta próxima\n");
        printf("Escolha: ");
        scanf("%d", &resposta);

        if (resposta == 1){
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
        else if (resposta == 2){
            printf("\nVocê observa a sala mais atentamente...\n");
            sleep(2);
            printf("Ela está quase vazia, apenas você e uma mesa cheia de um fluido escuro.\n");
            sleep(2);
            printf("Nada parece útil por enquanto.\n");
            sleep(2);
        } 
        else if (resposta == 3){
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
        else if(resposta == 4){
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
            return morte(); // morreu
        }
        else {
            printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (resposta != 1); 

    return 0;
}

int morte(){
    int escolha;
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
            return 0;
        }
        else{
            printf("Reiniciando do último checkpoint...\n");
        }
        sleep(3);


        if(checkpoint == 0){
            return Escapar();
        }
        else if(checkpoint == 1){
            return ritual();
        }
    } 
    else {
        int escolhaFinal;
        printf("\nVocê perdeu todas as suas vidas...\n");
        sleep(2);
        printf("FIM DE JOGO\n");
        sleep(2);

        printf("\nDeseja jogar novamente? [1] Sim / [0] Não: ");
        scanf("%d", &escolhaFinal);
        if (escolhaFinal == 1) {
            resetGame();
            return Escapar();
        } else {
            printf("Obrigado por jogar!\n");
            return 0;
        }
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int verificadorComeco;
    int continuar;

    //TELA INICIAL
    printf("|=============|\n");
    printf(" Abismo da Luz\n");
    printf("|=============|\n");
    printf("Jogar ?\n");
    sleep(1);
    printf("Pressione [1] para SIM ou [0] para NÃO\n");
    scanf("%d", &verificadorComeco);

    if (verificadorComeco == 0){
        printf("encerrando...\n");
        return 0;
    }    
    printf("seja bem vindo ao Abismo da Luz, conheça as regras\n");
    sleep(2);
    printf("você começa com 3 vidas, cada vez que morrer você perde uma vida, \nquando suas vidas chegarem a 0, o jogo acaba\n");
    sleep(4);
    printf("voce terá que tomar decisões de forma que consiga sobreviver e escapar deste lugar\n");
    sleep(4);
    printf("a cada 5 perguntas respondidas você terá a opção de salvar o jogo\n");
    sleep(4);
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
    scanf("%d",&continuar);

    //INÍCIO DO JOGO
    Escapar();

    return 0;
}