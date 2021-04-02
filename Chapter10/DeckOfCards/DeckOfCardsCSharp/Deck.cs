using System;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text;

namespace DeckOfCardsCSharp
{
    class Deck
    {
        private int _decks = 0;
        private int _remainingCards = 0;
        private Card[] _cards;

        public Deck() : this(1) { }

        public Deck(int decks)
        {
            _decks = decks;

            createDeck();
            shuffleDeck();
        }

        public Card dealCard()
        {
            if (RemainingCards > 0)
                return _cards[--_remainingCards];

            throw new NullReferenceException("Deck is empty");
        }

        private void createDeck()
        {
            initDeck();

            int card = 0;
            for (int deck = 0; deck < _decks; deck++)
            {
                for (int suit = 0; suit < 4; suit++)
                {
                    for (int rank = 0; rank < 13; rank++)
                    {
                        _cards[card++] = new Card { rank = (Rank)rank, suit = (Suit)suit };
                    }
                }
            }
        }

        private void initDeck()
        {
            _remainingCards = _decks * 52;
            _cards = new Card[_remainingCards];
        }

        private void shuffleDeck()
        {
            Random r = new Random();

            for (int i = 0; i < _remainingCards; i++)
            {
                int c = i + (r.Next() % (_remainingCards - i));
                if (c != i)
                {
                    var aux = _cards[i];
                    _cards[c] = _cards[i];
                    _cards[i] = aux;
                }
            }
        }

        public int RemainingCards =>
            _remainingCards;
    }
}
