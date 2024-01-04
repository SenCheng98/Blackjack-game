#include "Account.h"


void Account::selectService(int serviceNumber) {
	if (serviceNumber == 1) {
		cout << "Enter your deposit amount: ";
		long depositAmount;
		cin >> depositAmount;
		deposit(depositAmount);
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
	}
	else if (serviceNumber == 2) {
		cout << "Enter your withdraw amount: ";
		long withdrawAmount;
		cin >> withdrawAmount;
		withdraw(withdrawAmount);
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
	}
	else if (serviceNumber == 3) {
		cout << "Your balance: " << getBalance() << "\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(3000));
	}
	else if (serviceNumber == 0) {
		return;
	}
}
void Account::deposit(long depositAmount) {

	if (depositAmount < 0) {
		cerr << "Please enter a valid number.\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));
		return;
	}
	balance += depositAmount;
	cout << "Deposit successfully\n";
}
void Account::withdraw(long withdrawAmount) {

	if (withdrawAmount > balance) {
		cerr << "Withdraw failed! \nThere is not enough balance in your account.\n";
	}
	else {
		balance -= withdrawAmount;
		cout << "Withdraw successfully\n";
	}
}
