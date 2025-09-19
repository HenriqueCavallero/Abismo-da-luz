#include <stdio.h>
#include <unistd.h> // sleep()
#include <locale.h>

int morte(){
    printf("\nFim de jogo\n");
    return 1;
}
int floresta(){
int escolhaFloresta;
    printf("Você caminha até uma floresta que parece idêntica às que você via no seu dia a dia\n");
    sleep(2);
    printf("eventualmente adentrando, ao chegar você se depara com animais silvestres.\n");
    sleep(2);
    printf("Entrar mais a fundo da floresta?\n");\
    printf("1-sim\n");
    printf("2-não\n");
    scanf("%d", &escolhaFloresta);
    if(escolhaFloresta == 1){
        printf(" Esses animais são exatamente iguais aos que você conhece\n");
        sleep(2);
        printf("devorando carne de maneira esfomeada e desesperada\n");
        sleep(2);
        printf("porém havia um detalhe do qual você não havia se tocado");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".");
        sleep(1);
        printf(".\n");
        sleep(2);
        printf("esses animais estavam de olho em você\n");
        sleep(2);
        printf("você foi atacado e devorado de maneira brutal\n");
        return morte();
    }else{
        return ritual();
    }return 0;
}
int ritual(){
    int respostaRitual;
    printf("Após se libertar, você foge da sala...\n");   
    sleep(1);
    printf(" o ambiente do lugar em que você está parece macabro.\n");
    sleep(1);
    printf("algo totalmente distinto de onde você e seu amigo estavam\n");
    sleep(1);
    printf("ao pensar nisso você se lembra do seu amigo, \no que será que aconteceu com ele, vocês foram sequestrados?");
    sleep(2);
    printf(" Finalmente após o choque de estar ali \nvocê começa a se questionar onde está, \no que aconteceu e quem eram aquelas figuras.\n");
    sleep(2);
    printf(" Você escuta vozes distantes, semelhante a uma conversa, \nporém muito longe, você segue a voz até chegar numa sala extremamente iluminada.\n");
    sleep(2);
    printf("Você tenta tirá-lo de lá, porém uma poderosa onda de choque perturba o ritual, \nWes cai no chão e a cadeira se desintegra, como se nunca existisse");
    sleep(2);
    printf(" o local antes extremamente iluminado começa a escurecer, \num abismo se forma entre o chão do ritual puxando tudo ao seu redor \ncom uma força avassaladora.\n");
    sleep(2);
    printf("Quando você se dá conta, está em volta de luz, \numa luz violenta, sem cor, sem cheiro, vazia, \ncaindo e ao mesmo tempo subindo...\n");
    sleep(2);
    printf(", sem nenhuma noção de espaço ou tempo. Você fecha os olhos e dispersa sua consciência.\n");
    sleep(2);
        do{
    printf("Você acorda, em um mundo confuso, como se tivesse acabado de ser criado, você se levanta e observa 3 lugares à distância:\n");
    printf("oque você faz?\n");
    sleep(1);
    printf("1-ir para um castelo feito de tijolos opacos, distorcendo a luz próxima.\n");
    printf("2-ir para uma cidade sem nenhum sinal de vida. \n");
    printf("3-uma floresta normal (bizarramente comum).\n");
    printf("Escolha: \n");
    scanf("%d", &respostaRitual);
    if(respostaRitual == 1){
        printf("você decide caminhar até o castelo, não estava tão longe,\n");
        sleep(2);
        printf("ao menos era o que parecia, ao caminhar você sentia \ncomo se não avançasse do lugar\n");
        sleep(2);
        printf("como se o castelo estivesse se movendo para longe de você\n");
        sleep(2);
        printf("parecia até que tinha uma barreira te impedindo de avançar. Você eventualmente desiste.\n");
        sleep(2);
    }else if(respostaRitual == 2){
        printf("Você caminha até uma cidade, não parecia estar abandonada \nmas você também não via nenhum sinal de vida, nem rios, nem animais e nem pessoas.\n");
        printf(" Você adentra uma casa central da cidade atraído pelo seu tamanho e arquitetura.\n");///history option
        //return next phase
    }else if(respostaRitual == 3){
        return floresta();
    }
} while (respostaRitual == 2);
    return 0;
}
int Escapar(){
    int resposta;

    printf("Você acorda em uma sala escura...\n");
    sleep(1);
    printf("Ela tem a aparência sombria de um hospital abandonado.\n");
    sleep(2);
    printf("Você está amarrado em uma cadeira, seus braços e pernas.\n");
    sleep(2);
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
            return ritual();
        } 
        else if (resposta == 2){
            printf("\nVocê observa a sala mais atentamente...\n");
            sleep(2);
            printf("Ela está quase vazia, apenas você e uma mesa cheia de um fluido escuro.\n");
            sleep(2);
            printf("Nada parece útil por enquanto.\n");
        } 
        else if (resposta == 3){
            printf("\nVocê grita por ajuda...\n");
            sleep(2);
            printf("Ninguém responde... apenas um silêncio profundo.\n");
        }    
        else if (resposta == 4){
            printf("\nVocê se arrasta, mesmo amarrado, até uma porta à sua direita...\n");
            sleep(2);
            printf("Demorou, porém conseguiu chegar em uma sala mais escura.\n");
            sleep(2);
            printf("Você desvia o olhar da sala e ao olhar novamente uma luz te engolfa completamente.\n");
            sleep(2);
            printf("Você sente uma dor inexorável...\n");
            sleep(1);
            printf("Seus sentidos falham...\n");
            sleep(1);
            printf("Você não sente nem sequer a sua própria presença no mundo.\n");
            return morte(); // morreu
        } 
        else {
            printf("Opção inválida\n");
        }

    } while (resposta != 1); 

    return 0;
}
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int verificadorComeco;
    int jogarNovamente = 1;

    //TELA INICIAL
    printf("|=============|\n");
    printf(" Abismo da Luz\n");
    printf("|=============|\n");
    printf("Jogar ?\n");
    sleep(1);
    printf("Pressione [1] para SIM ou [0] para NÃO\n");
    scanf("%d", &verificadorComeco);

    if (verificadorComeco == 0){
        morte();
        return 0;
    }    printf("Você é um jornalista junior chamado Walter, buscando oportunidades de alavancar sua carreira \njunto com seu amigo Wes, tentam buscar reportagens que consigam fazer isso para os dois, e ao procurarem reportagens, \nem suas buscas eles acabam ouvindo relatos de movimentação suspeita um certo lugar, \num hospício,há muito tempo fechado, este hospício foi palco de múltiplas denúncias de torturas e desaparecimentos, \ne até mesmo relatos de pactos a algum tipo de entidade da crença local \nsegundo moradores de um vilarejo próximo, eles decidem investigar. \nNo entanto, ao adentrar a fundo naquele lugar, figuras não identificadas \nos pegaram desprevenidos, apagando os dois jornalistas...\n");
    printf("carregando...14");
    sleep(5);

    //LOOP DE Jogo
    while (jogarNovamente) {
        Escapar();

        printf("\nDeseja jogar novamente? [1] Sim / [0] Não: ");
        scanf("%d", &jogarNovamente);
        if(jogarNovamente == 0){
            printf("obrigado por jogar !\n");
        }
    }

    return 0;
}