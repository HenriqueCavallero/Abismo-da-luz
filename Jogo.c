#include <stdio.h>
#include <unistd.h> // sleep()
#include <locale.h>

int morte(){
    printf("\nFim de jogo\n");
    return 1;
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
            return 0; // sobreviveu
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
int ritual(){
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
    printf("Você acorda, em um mundo confuso, como se tivesse acabado de ser criado, você se levanta e observa 3 lugares à distância:\n");
    
    
    
    
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
    sleep(1);
    printf(",13");
    sleep(1);
    printf(",12");
    sleep(1);
    printf(",11");
    sleep(1);
    printf(",10");
    sleep(1);
    printf(",9");
    sleep(1);
    printf(",8");
    sleep(1);
    printf(",7");
    sleep(1);
    printf(",6");
    sleep(1);
    printf(",5");
    sleep(1);
    printf(",4");
    sleep(1);
    printf(",3");
    sleep(1);
    printf(",2");
    sleep(1);
    printf(",1\n");
    sleep(1);

    //LOOP DE GAMEPLAY
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