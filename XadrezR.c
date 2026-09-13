#include <stdio.h>

void moverTorre (int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo (int casas){
    if (casas > 0){
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha (int casas){
    if (casas > 0){
        printf("Cima\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo (int casas){
    if (casas > 0){
        printf("Cima, Cima, Direita\n");
        moverCavalo(casas - 1);
    }
}

int main() {

    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 3;
    int palpite;

    printf("Escolha uma peça:\n\n 1- Torre\n 2- Bispo\n 3- Rainha\n 4- Cavalo\n");
    scanf("%d", &palpite);

    switch (palpite)
    {

        case 1:
                moverTorre(torre);
        break;

        case 2:
                moverBispo(bispo);
        break;

        case 3:
                moverRainha(rainha);
        break;

        case 4:
                moverCavalo(cavalo);
        break;

        default:
                printf("Opção invalida!!");
        break;
    }

    return 0;
}
