// KMtoMiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float kilos, miles;
	cout << " Input the distance in kilometer : ";
	cin >> kilos;
	miles = (kilos * 0.6213712);
	cout << kilos << " Kilos is: " << miles << " miles." << endl;
	cout << endl;
	return 0;

}

