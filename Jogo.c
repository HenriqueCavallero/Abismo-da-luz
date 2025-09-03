#include <stdio.h>

int vidas = 3;

int Escapar() {
    int resposta;
    
    printf("Voce acorda em uma sala escura, a sala tem a aparencia sombria de um hospital abandonado, voce está amarrado em uma cadeira, bracos e pernas, está sozinho aparentemente, e sentindo um cheiro insuportavel de podridao.");
    do {
    printf("o que voce faz?\n1-Tenta se soltar\n2-Observa a sala\n");
    scanf("%d", &resposta);
    if(resposta == 1){
        printf("Voce tenta se soltar, usando todas as suas forcas, e por sorte, o braco esquerdo da cadeira, ja danificado, se soltou, possibilitando voce se libertar.\n");
    } 
    else if (resposta == 2) {
        printf("Voce observa a sala mais atentamente, ela está quase vazia, há somente voce e uma mesa cheia de um fluido que parece ser sangue, não há nada de util para voce.\n");
        }
    } while (resposta != 1);
    return 0;
}
int main() {
    Escapar();
    return 0;
}