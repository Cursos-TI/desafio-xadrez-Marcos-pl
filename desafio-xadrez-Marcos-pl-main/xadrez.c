#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int b, t, r, c;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Movimento do bispo(5 casas na diagonal para cime e á direita)
    printf("\nMovimento do bispo(5 casas na diagonal para cima e á direita\n");
    b = 0;
    while (b < 5)
    {
        printf("\nCima\n");
        printf("Direita\n");
        b++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Exemplo: Crie um loop que itere 5 vezes, representando o movimento da Torre.

    // Movimento da torre(5 casas para direita)
    printf("\nMovimento da torre(5 casas para direita)\n");
    for (t = 0; t < 5; t++)
    {
        printf("\nDireita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Exemplo: Crie um loop que itere 5 vezes, representando o movimento da Rainha.

    // movimento da rainha(8 casas para esquerda)
    printf("\nMovimento da rainha(8 casas para esquerda)\n");
    r = 0;
    do
    {
        printf("\nEsquerda\n");
        r++;
    } while (r < 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Movimentação do Cavalo (em "L")

    // O Cavalo pode se mover 2 casas em uma direção e 1 casa na direção perpendicular,
    // ou 1 casa em uma direção e 2 casas na direção perpendicular.
    // O primeiro loop percorre os dois movimentos possíveis na direção horizontal (Direita e Esquerda) e vertical (Cima e Baixo)
    // O segundo loop lida com os outros movimentos possíveis (1 casa na horizontal e 2 na vertical, e vice-versa)

    printf("Movimentos do Cavalo (em L):\n");

    // 1º Loop: Movimentos do Cavalo para a direita e esquerda
    int i, j;

    // Movimentos com 2 casas na horizontal e 1 na vertical
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            // Direções horizontais (Direita e Esquerda)
            if (i == 0)
            {
                printf("Direita 2 ");
            }
            else
            {
                printf("Esquerda 2 ");
            }

            // Direções verticais (Cima e Baixo)
            if (j == 0)
            {
                printf("Cima 1\n");
            }
            else
            {
                printf("Baixo 1\n");
            }
        }
    }

    // Movimentos com 1 casa na horizontal e 2 na vertical
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            // Direções horizontais (Direita e Esquerda)
            if (i == 0)
            {
                printf("Direita 1 ");
            }
            else
            {
                printf("Esquerda 1 ");
            }

            // Direções verticais (Cima e Baixo)
            if (j == 0)
            {
                printf("Cima 2\n");
            }
            else
            {
                printf("Baixo 2\n");
            }
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
