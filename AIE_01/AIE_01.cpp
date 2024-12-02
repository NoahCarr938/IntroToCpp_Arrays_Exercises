
#include <iostream>

int main(int argc, char** argv)
{
	const int NUM_NUMBERS = 5;
	int numbers[NUM_NUMBERS] = { 10, 20, 30, 40, 50 };

	/* 
	TODO: Print each value of the array in order
	Expected:
		10, 20, 30, 40, 50,
	*/
	// Task1: Write your Code here
	// ------------------------------------------------------------------------
	//int[] PrintArray(int[] array)
	//{
	//	Console.WriteLine("Here are the numbers printed from the array.");
	//	Console.WriteLine();

	//	// for loop to read the playervalues and print them to the screen.
	//	for (int i = 0; i < playerValues.Length; ++i)
	//	{

	//		Console.WriteLine(array[i] + " ");
	//	}
	//	return playerValues;
	//}
	//std::cout << "Player health is: " << playerHealth << std::endl;
	std::cout << "Here is the printed version of the array: " << std::endl;
	/*int[] PrintArray(int[] array)
	{
		for (int i = 0; i < NUM_NUMBERS.Length; ++i)
		{
			std::cout << array[i] + " " << std::endl;
		}
		return NUM_NUMBERS;
	}*/
	for (int i = 0; i < NUM_NUMBERS.Length; ++i)
	{
		std::cout << numbers[i] + " " << std::endl;
	}
	

	// ------------------------------------------------------------------------


	/*
	TODO: Print each value of the array in reverse order
	Expected:
		50, 40, 30, 20, 10,
	*/

	// Task 2: Write your Code here
	// ------------------------------------------------------------------------


	// ------------------------------------------------------------------------

	return 0;
}
