#include <stdio.h>
#include "card.h"

// 定義所有可能的點數
Rank ranks[] = {
    {1, "Ace"}, {2, "2"}, {3, "3"}, {4, "4"}, {5, "5"}, {6, "6"},
    {7, "7"}, {8, "8"}, {9, "9"}, {10, "10"}, {11, "Jack"},
    {12, "Queen"}, {13, "King"}
};

// 定義所有可能的花色
Suit suits[] = {
    {0, "Hearts"}, {1, "Diamonds"}, {2, "Clubs"}, {3, "Spades"}
};


// 打印手牌的信息
void hand_print(const Hand* hand) {
    for (int i = 0; i < hand->n_cards; i++) {
        printf("%s of %s\n", hand->cards[i].rank.name, hand->cards[i].suit.name;)
    }
}