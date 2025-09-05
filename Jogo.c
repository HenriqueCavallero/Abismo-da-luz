#include <stdio.h>
#include <unistd.h> // sleep()
#include <locale.h>

int vidas = 3;

int Escapar(){
    int resposta;

    setlocale(LC_ALL, "Portuguese");
    printf("Você acorda em uma sala escura...\n");
    sleep(1.5);
    printf("Ela tem a aparência sombria de um hospital abandonado.\n");
    sleep(2);
    printf("Você está amarrado em uma cadeira, braços e pernas.\n");
    sleep(2);
    printf("Há um cheiro insuportável de podridão.\n");
    sleep(2);

    do {
        printf("\nO que você faz?\n");
        printf("1 - Tenta se soltar\n");
        printf("2 - Observa a sala\n");
        printf("Escolha: ");
        scanf("%d", &resposta);

        if (resposta == 1){
            printf("\nVocê tenta se soltar... e por sorte o braço esquerdo da cadeira,\n");
            sleep(2.5);
            printf("já danificado, se solta, permitindo sua libertação!\n");
        } else if (resposta == 2){
            printf("\nVocê observa a sala mais atentamente...\n");
            sleep(2);
            printf("Ela está quase vazia, apenas você e uma mesa cheia de um fluido escuro.\n");
            sleep(2);
            printf("Nada parece útil por enquanto.\n");
            sleep(2);
        } else {
            printf("Opção inválida\n");
        }

    } while (resposta != 1);

    return 0;
}

int main() {
    int verificadorComeco;
    int jogarNovamente = 1;

    while (jogarNovamente) {
        printf("\n|=============|\n");
        printf("   Abismo da Luz\n");
        printf("|=============|\n");

        printf("Jogar ?\n");
        sleep(1);
        printf("Pressione [1] para SIM ou [0] para NÃO\n");
        scanf("%d", &verificadorComeco);

        if (verificadorComeco == 0) {
            printf("Fim de jogo\n\a");
            break;
        }

        Escapar();

        printf("\nDeseja jogar novamente? [1] Sim / [0] Não: ");
        scanf("%d", &jogarNovamente);
    }

    return 0;
}