#include <stdio.h>
#include <unistd.h> // sleep()
#include <locale.h>

int morte(){
    printf("\nFim de jogo\n");
    return 1;
}
int Escapar(){
    int resposta;

    printf("\nVocê acorda em uma sala escura...\n");
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

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // acentos no terminal

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
    }

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