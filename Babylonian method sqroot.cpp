// Babylonian method sqroot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	float num,n;
	float guess = 1, sq_R = 0;
	cout << "Enter the number you want to square root: ";
	cin >> num;
	if (num < 0) {
		cout << endl << "Error";
	}
	else if (num == 0) {
		sq_R = 0;
	}
	else {
		while (abs(sq_R - guess) > 0.000001) {
			sq_R = guess;
			guess = 0.5 * (guess + num / guess);
			cout << sq_R << " , ";
		}
		cout << endl << "The Square Root of " << num << " = " << sq_R;
	}
	cin >> n;
    return 0;
}

