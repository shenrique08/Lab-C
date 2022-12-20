#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITES 4
#define NUM_RANKS 13
#define NUM_CARDS 52
#define NUM_PLAYERS 2
#define CARDS_PER_PLAYER 3

const char *suits[NUM_SUITES] = {"Espadas", "Paus", "Ouros", "Copas"};
const char *ranks[NUM_RANKS] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei", "As"};

// Estrutura de uma carta
struct card 
{
    int suit;
    int rank;
};

// Estrutura de um jogador
struct player 
{
    struct card hand[CARDS_PER_PLAYER];
};

// Embaralhar o baralho
void shuffle(struct card deck[NUM_CARDS]) 
{
    for (int i = 0; i < NUM_CARDS; i++) {
            int j = rand() % NUM_CARDS;
            struct card temp = deck[i];
            deck[i] = deck[j];
            deck[j] = temp;
    }
}

void main() 
{
    struct player players[NUM_PLAYERS];
    struct card deck[NUM_CARDS];

    // Inicializar o baralho
    for (int i = 0; i < NUM_SUITES; i++) {
            for (int j = 0; j < NUM_RANKS; j++) {
                deck[i * NUM_RANKS + j].suit = i;
                deck[i * NUM_RANKS + j].rank = j;
            }
    }

    // Embaralhar o baralho
    srand(time(NULL));
    shuffle(deck);

    // Distribuir as cartas para os jogadores
    for (int i = 0; i < NUM_PLAYERS; i++) {
            for (int j = 0; j < CARDS_PER_PLAYER; j++) {
                players[i].hand[j] = deck[i * CARDS_PER_PLAYER + j];
            }
    }

    // Exibir as cartas de cada jogador
    for (int i = 0; i < NUM_PLAYERS; i++) {
            printf("Jogador %d:\n", i + 1);
            for (int j = 0; j < CARDS_PER_PLAYER; j++) {
                printf("  %s de %s\n", ranks[players[i].hand[j].rank], suits[players[i].hand[j].suit]);
            }
        printf("\n");
        
    }
}