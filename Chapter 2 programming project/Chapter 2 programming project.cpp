// Chapter 2 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
	int currentlevel;
 cout << "Current level:  ";
	cin >> currentlevel;
	int oceanlevel, oceanlevel2, oceanlevel3;
	oceanlevel = (5 * 1.5) + currentlevel;
	oceanlevel2 = (7 * 1.5) + currentlevel;
	oceanlevel3 = (10 * 1.5) + currentlevel;
	cout << "The ocean rose in 5 years:  " << oceanlevel << " " << "milimeters" << endl;
	cout << "The ocean rose in 7 years:  " << oceanlevel2 << " " << "milimeters" << endl;
	cout << "The ocean rose in 10 years:  " << oceanlevel3 << " " << "milimeters" << endl;
	return 0;
}

//Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays: