// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
#include <iostream>
#include "Account.h"
#include<iomanip>

using namespace std;
int main() {


    //simple initialization
    //just warning
    int num1 = 32.2;
    int num2 = 77;
    //unsigned init
    unsigned int pos{ 0 };
    pos = 1;
    cout << pos << "\n";
    cout << setw(10) << pos << "\n";
    //list-initization
    // include check, the compiler will give err
    //int num3{ 23.2 };

    //type converting in C++ - static_cast<double> - safer check.
    //setprecision(x) - x digits of precision right of the decimal point.
    //fixed - as opposed to scientific notation.
    cout << fixed;
    // Using std::endl to flush the buffer
    cout << setprecision(3) << "res = " << static_cast<double>(num1) * num2 << "\n" << endl;
    cout << setprecision(5) << "res = " << static_cast<double>(num1) / num2 << "\n" << endl;
    cout << setprecision(3) << "res = " << static_cast<double>(num1) * num2 << "\n" << endl;
    

    Account account1{ "sen", 10 };
    Account account2;
    cout << "Account1 name is " << account1.getName() << "\n";
    cout << "Account1 balance is " << account1.getBalance() << "\n";
    cout << "Account2 name is " << account2.getName() << "\n";
    cout << "Account2 balance is " << account2.getBalance() << "\n";
    

    int serviceNumber;
    do {
        cout << "If you want deposit service, press 1 \nIf you want withdraw service, press 2 \nIf you want to get your balance, press 3 \nIf you want to exit, press 0\n";
        cin >> serviceNumber;
        account2.selectService(serviceNumber);

    } while (serviceNumber != 0);
   

    cout << "Service ended, please make sure you take your card away..." << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

*/
