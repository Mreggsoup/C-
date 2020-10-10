#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {


	do {	
	cout <<"\n\nWelcome to the caculator\n\n";
	cout <<"Here are the options\n\n";
	cout <<"1. Addition\n";
	cout <<"2. Subtraction\n";
	cout <<"3. Multiplication\n";
	cout <<"4. Division\n";
	cout <<"5. Quit\n";
	
	
	double choice;
	double add1;
        double add2;
	double sub1; 
        double sub2;
	double mul1;
	double mul2;
	double div1;
	double div2;

	
	cout<< "Which operation will you choose\n\n\n";
	cin >> choice;
	
	
	
	if ( choice == 1) {
		 
		 
		 cout <<"Enter First num\n";
		 cin >> add1;
		 cout << "Enter Second num\n";
		 cin >> add2;
		 cout <<"The answer is:\n\n" << add1 + add2;
		 
		 
	}
	
	else if  (choice == 2) {
		cout << "Enter the First Number\n\n";
		cin >> sub1;
		cout << "Enter the second number";
		cin >> sub2;
		cout << "The answer is:" << sub1 - sub2;
	}
	
	
	
	else if (choice == 3) {
		cout <<"Enter the First Number:"; 
		cin >> mul1;
		cout << "Enter the second number:";
		cin >> mul2;
		cout << "The answer is:" << mul1 * mul2;
	
	}
	
	else if (choice == 4) {
		
		cout <<" Enter the first number:";
		cin >> div1;
		cout <<" Enter the second number:";
        cin >> div2;	
		cout << "The answer is:" << div1 /div2;
	}

    else if (choice == 5) {
		break;
	}		
	
	else {
		cout <<" That is not an option";
		
	}
	}while (true);
	return 0;

}
