#include <iostream>
#include <iomanip>
int main(int argc, char* argv[])
{
	int firstNumber = 23;
	int secondNumber = 25;

	int numberOfHellos = 0;

	float firstFloat = 10 / 3;

	double firstDouble = 10 / 3;
	std::cout << "The sum of the two numbers is: " << firstNumber + secondNumber << std::endl;

	std::cout << "Hello number: " << numberOfHellos++ << std::endl;
	std::cout << "Hello number: " << numberOfHellos++ << std::endl;
	std::cout << "Hello number: " << numberOfHellos++ << std::endl;
	std::cout << "Hello number: " << numberOfHellos++ << std::endl;
	std::cout << "Hello number: " << numberOfHellos++ << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	std::cout << "Hello number: " << ++numberOfHellos << std::endl;
	
	std::cout << std::fixed << std::setprecision(15) << "First float: " << firstFloat << std::endl;
	std::cout << std::fixed << std::setprecision(20) << "First double: " << firstDouble << std::endl;
	system("pause");
}