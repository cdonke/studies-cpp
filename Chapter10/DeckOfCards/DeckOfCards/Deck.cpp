#include "Deck.h"
Deck::~Deck() {
	delete _deck;
}

void Deck::_init() {
	srand((unsigned)time(nullptr));  // seed rand for later
	rand();     // this helps on some systems (MSVC)
	_create_deck();
	shuffle_deck();
	return;
}

void Deck::_init_deck() {
	_remainingCards = _decks_amount * 52;
	_deck_size = _remainingCards;

	delete _deck;
	_deck = new Card[_remainingCards];
}

void Deck::_create_deck() {
	_init_deck();

	uint8 cardnum = 0;
	for (int i = 1; i <= _decks_amount; i++) {
		for (uint8 suit = 0; suit < 4; suit++)
		{
			for (uint8 rank = 0; rank < 13; rank++) {
				_deck[cardnum].rank = rank;
				_deck[cardnum].suit = suit;

				cardnum++;
			}
		}
	}
}
void Deck::shuffle_deck() {
	// random number generator
	// built in random function seed with current time
	uint16 ncards = remaining();

	for (uint16 i = 0; i < ncards; ++i) {
		uint16 r = i + (rand() % (ncards - i));
		if (r != i) std::swap(_deck[r], _deck[i]);
	}
}

const Card& Deck::deal_card() {
	// Returns the next card from deck
	// Reduces count by 1
	return _deck[--_remainingCards];
}

void Deck::new_deck() {
	new_deck(1);
}
void Deck::new_deck(int n) {
	// returns a new deck of 52 cards
	// may retunr n>1 decks
	_decks_amount = n;
	_create_deck();
	shuffle_deck();
}

int Deck::remaining() {
	return _remainingCards;
}

int Deck::deck_size() {
	return _deck_size * 52;
}

const Card* Deck::deck() {
	return _deck;
}