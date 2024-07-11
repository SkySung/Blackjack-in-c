#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "process.h"
#include "card.h"

#define DECK_SIZE 52

static Card deck[DECK_SIZE];

void initialize_deck() {
    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck[index].suit = suits[i];
            deck[index].rank = ranks[j];
            index++;
        }
    }
}

void shuffle_deck() {
    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

Card deal_card(int *index) {
    if (*index < DECK_SIZE) {
        return deck[(*index)++];
    } else {
        printf("No more cards in the deck!\n");
        exit(1);
    }
}

int calculate_score(Hand hand) {
    int score = 0;
    int has_ace = 0;
    for (int i = 0; i < hand.n_cards; i++) {
        int card_value = get_card_value(hand.cards[i]);
        if (card_value == 1) {
            has_ace = 1;
        }
        score += card_value;
    }
    if (has_ace && score <= 11) {
        score += 10;
    }
    return score;
}