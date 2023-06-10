#include "stdafx.h"
#include "DollarAmount.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void getUserInput();

int main()
{
	getUserInput();

	unsigned int a = 19, b = 58, c;

	c = a + b;

	cout << "Thank you for placing your bet! \n" << c << endl;

	return 0;
}

void getUserInput()
{
	int bet, choice;
	DollarAmount da;

	do
	{
		cout << "Hello! Press: \n '1' to enter a bet \n '2' to view all bets \n '3' to exit. \n\n" << endl;
		cin >> choice;
		cout << "\n_ \n\n" << endl;

		switch (choice)
		{
		case 1:
			cout << "Enter a bet please: ";
			cin >> bet;
			cout << "\n_" << endl;
			da.SetBet(bet);
			break;
		case 2:
			cout << "Printing all bets ..." << endl;
			da.Print();
			break;
		case 3:
			cout << "Exiting..." << endl;
			//loop and delete tree
			break;
		default:
			break;
		}
	} while (choice != 3);

}
