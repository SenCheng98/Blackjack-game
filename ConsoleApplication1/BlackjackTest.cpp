#include "Deck.h"
#include"Blackjack.h"
#include"Player.h"
#include <iostream>

using namespace std;
int main() {


	Deck deck;
	Blackjack game(deck);
	game.addPlayer(Player("dealer", 1000));
	game.addPlayer(Player("elon", 10));
	game.addPlayer(Player("sen", 5));
	game.displayAllPlayerInfo();
	cout << "\n\n\n" << endl;
	game.loadingDeckToQueue();
	game.playingOneRound();

	////pointer
	//cout << "\n\n\n" << endl;
	//int a{ 7 };
	//int* aPtr = &a;
	//cout << "address of a: " << &a
	//	<< "\nvalue of aPtr: " << aPtr;
	//cout << "\n\n value of a: " << a
	//	<< "\nvalue of *aPtr: " << *aPtr << endl;

	return 0;
}