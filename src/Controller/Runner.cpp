/*
 * Runner.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: ethr5627
 */
#include "AfternoonController.h"
int main()
{
	AfternoonController * baseController = new AfternoonController();
	baseController->start();
	//do the same thing ina different way
	(*baseController).start();
	return 0;
}



