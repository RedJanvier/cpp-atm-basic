#include <iostream>
#include <string.h>

#include "User.h"

using namespace std;

int promptChoice() {
	int c;
	cout << "Choose an action: \n";
		cout << " 1. Check Balance \n 2. Withdraw cash \n 3. Exit \n";
		
		cin >> c;
	
	return c;
}

int main() {
	User test;
	int balance[15] = { 50, 782400, 50300, 670, 95800, 4550, 63450, 59030, 905600, 69040, 18390, 92850, 9830, 900, 942830 };
	int pins[15] = { 1234, 5362, 9302, 4924, 4892, 4953, 59034, 5903, 9056, 6904, 6839, 9285, 9830, 9009, 94283 };
	string names[15] = { "Ray", "Jay", "May", "June", "Ritha", "ana", "Ada", "Kay", "iris", "issa", "Jon", "Honey", "sis", "John", "chan" };
	string sessionName;
	int sessionPin;
	int sessionID;
	int choice;
	bool isValid = false;
	
	cout << " Welcome to my ATM.... \n\n ";
	cout << " please enter your name: ";
	cin >> sessionName;
	
	for (int i=0; i<15; i++){
		if(sessionName == names[i]){
			cout << "Please Enter your pin to validate: " << sessionName <<endl;
			cin >> sessionPin;
			
			if(pins[i] == sessionPin){
			cout << "Welcome to your account " << sessionName <<endl;
			isValid = true;
			sessionID = i;
			break;
			} else {
				cout << "The pin doesn't match the account of " << sessionName <<endl;
				break;
			}
			
		}
	}
	
	if (isValid) {
		choice = promptChoice();
	} else {
			cout << "User doesn't exist.... Join our nearest agent for more help. \n";
	}
	
	switch (choice) {
		case 1:
			cout << "Your Balance is: " << balance[sessionID] <<endl;
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			break;
		
	}
 	
	cout << "See you and thank you for using our ATM \n";
	
	return 0;
}

