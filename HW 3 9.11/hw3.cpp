// HW 3 9.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class EvenNumber {
public:
	EvenNumber() {
		value = 0;
	}

	EvenNumber(int i)
	{
		value = i;
	}

	 int getValue() {

		return value;
	}

	int getNext() {
		return value + 2;
	}

	int getPrevious()
	{
		return value - 2;
	}

private:
	int value;

};


int main()
{
	EvenNumber ob(16);
	cout << "The current even value is " << ob.getValue() << endl;
	cout << "The next even number after the current value is " << ob.getNext() << endl;
	cout << "The previous even number before the current value is " << ob.getPrevious() << endl;

    return 0;
}

