using System;
using System.Collections.Generic;
using System.Text;

namespace DeckOfCardsCSharp
{
    enum Rank
    {
        A = 1,
        Number2 = 2,
        Number3 = 3,
        Number4 = 4,
        Number5 = 5,
        Number6 = 6,
        Number7 = 7,
        Number8 = 8,
        Number9 = 9,
        T = 10,
        J = 11,
        Q = 12,
        K = 13
    }

    enum Suit
    {
        Diamonds = 0,
        Hearts = 1,
        Clubs = 2,
        Spades = 3
    }

    struct Card
    {
        public Suit suit { get; set; }
        public Rank rank { get; set; }

        public override string ToString()
        {
            string result = string.Empty;
            if ((int)rank >= 2 || (int)rank <= 9)
            {
                result += (int)rank;
            }
            else
            {
                result += rank.ToString();
            }

            result += suit.ToString()[0];

            return result;
        }
    }
}
