#ifndef PROCESS_H
#define PROCESS_H

#include "card.h"

void initialize_deck();
void shuffle_deck();
Card deal_card(int *index);
int calculate_score();

#endif
