#include "Player.h"


void Player::placeABet(int betAamount) {
	credit -= betAamount;
}
void Player::winTheBet(int betAamount) {
	credit += betAamount;
}
void Player::drawHandCard(pair<char, int> card) {
	handCards.push_back(card);
	sum += card.second;
}
void Player::displayHandCards() {
	for (auto& card : handCards) {
		cout << "(" << card.first << ", " << card.second << ")" << "\n";
	}
	cout << "sum = " << getSum() << "\n";
}
