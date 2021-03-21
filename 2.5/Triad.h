//Triad.h
#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Triad
{
	double first, second, third;

public:
	void SetFirst(double value);
	void SetSecond(double value);
	void SetThird(double value);

	double GetFirst() const;
	double GetSecond() const;
	double GetThird() const;

	Triad();
	Triad(double, double, double);
	Triad(const Triad&);

	Triad& operator = (const Triad&);
	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);
	operator string() const;

	Triad& operator ++ ();
	Triad& operator -- ();
	Triad operator ++ (int);
	Triad operator -- (int);
};
