#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	int firstNumber = 23;
	int secondNumber = 25;

	int numberOfHellos = 0;

	float firstFloat = 10.0f / 3.0f;
	double firstDouble = 10.0 / 3.0;

	std::cout << "The two numbers added together is: " << firstNumber + secondNumber << std::endl;

	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;

	std::cout << std::fixed << std::setprecision(15) << "First float: " << firstFloat << std::endl;
	std::cout << std::fixed << std::setprecision(15) << "First double: " << firstDouble << std::endl;

	system("pause");
}