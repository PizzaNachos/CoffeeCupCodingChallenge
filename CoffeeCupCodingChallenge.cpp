// CoffeeCupCodingChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int width;
	std::cin >> width;

	int height;
	std::cin >> height;

	int array[15][15] = { 0 };

	for (int readCounter = 0; readCounter < height; readCounter++) {
		for (int j = 0; j < width; j++) {
			std::cin >> array[readCounter][j];
		}
	}

	for (int writeCounter = 0; writeCounter < height; writeCounter++) {
		std::cout << std::endl;
		for (int j = 0; j < width; j++) {
			std::cout << array[writeCounter][j] << " ";
		}
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < height; i++) {

		for (int top = i; top < width - i; top++) {
			std::cout << array[i][top] << " ";
		}

		std::cout << std::endl;

		for (int right = 1 + i; right < height - i; right++) {
			std::cout << array[right][(width - i - 1)] << " ";
		}

		std::cout << std::endl;

		for (int bottom = width - 1 - i; bottom > i; bottom--) {
			std::cout << array[height - i - 1][bottom - 1] << " ";
		}

		std::cout << std::endl;

		for (int left = height - (i + 1); left > (i + 1); left--) {
			std::cout << array[left - 1][i] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << "Press any number (and hit enter) to exit";
	char exit;
	std::cin >> exit;
	
}

