#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << "create 2 array with random value" << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		std::cout << "In scope: test the deep copy" << std::endl;
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		std::cout << "they're the same values" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "outside the scope, two arrays must be identical" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	std::cout << "they're the same values" << std::endl;
	std::cout << std::endl;
	std::cout << "attempt to access a negative value" << std::endl;
	try
	{
		numbers[-2] = 0;
		std::cout << "The test works (it shouldn't)" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "attempt to access last cell + 1 of the array" << std::endl;
	try
	{
		numbers[MAX_VAL] = 0;
		std::cout << "The test works (it shouldn't)" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;

	std::cout << std::endl;
	std::cout << "Create array of string" << std::endl;
	std::cout << "we're trying to fill in 5 cells when the table only has 5" << std::endl;
	Array<std::string>	str(4);
	try {
		str[0] = "game";
		str[1] = "olive";
		str[2] = "koala";
		str[3] = "kayak";
		str[4] = "kiwi";
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "array:" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << str[i] << std::endl;
	return 0;
}
