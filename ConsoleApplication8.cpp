
#include "pch.h"
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	string name;
	int menu;
	double a = 0.0, b = 0.0, c = 0.0;

	cout << "please enter your name :" << name;
	getline(cin, name);

	cout << "Please enter two numbers";
	cin >> a >> b;

	cout << "Enter \n 1. ADD \n 2. SUB \n 3. DIV \n 4. MULT" << endl;
	cin >> menu;

	switch (menu)
	{
	case 1: c = a + b;
		cout << "sum is " << c;
		break;
	case 2: c = a - b;
		cout << "difference is " << setprecision(4) << c;
		break;
	case 3: c = a / b;
		cout << "remainder is " << c;
		break;
	case 4:c = a * b;
		cout << "product is " << c;
		break;
	
	}
}

