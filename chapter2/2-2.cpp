#include <iostream>

int main(int argc, char const* argv[])
{
	int char_num = 8;
	int row = 4;

	for (int i = 0; i < row; i++) {
		int num_of_whitespace = 3 - i;
		for (int j = 0; j < num_of_whitespace; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < char_num - num_of_whitespace * 2; j++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < i; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < char_num - i * 2; j++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
}

