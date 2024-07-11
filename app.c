#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "process.h"
#include "card.h"

int main() {
    // 初始化隨機數生成器
    srand(time(NULL) ^ (getpid()<<16));

    // 初始化一副撲克牌
    initialize_deck();

    // 洗牌
    shuffle_deck();

    // 發牌索引
    int card_index = 0;


    return 0;
}
