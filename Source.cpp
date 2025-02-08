//Cartwright_Adam_Ch3a
//Simple budget calculator
//Adam Cartwright
//2/7/25
//Chapter 3 -- Modern Budget Tracker





#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double initialBalance, rent, groceries, transportation, entertainment, remainingBalance;

    // Output instructions
    cout << "Welcome to your MSCC budget tracker!\n";
    cout << "Please enter your monthly income and expenses. \n\n";

    // Get user input
    cout << "Enter your monthly income: $";
    cin >> initialBalance;

    cout << "How much do you pay for rent?: $";
    cin >> rent;

    cout << "How much do you spend on groceries?: $";
    cin >> groceries;

    cout << "How much do you spend for transportation?: $";
    cin >> transportation;

    cout << "How much do you spend on having fun?: $";
    cin >> entertainment;

    // Calculate remaining balance
    remainingBalance = initialBalance - (rent + groceries + transportation + entertainment);

    // Display final balance
    cout << "\nYour remaining balance after expenses is: $" << remainingBalance << "\n";

    // Check if balance is negative
    if (remainingBalance < 0) {
        cout << "Warning: Expenses are greater than your income.\n";
    }

    cout << "Thank you for using the MSCC budget tracker!\n";
    return 0;
}