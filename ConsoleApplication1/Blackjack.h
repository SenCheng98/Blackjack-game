#pragma once
#include"Player.h"
#include"Deck.h"
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
class Blackjack {

public:
	Blackjack(Deck currDeck)
		:deckInGame(currDeck){}
	void setNumOfActionDonePlayer() {
		numOfActionDonePlayer++;
	}
	int getNumOfActionDonePlayer() {
		return numOfActionDonePlayer;
	}
	void loadingDeckToQueue();
	void reshuffle();
	void addPlayer(Player newOne);
	void kickOutPlayer(Player oldOne);
	void displayAllPlayerInfo();
	void playingOneRound();


private:
	vector<Player> playerList;
	Deck deckInGame;
	queue<pair<char, int>> qu;
	int numOfActionDonePlayer{ 0 };
};