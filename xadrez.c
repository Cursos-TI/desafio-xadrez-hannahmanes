#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

void moverRainha(int casas, char direcao[50]) {
    if (casas > 0) {
        printf("\nRainha: %s\n", direcao);
        moverRainha(casas - 1, direcao);
    }
}

void moverTorre(int casas, char direcao[50]) {
    if (casas > 0) {
        printf("\nTorre: %s\n", direcao);
        moverTorre(casas - 1, direcao);
    }
}

void moverBispo(int casas, char direcao[50], char direcao2[50]) {
    int i = 0;
    for (int i = 0, j = 0; i < casas && j < casas; i++, j++) {
        printf("\nBispo: %s ", direcao);
        printf("%s\n", direcao2);
    }
}

int main() {
    int casas, opcao, peca, cavalo1 = 2, cavalo2 = 2, i = 0, j = 0;
    char direcao[50], direcao2[50];

    do {
        printf("### Jogo de Xadrez ###\n\n");
        printf("Selecione uma opcao\n");
        printf("1. Iniciar\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                do {
                    printf("\nSelecione a peca que quer movimentar\n");
                    printf("1. Rainha\n");
                    printf("2. Bispo\n");
                    printf("3. Torre\n");
                    printf("4. Cavalo\n");
                    printf("5. Voltar\n");
                    scanf("%d", &peca);

                    switch (peca) {
                        case 1:
                            printf("Quantas casas voce quer andar com a Rainha? (Diagonais e laterais)\n");
                            scanf("%d", &casas);
                            printf("Para qual direção?\n");
                            scanf(" %49[^\n]", direcao);

                            // Com recursividade: nivel mestre
                            moverRainha(casas, direcao);

                            // Com loops: nivel novato
                            // for (i = 0; i < casas; i++) {
                            //     printf("\nRainha: %s\n", direcao);
                            // }
                            break;
                        case 2:
                            printf("Quantas casas voce quer andar com o Bispo (Vertical: Cima; Horizontal: Esquerda)?\n");
                            scanf("%d", &casas);
                            printf("Para qual direção na vertical?\n");
                            scanf(" %49[^\n]", direcao);
                            printf("Para qual direção na horizontal?\n");
                            scanf(" %49[^\n]", direcao2);
                            
                            // Funcao: nivel mestre
                            moverBispo(casas, direcao, direcao2);

                            // Loop simples: nivel novato
                            // i = 0;
                            // while (i < casas) {
                            //     printf("\nBispo: %s\n", direcao);
                            //     i++;
                            // }
                            break;
                        case 3:
                            printf("Quantas casas voce quer andar com a Torre? (Laterais: Cima, Esquerda)\n");
                            scanf("%d", &casas);
                            printf("Para qual direção?\n");
                            scanf(" %49[^\n]", direcao);

                            // recursividade: nivel mestre
                            moverTorre(casas, direcao);

                            // Loops: nivel novato
                            // i = 0;
                            // do {
                            //     printf("\nTorre: %s\n", direcao);
                            //     i++;
                            // } while (i < casas);
                            break;
                        case 4:
                            printf("Para qual direção você quer andar duas casas com o cavalo? (Ex: 2 casas -> Direita)\n");
                            scanf(" %49[^\n]", direcao);
                            printf("Para qual direção o cavalo vai fazer o L? (Ex: 1 casa -> Cima)\n");
                            scanf(" %49[^\n]", direcao2);

                            // loops complexos: nivel mestre
                            for (i = 0, j = 0; i < cavalo1 && j < cavalo2; i++, j++) {
                                printf("\nCavalo: %s\n", direcao);
                                if (j == 0) continue;
                                printf("\nCavalo: %s\n", direcao2);
                            }

                            // Loops simples: nivel aventureiro
                            // for (i = 0; i < cavalo1; i++) {
                            //     while (j < cavalo2) {
                            //         printf("\nCavalo: %s\n", direcao);
                            //         j++;
                            //     }
                            //     printf("\nCavalo: %s\n", direcao2);   
                            // }
                            break;
                        case 5:
                            break;
                        default:
                            printf("Opcao invalida\n");
                    }
                } while (peca != 5);
                break;
            case 2:
                printf("\nSelecione a peça desejada, o número de casas (quando necessário) e a direção para onde você quer que ela vá.\n");
                printf("Bispo: anda na diagonal. Ex: Cima Direita\n");
                printf("Torre: anda para os lados e para cima e para baixo. Ex: Esquerda\n");
                printf("Rainha: anda em qualquer direção. Ex: Cima; Baixo Esquerda\n");
                printf("Cavalo: anda em L. Ex: Cima Cima Direita\n\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                
        }
    } while (opcao != 3);

    return 0;
}
