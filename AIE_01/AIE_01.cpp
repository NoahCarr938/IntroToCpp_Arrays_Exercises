
#include <iostream>

int main(int argc, char** argv)
{
	const int NUM_NUMBERS = 5;

	// A stack array
	int numbers[NUM_NUMBERS] = { 10, 20, 30, 40, 50 };

	/* 
	TODO: Print each value of the array in order
	Expected:
		10, 20, 30, 40, 50,
	*/
	// Task1: Write your Code here
	// ------------------------------------------------------------------------

	std::cout << "Here is the printed version of the array: " << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout << numbers[i] << std::endl;
	}
	

	// ------------------------------------------------------------------------


	/*
	TODO: Print each value of the array in reverse order
	Expected:
		50, 40, 30, 20, 10,
	*/

	// Task 2: Write your Code here
	// ------------------------------------------------------------------------
	std::cout << std::endl;
	std::cout << "Here is the array printed in reverse: " << std::endl;
	for (int i = 5 - 1; i < 5; --i)
	{
		if (i == -1)
			break;

		std::cout << numbers[i] << std::endl;
	}
	// ------------------------------------------------------------------------

	return 0;
}
