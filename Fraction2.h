#pragma once
#include <iostream>
#include <conio.h>

using namespace std;

class Fraction
{
public:
	int numerator;
	int denominator;
	int numerator2;
	int denominator2;

	Fraction(int numerator, int denominator);
	Fraction();
	void info(Fraction obj, int numerator, int denominator, int numerator2, int denominator2);

	Fraction(int numerator, int denominator, int numerator2, int denominator2);

	void info(int numerator, int denominator);

	double get_sum(double num1, double num2, double num3);
	double get_minus(double num1, double num2, double num3);
	double get_multiply(double numerator, double denominator, double numerator2, double denominator2);
	double get_divide(double numerator, double denominator, double numerator2, double denominator2);

	friend Fraction operator+(const Fraction& left, const Fraction& right)
	{
		return Fraction(left.numerator + right.numerator, left.denominator + right.denominator);
	}

	friend Fraction operator+(const Fraction& left, int value)
	{
		return Fraction(left.numerator + value, left.denominator + value);
	}

	friend Fraction operator+(int value, const Fraction& left)
	{
		return Fraction(value + left.numerator, value + left.denominator);
	}

	friend Fraction operator-(const Fraction& left, const Fraction& right)
	{
		return Fraction(left.numerator - right.numerator, left.denominator - right.denominator);
	}


	friend Fraction operator-(const Fraction& left, int value)
	{
		return Fraction(left.numerator - value, left.denominator - value);
	}

	friend Fraction operator-(int value, const Fraction& left)
	{
		return Fraction(value - left.numerator, value - left.denominator);
	}

	friend Fraction operator*(const Fraction& left, const Fraction& right)
	{
		return Fraction(left.numerator * right.numerator, left.denominator * right.denominator);
	}

	friend Fraction operator*(const Fraction& left, int value)
	{
		return Fraction(left.numerator * value, left.denominator * value);
	}

	friend Fraction operator*(int value, const Fraction& left)
	{
		return Fraction(value * left.numerator, value * left.denominator);
	}

	friend Fraction operator/(const Fraction& left, const Fraction& right)
	{
		return Fraction(left.numerator / right.numerator, left.denominator / right.denominator);
	}

	friend Fraction operator/(const Fraction& left, int value)
	{
		return Fraction(left.numerator / value, left.denominator / value);
	}

	friend Fraction operator/(int value, const Fraction& left)
	{
		return Fraction(value / left.numerator, value / left.denominator);
	}

	friend ostream& operator<<(ostream& output, const Fraction& fraction)
	{
		output << fraction.numerator << "\n-" << '\n' << fraction.denominator << '\n';
		output << '\n' << fraction.numerator2 << "\n-" << '\n' << fraction.denominator2 << '\n';
		return output;
	}

	Fraction& operator++()
	{
		++numerator;
		++denominator;
		return *this;
	}

	Fraction& operator--()
	{
		--numerator;
		--denominator;
		return *this;
	}

	const Fraction operator++(int)
	{
		Fraction fraction(numerator, denominator);

		++(*this);

		return fraction;
	}

	const Fraction operator--(int)
	{
		Fraction fraction(numerator, denominator);

		--(*this);

		return fraction;
	}

	~Fraction();
};

void info2();
