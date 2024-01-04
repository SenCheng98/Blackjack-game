#include"Blackjack.h"
#include"Constant.h"


void Blackjack::addPlayer(Player newOne) {
	playerList.push_back(newOne);
}
void Blackjack::kickOutPlayer(Player oldOne) {
	// auto - the type of the variable that is being declared will be automatically deducted from its initializer
	auto it = find(playerList.begin(), playerList.end(), oldOne);
	if (it != playerList.end()) {
		playerList.erase(it);
	}
}
void Blackjack::displayAllPlayerInfo() {
	vector<Player>::iterator itr;
	if (playerList.size() <= 1) {
		cout << "There is no player now" << endl;
		return;
	}
	cout << "The number of current players is " << playerList.size() << "\n\n";
	for (auto itr = playerList.begin(); itr != playerList.end(); itr++) {
		cout << "Player: " << itr->getName() << "\t\t" << "Credit: " << itr->getCredit() << endl;
	}
}
void Blackjack::reshuffle() {
	deckInGame.reshuffle();
}
void Blackjack::loadingDeckToQueue() {
	reshuffle();
	for (const auto& card : deckInGame.getCards()) {

		// if card is a pointer reference, then use *card
		// if card is an object reference, then use card
		qu.push(card);
	}

	////display the cards
	//while(!qu.empty()) {
	//	cout << "(" << qu.front().first << " - " << qu.front().second << ")\n";
	//	qu.pop();
	//}
}
void Blackjack::playingOneRound() {

	if (playerList.size() < 1)	return;

	numOfActionDonePlayer = 0;
	while (true) {

		for (auto& player : playerList) {
			
			//put deck in a queue
			//pop 2 cards from queue to player's hand
			//when queue is empty, reshuffle deck and put deck in queue
			if (getNumOfActionDonePlayer() >= playerList.size())	break;
			if (qu.empty())	break;
			if (player.getStatus() == ACTION_DONE)	continue;

			cout << player.getName() << ", do you want to get one more card? type yes/no \n";
			string decision{""};
			cin >> decision;
			if (decision == "yes") {
				player.drawHandCard(qu.front());
				qu.pop();
				player.displayHandCards();
				if (player.getSum() >= 21) { 
					player.setStatus(ACTION_DONE);
					setNumOfActionDonePlayer();
				}
			}else if(decision == "no"){
				player.setStatus(ACTION_DONE);
				setNumOfActionDonePlayer();
			}

		}

		if (getNumOfActionDonePlayer() >= playerList.size())	break;
	}

	cout << "The round is over, here is the result:\n";
	int dealerSum{ 0 };
	for (auto& player : playerList) {
		if (player.getName() == "dealer") {
			dealerSum = player.getSum();
			break;
		}
	}
	for (auto& player : playerList) {
		if (player.getName() == "dealer")	continue;
		if ((player.getSum() > 21 && dealerSum > 21) || (player.getSum() == dealerSum)) {
			cout << player.getName() << "'s sum = " << player.getSum()
				<< "\ndealer's sum = " << dealerSum
				<< "\nresult: draw\n";
		}else if(player.getSum() <= 21 && (player.getSum() > dealerSum || dealerSum >21)){
			// credit
			cout << player.getName() << "'s sum = " << player.getSum()
				<< "\ndealer's sum = " << dealerSum
				<< "\nresult: win\n";
		}else if (dealerSum <= 21 && (player.getSum() > 21 || player.getSum() < dealerSum)) {
			// credit
			cout << player.getName() << "'s sum = " << player.getSum()
				<< "\ndealer's sum = " << dealerSum
				<< "\nresult: lose\n";
		}
	}
}