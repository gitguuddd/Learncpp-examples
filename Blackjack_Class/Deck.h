//
// Created by Mindaugas K on 7/22/2019.
//

#ifndef BLACKJACK_CLASS_DECK_H
#define BLACKJACK_CLASS_DECK_H
#include <array>
#include "Card.h"

class Deck {
private:
    std::array<Card,52> m_deck;
    int m_cardIndex{0};
public:
    Deck()
    {
        int card = 0;
        for (int suit = 0; suit < Card::MAX_SUITS; ++suit)
            for (int rank = 0; rank < Card::MAX_RANKS; ++rank)
            {
                m_deck[card]=Card(static_cast<Card::CardRank>(rank), static_cast<Card::CardSuit>(suit));
                ++card;
            }
    }
    void printDeck();
private:
    static int getRandomNumber(int min, int max);
    static void swapCard(Card &a, Card &b);
public:
    void shuffleDeck();
    const Card& dealCard();
};


#endif //BLACKJACK_CLASS_DECK_H
