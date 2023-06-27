#include "Fraction2.h"

Fraction::Fraction(int numerator, int denominator, int numerator2, int denominator2)
{
	std::cout << "Constructor (int numerator, int denominator, int numerator2, int denominator2) volunteered" << '\n' << '\n';
	this->numerator = numerator;
	this->denominator = denominator;
	this->numerator2 = numerator2;
	this->denominator2 = denominator;
}

Fraction::Fraction()
{

}

Fraction::Fraction(int numerator, int denominator)
{
	std::cout << "Constructor (int numerator, int denominator) volunteered" << '\n' << '\n';
	this->numerator = numerator;
	this->denominator = denominator;
}

double Fraction::get_sum(double num1, double num2, double i)
{
	return (num1 + num2) / i; // sum
}

double Fraction::get_minus(double num1, double num2, double i)
{
	return (num1 - num2) / i; // minus
}

double Fraction::get_multiply(double numerator, double denominator, double numerator2, double denominator2)
{
	return ((numerator / denominator) * (numerator2 / denominator2)); // multiply
}

double Fraction::get_divide(double numerator, double denominator, double numerator2, double denominator2)
{
	return ((numerator / denominator) / (numerator2 / denominator2)); // divide
}

void Fraction::info(Fraction obj, int numerator, int denominator, int numerator2, int denominator2)
{
	bool flag = false;
	int frac1;
	int frac2;
	short choice;
	for (size_t i = 1; flag != true; ++i)
	{
		if ((i % denominator == 0) && (i % denominator2 == 0)) // check if both denominators are equal to 0
		{
			flag = true;
			frac1 = numerator * (i / denominator);
			frac2 = numerator2 * (i / denominator2);
			std::cout << "First fraction: " << '\n' << numerator << "\n-" << '\n' << denominator << '\n';
			std::cout << "Second fraction: " << '\n' << numerator2 << "\n-" << '\n' << denominator2 << '\n';
			std::cout << "Lowest common denominator = " << i << '\n' << '\n';
			std::cout << "----------------------------------" << '\n';
			std::cout << "1.sum" << '\n';
			std::cout << "2.minus" << '\n';
			std::cout << "3.multy" << '\n';
			std::cout << "4.divide" << '\n';
			std::cout << "5.all" << '\n';
			std::cout << "----------------------------------" << '\n';
			std::cin >> choice;

			switch (choice)
			{
			case 1:
				std::cout << "Sum: " << frac1 << "+" << frac2 << "/" << i << " = " << obj.get_sum(frac1, frac2, i) << '\n';
				break;
			case 2:
				std::cout << "Minus: " << frac1 << "-" << frac2 << "/" << i << " = " << obj.get_minus(frac1, frac2, i) << '\n';
				break;
			case 3:
				std::cout << "Multy: " << obj.get_multiply(numerator, denominator, numerator2, denominator2) << '\n';
				break;
			case 4:
				std::cout << "Divide: " << obj.get_divide(numerator, denominator, numerator2, denominator2) << '\n';
				break;
			case 5:
				std::cout << "Sum: " << frac1 << "+" << frac2 << "/" << i << " = " << obj.get_sum(frac1, frac2, i) << '\n';
				std::cout << "Minus: " << frac1 << "-" << frac2 << "/" << i << " = " << obj.get_minus(frac1, frac2, i) << '\n';
				std::cout << "Multy: " << obj.get_multiply(numerator, denominator, numerator2, denominator2) << '\n';
				std::cout << "Divide: " << obj.get_divide(numerator, denominator, numerator2, denominator2) << '\n';
				break;
			}
		}
	}
}

Fraction::~Fraction()
{
	std::cout << '\n' << '\n';
	std::cout << "Destructor called";
}