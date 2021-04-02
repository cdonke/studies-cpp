using System;

namespace DeckOfCardsCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int decks = 0;
            do
            {
                Console.WriteLine("How many decks to create? (1-10)");
                if (!int.TryParse(Console.ReadLine(), out decks))
                    decks = -1;
            } while (decks < 1 || decks > 10);

            var deck = new Deck(decks);
            Console.WriteLine("There are {0} cards remaining.", deck.RemainingCards);

            dealHand(deck, 5);


            Console.WriteLine("There are {0} cards remaining.", deck.RemainingCards);
            
        }

        static void dealHand(Deck deck, int amount)
        {
            while(amount-- > 0)
            {
                var card = deck.dealCard();
                Console.Write($"{card.ToString()} ");
            }

            Console.WriteLine();
        }
    }
}
