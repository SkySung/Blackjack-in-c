#ifndef CARD_H
#define CARD_H

typedef struct {
    int value;
    const char* name;
} Rank;

typedef struct {
    int value;
    const char* name;
} Suit;

typedef struct {
    Rank rank;
    Suit suit;
    
} Card;

typedef struct {
    int n_cards;
    Card* cards;
} Hand;

extern Rank ranks[];
extern Suit suits[];
extern Hand hand;

void hand_print(const Hand* hand);


#endif 
