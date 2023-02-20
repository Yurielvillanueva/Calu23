//calculator
#include <iostream>
using namespace std;

int main() {
	int numOne, numTwo;
	char op;

	cout << "Enter First Number: ";
	cin >> numOne;

	cout << "Enter Second Number: ";
	cin >> numTwo;

	cout << "Enter an Operator + - * / ";
	cin >> op;

	switch (op)
	{
	case '+':
		cout << numOne << " + " << numTwo << " = " << numOne + numTwo;
		break;
	case '-':
		cout << numOne << " - " << numTwo << " = " << numOne - numTwo;
		break;
	case '*':
		cout << numOne << " * " << numTwo << " = " << numOne * numTwo;
		break;
	case '/':
		cout << numOne << " / " << numTwo << " = " << numOne / numTwo;
		break;
	}
}