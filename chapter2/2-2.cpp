#include <iostream>

int main(int argc, char const* argv[])
{
	int row = 8;
	int line = 4;

	for (int i = 0; i < line; i++) {
		int num_of_whitespace = 3 - i;
		for (int j = 0; j < num_of_whitespace; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < row - Num_of_whitespace * 2; j++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < i; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < row - i * 2; j++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
}

