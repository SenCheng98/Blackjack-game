#pragma once

#include<iostream>
#include <thread> // this_thread, sleep_for()
#include <chrono>  // milliseconds

using namespace std;
class Account{
public:

	Account() {
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your initial balance: ";
		cin >> balance;
	}
	Account(string accountName, int initBalance)
		//member initializer list
		: name(accountName), balance(0){		
		//validation
		if (initBalance >= 0)	balance = initBalance;
	}
	void setName(std::string accountName) {
		name = accountName;
	}
	std::string getName() const{
		return name;
	}
	int getBalance() {
		return balance;
	}
	void selectService(int serviceNumber);
	void deposit(long depositAmount);
	void withdraw(long withdrawAmount);



private:
	std::string name;
	const int cardNumber{2721578};
	const int password{123};
	long balance;
};



