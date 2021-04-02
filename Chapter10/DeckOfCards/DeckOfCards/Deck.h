#pragma once
#include "Card.cpp"
#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <iostream>

typedef uint64_t uint64;
typedef uint32_t uint32;
typedef uint16_t uint16;
typedef uint8_t uint8;


class Deck
{
	int _decks_amount = 0;
	int _deck_size = 0;
	int _remainingCards = 0;
	Card* _deck = nullptr;

	void _init();
	void _init_deck();
	void _create_deck();
public:
	Deck() : _decks_amount(1) { _init();  };
	Deck(int n) :_decks_amount(n) { _init();  };
	~Deck();

	// utils
	void shuffle_deck();
	const Card& deal_card();
	void new_deck();
	void new_deck(int n);

	// info
	int remaining();
	int deck_size();
	const Card* deck();

};

