#pragma once

#include<iostream>
#include<vector>
#include"Constant.h"

using namespace std;
class Player
{
public:

	//initializer list, directly initailize, 
	//do not need to call default constrcutor and then assignment operator, is more effiecient.
	Player(string playerName, int amount)
	:name(playerName), credit(amount){}

	void setName(string playerName) {
		name = playerName;
	}
	void setSum(int num) {
		sum += num;
	}
	void setStatus(int a) {
		status = a;
	}
	int getStatus() {
		return status;
	}
	string getName() {
		return name;
	}
	int getSum() {
		return sum;
	}
	int getCredit() {
		return credit;
	}
	void placeABet(int betAamount);
	void winTheBet(int betAamount);
	void drawHandCard(pair<char, int> card);
	void displayHandCards();


	// If we want to use find(), and the element in the vector is of a user-defined type (e.g., a class or struct),
	// we need to make sure that we have a way to compare the elements. 
	// This can be achieved by overloading the == operator for your class or struct, or by using a custom comparison function.
	bool operator==(const Player& other) const {
		return name == other.name && credit == other.credit;
	}


private:
	string name;
	int credit;
	vector<pair<char, int>> handCards;
	int sum{ 0 };
	int status{ PLAYING };
};

