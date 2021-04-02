// ProjectTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Deck.h"

void deal_hand(Deck& deck, int amount) {
    while (amount-- > 0) {
        Card card = deck.deal_card();
        std::cout << card.toString() << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int decks;
    
    do {
        std::cout << "How many decks to create (1-10)?";
        std::cin >> decks;
    } while (decks < 1 || decks > 10);
    

    Deck deck(decks);
    printf("there are %d cards remaining\n", deck.remaining());


    deal_hand(deck, 5);

    printf("there are %d cards remaining\n", deck.remaining());
}