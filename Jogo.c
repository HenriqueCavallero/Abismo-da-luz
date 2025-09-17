#include <stdio.h>
#include <unistd.h> // sleep()
#include <locale.h>

int Escapar(){
    int resposta;

    printf("Você acorda em uma sala escura...\n");
    sleep(1.5);
    printf("Ela tem a aparência sombria de um hospital abandonado.\n");
    sleep(2.5);
    printf("Você está amarrado em uma cadeira, seus braços e pernas.\n");
    sleep(2.5);
    printf("Há um cheiro insuportável de podridão.\n");
    sleep(2.5);

    do {
        printf("O que você faz?\n");
        sleep(2); 
        printf("1 - Tenta se soltar\n");
        printf("2 - Observa a sala\n");
        printf("3 - Pedir por ajuda\n");
        printf("4 - Se arrastar até uma porta próxima\n");
        printf("Escolha: ");
        scanf("%d", &resposta);

        if (resposta == 1){
            printf("\nVocê tenta se soltar... e por sorte o braço esquerdo da cadeira,já danificado,\n");
            sleep(2);
            printf("se solta, permitindo sua libertação!\n");
        } else if (resposta == 2){
            printf("\nVocê observa a sala mais atentamente...\n");
            sleep(2);
            printf("Ela está quase vazia, apenas você e uma mesa cheia de um fluido escuro.\n");
            sleep(2.5);
            printf("Nada parece útil por enquanto.\n");
            sleep(2);
        } else if (resposta == 3){
            printf("\nVocê grita por ajuda...\n");
        }    else if (resposta == 4){
            printf("Você se arrasta, mesmo amarrado, até uma porta à sua direita\n");
            sleep(2);
            printf("demorou, porém conseguiu chegar em uma sala mais escura\n");
            sleep(2);
            printf("você desvia o olhar da sala e ao olhar novamente uma luz te engolfa completamente\n");
            sleep(2);
            printf("você sente uma dor inexorável\n");
            sleep(1);
            printf(" seus sentidos falham\n");
            sleep(1);
            printf("você não sente nem sequer a sua própria presença no mundo. Fim de jogo\n");
            
            return 1;
        } else {
            printf("Opção inválida\n");
        }

    } while (resposta != 1);

    return 0;
}

int main() {
    int verificadorComeco;
    int jogarNovamente = 1;

        printf("|=============|\n");
        printf("Abismo da Luz\n");
        printf("|=============|\n");
        printf("Jogar ?\n");
        sleep(1);
        printf("Pressione [1] para SIM ou [0] para NÃO\n");
        scanf("%d", &verificadorComeco);

        if (verificadorComeco == 0) {
            printf("Fim de jogo\n");
            return 0;
        }
        
        while (jogarNovamente) {
            int resultado = Escapar();
            if (resultado == 1) {
                
                continue;
            }

        printf("\nDeseja jogar novamente? [1] Sim / [0] Não: ");
        scanf("%d", &jogarNovamente);
    }

    return 0;
}