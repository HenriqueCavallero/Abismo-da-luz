#include <stdio.h>
#include <unistd.h> // sleep()
#include <locale.h>

//var globais
int visitouCastelo = 0;
int visitouFloresta = 0;
int vidas = 3;
int checkpoint = 0;

int cano(){
    return 0;
}

int cabana(){
return 0;
}

void resetGame() {
    vidas = 3;
    checkpoint = 0;
    visitouCastelo = 0;
    visitouFloresta = 0;
}

int cidade(){
    checkpoint = 2;
    int escolhaCidade; 
        
        printf("Pergunta: O que eu devo fazer?\n");
        printf("1- Sair da cabana discretamente e fugir\n");
        printf("2- Voltar a dormir \n");//opção ruim
        printf("3- Acertar Wes com um pedaço de cano da sua mochila \n");//opção da história
        printf("4- Acordar Wes e enchê-lo de perguntas.\n");
        printf("Escolha: ");
        scanf("%d", &escolhaCidade);
        if(escolhaCidade == 1){
            printf("Você suspeita de algo, não confia bem naquele Wes\n");
            sleep(2);
            printf("você sai de fininho com suas coisas da cabana, ao sair de perto da cabana");
            sleep(2);
            printf("uma figura se aproxima por trás de você");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".");
            sleep(1);
            printf(".\n");
            printf("você sente algo perfurando sua coluna e atravessando seus ossos.\n");
            return morte();
        }
        else if(escolhaCidade == 2){
            return cabana();
        }
        else if(escolhaCidade == 3){
            return cano();
        }
        else if(escolhaCidade == 4){}
        else{
            printf("\nOpção inválida. Tente novamente.\n");

        }
    return 0;
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
        else if(escolha == 1){
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
            return main();
        } else {
            printf("Obrigado por jogar!\n");
            return 0;
        }
    }
    return 0;
}

int main() {
    
    setlocale(LC_ALL, "portuguese");

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