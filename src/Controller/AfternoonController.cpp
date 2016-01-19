/*
 * AfternoonController.cpp

 *
 *  Created on: Jan 19, 2016
 *      Author: ethr5627
 */
#include "AfternoonController.h"
#include <iostream>
using namespace std;

AfternoonController :: AfternoonController()
{
	this->classCount = 21;

}

void AfternoonController :: setClassCount(int classCount)
{
	this->classCount = classCount;

}
int AfternoonController :: getClassCount()
{
	return classCount;
}

void AfternoonController :: start()
{
	cout << "Welcome to C++ Class" << endl;
	cout << "The current value of class count is " << getClassCount() <<endl;
	int newCount;
	cout << "Choose a new number for class" << endl;
	cin >> newCount;
	this-> setClassCount(newCount);
	cout << "The current value of class count is " << getClassCount() <<endl;

}
