#include <iostream>
#include <string>
#include "main.h"

int main(int argc, char** argv)
{
	if (argc < 4) {
		std::cerr << "./" << argv[0] << " number (+-*/%) number" << std::endl;
		return (-1);
	}
	std::cout << argv[1] << " " << argv[2] << " " << argv[3] << " = ";
	switch (argv[2][0]) {
		case '+':
			std::cout << infinite_add(argv[1], argv[3]);
			break;
		case '-':
			std::cout << infinite_sub(argv[1], argv[3]);
			break;
		case '*':
			std::cout << infinite_mul(argv[1], argv[3]);
			break;
		case '/':
			std::cout << infinite_div(argv[1], argv[3]);
			break;
		case '%':
			std::cout << infinite_mod(argv[1], argv[3]);
			break;
	}
	std::cout << std::endl;
	return (0);
}