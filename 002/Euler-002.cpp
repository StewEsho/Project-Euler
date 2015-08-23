/*******
Project Euler
002 | Even Fibonacci Numbers
CHALLENGE:
	By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

Written by Stew Esho
*******/
#include <iostream>
#include <cmath>
using namespace std;

int main(){//main function

	//Variable Declarations
	const int MAX = 4000000; //stores the max count the fib. sequence will go to. locked at 4,000,000
	int fib1 = 1; //stores the second-last number in the sequence
	int fib2 = 1; //stores the last number in the sequence
	int fibSum = 0; //if the last number in the sequence is even, it's value will be added to fibSum.

	//Main Loop
	/* iterates through the fib. sequence up until MAX.
	   if the last number in the sequence (fib2) is even,
	   its value is added to fibSum. */
	while (fib2 < MAX){
		fib2 += fib1;
		fib1 = fib2 - fib1;
		if (fib2 % 2 == 0){
			fibSum += fib2;
		}
	}
	//prints fibSum to the screen.
	cout << fibSum << endl;
	cin.get();
	return 0;
}
