// Conditions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype> 


using namespace std;
int main()
{
	// task 4.conditions.1


	int var;
	
	cout << "Input num: ";
	cin >> var;

	if (var % 2 == 0) {
		cout << "Number is even." << endl; // 2, 4, 6 ...
	}
	else {
		cout << "Number is not even." << endl; // 1, 3, 5 ...
	}


	// task 4.conditions.2


	int var1, var2, var3;

	cout << "Input num1: ";
	cin >> var1;
	cout << "Input num2: ";
	cin >> var2;
	cout << "Input num3: ";
	cin >> var3;

	if (var1 < var3 || var2 < var3){
		if (var1 < var2) {
			cout << "num1 is smallest: " << var1 << endl;
		}
		else {
			cout << "num2 is smallest: " << var2 << endl;
		}
	}
	else
	{
		cout << "num3 is smallest: " << var3 << endl;
	}


	// task 4.conditions.3


	cout << "Input num: ";
	cin >> var;

	if (var > 0) {
		cout << "Number is positive: " << var << endl;
	}
	else if (var < 0){
		cout << "Number is negative: " << var << endl;
	}
	else{
		cout << "Number is equal to 0: " << var << endl;
	}


	// task 4.conditions.4


	cout << "Input a: ";
	cin >> var1;
	cout << "Input b: ";
	cin >> var2;
	cout << "1) a+b;  2) a-b;  3) a*b;  4) a/b;  5) a%b;" << endl;
	cout << "Choose operation:";
	cin >> var;

	switch (var)
	{
	case 1:
		cout << var1 + var2 << endl;
		break;
	case 2:
		cout << var1 - var2 << endl;
		break;
	case 3:
		cout << var1 * var2 << endl;
		break;
	case 4:
		if (var2 != 0) {
			cout << var1 / var2 << endl;
		}
		else{
			cout << "Divison by 0 is prohibited" << endl;
		}
		break;
	case 5:
		if (var2 != 0) {
			cout << var1 % var2 << endl;
		}
		else {
			cout << "Divison by 0 is prohibited" << endl;
		}
		break;
	default:
		cout << "Wrong operaton.";
		break;
	}

	
	// task 4.conditions.5


	char ch;

	cout << "Input char: ";
	cin >> ch;

	if (isdigit(ch)) {
		cout << "Char is digit" << endl;
	}else if(isalpha(ch)){
		cout << "Char is letter" << endl;
	}else if (ispunct(ch)) {
		cout << "Char is punctuation" << endl;
	}else {
		cout << "I dont know what is it" << endl;
	}


	// task 4.conditions.6


	cout << "Input num: ";
	cin >> var1;
	cout << "Input lower bound: ";
	cin >> var2;
	cout << "Input Upper bound: ";
	cin >> var3;

	if (var1 >= var2 && var1 <= var3) {
		cout << "Number is within bounds" << endl;
	}
	else{
		cout << "Number is out of bounds" << endl;
	}


	// task 4.conditions.7


	cout << "Input X: ";
	cin >> var1;
	cout << "Input Y: ";
	cin >> var2;

	if (var1 % var2 == 0) {
		cout << "Y is multile of X" << endl;
	}
	else{
		cout << "Y is not multile of X" << endl;
	}


	// task 4.conditions.8


	cout << "Input num: ";
	cin >> var;

	if ((var % 3 == 0) && (var % 5 == 0) && (var % 7 == 0)) {
		cout << "Number is multiple of 3, 5, 7 all-together" << endl;
	}
	else{
		cout << "Number is`nt multiple of 3, 5, 7 all-together" << endl;
	}


	// task 4.conditions.9


	cout << "Input num: ";
	cin >> var;

	cout << "Module of num is: ";
	if (var >= 0) {
		cout << var << endl;
	}
	else{
		cout << -var << endl;
	}


	// task 4.conditions.10


	cout << "Input num: ";
	cin >> var;

	if (var > 9999 || var < -9999) {
		cout << "Number is too big" << endl;
	}
	else if (var > 999 || var < -999){
		cout << "Number is 4 digits long" << endl;
	}
	else if (var > 99 || var < -99) {
		cout << "Number is 3 digits long" << endl;
	}
	else if (var > 9 || var < -9) {
		cout << "Number is 2 digits long" << endl;
	}
	else {
		cout << "Number is 1 digit long" << endl;
	}
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
