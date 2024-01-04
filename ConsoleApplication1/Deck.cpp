#include"Deck.h"
#include <random>;

using namespace std;
void Deck::reshuffle() {
	auto rng = default_random_engine{};
	shuffle(cards.begin(), cards.end(), rng);
}

void Deck::displayCards() {
	
	// const - data cannot be modified
	// & - a reference, avoiding copying of elements, more efficient.
	for (const auto& card : cards) {
		cout << card.first << ", " << card.second << "\n";
	}
}