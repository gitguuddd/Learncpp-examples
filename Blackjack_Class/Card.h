//
// Created by Mindaugas K on 7/22/2019.
//

#ifndef BLACKJACK_CLASS_CARD_H
#define BLACKJACK_CLASS_CARD_H
#include <iostream>

class Card {
public:
    enum CardSuit
    {
        SUIT_CLUB,
        SUIT_DIAMOND,
        SUIT_HEART,
        SUIT_SPADE,
        MAX_SUITS
    };

    enum CardRank
    {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,
        RANK_QUEEN,
        RANK_KING,
        RANK_ACE,
        MAX_RANKS
    };
private:
    CardRank m_rank;
    CardSuit m_suit;
public:
   explicit Card( CardRank r=RANK_2, CardSuit s=SUIT_CLUB):m_rank(r),m_suit(s)
    {
    }
     int  getCardValue() const;
    void  printCard() const;
};


#endif //BLACKJACK_CLASS_CARD_H
