#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casas, opcao, peca, i = 0;
    char direcao[50];

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
                    printf("4. Voltar\n");
                    scanf("%d", &peca);

                    switch (peca) {
                        case 1:
                            printf("Quantas casas voce quer andar com a Rainha? (Diagonais e laterais)\n");
                            scanf("%d", &casas);
                            printf("Para qual direcao?\n");
                            scanf(" %49[^\n]", direcao);

                            for (i = 0; i < casas; i++) {
                                printf("\nRainha: %s\n", direcao);
                            }
                            break;
                        case 2:
                            printf("Quantas casas voce quer andar com o Bispo (Diagonais: Cima-Esquerda)?\n");
                            scanf("%d", &casas);
                            printf("Para qual direcao?\n");
                            scanf(" %49[^\n]", direcao);
                        
                            while (i < casas) {
                                printf("\nBispo: %s\n", direcao);
                                i++;
                            }
                            break;
                        case 3:
                            printf("Quantas casas voce quer andar com a Torre? (Laterais: Cima, Esquerda)\n");
                            scanf("%d", &casas);
                            printf("Para qual direcao?\n");
                            scanf(" %49[^\n]", direcao);
                            i = 0;
                            do {
                                printf("\nTorre: %s\n", direcao);
                                i++;
                            } while (i < casas);
                            break;
                        case 4:
                            break;
                        default:
                            printf("Opcao invalida\n");
                    }
                } while (peca != 4);
                break;
            case 2:
                printf("\nSelecione a peca desejada, o numero de casas e a direcao para onde voce quer que ela va.\n");
                printf("Bispo: anda na diagonal. Ex: Cima Direita\n");
                printf("Torre: anda para os lados e para cima e para baixo. Ex: Esquerda\n");
                printf("Rainha: anda em qualquer direcao. Ex: Cima; Baixo Esquerda\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                
        }
    } while (opcao != 3);

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

    return 0;
}
