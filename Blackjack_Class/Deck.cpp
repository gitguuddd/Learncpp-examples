//
// Created by Mindaugas K on 7/22/2019.
//

#include "Deck.h"
#include <cassert>
#include <cstdlib>
void Deck::printDeck()
{
    for (const auto &card : m_deck)
    {
        card.printCard();
        std::cout << ' ';
    }

    std::cout << '\n';
}
 int Deck::getRandomNumber(int min, int max)
{

    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
void Deck::swapCard(Card &a, Card &b)
{
    Card temp = a;
    a = b;
    b = temp;
}
void Deck::shuffleDeck()
{
    for (int index = 0; index < 52; ++index)
    {
        int swapIndex = getRandomNumber(0, 51);
        swapCard(m_deck[index], m_deck[swapIndex]);
    }
    m_cardIndex=0;
}
const Card& Deck::dealCard(){
    assert(m_cardIndex<52);
    return m_deck[m_cardIndex++];
}