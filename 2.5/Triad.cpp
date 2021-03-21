//Triad.cpp
#include "Triad.h"

using namespace std;

void Triad::SetFirst(double value) { first = value; }
void Triad::SetSecond(double value) { second = value; }
void Triad::SetThird(double value) { third = value; }

double Triad::GetFirst() const { return first; }
double Triad::GetSecond() const { return second; }
double Triad::GetThird() const { return third; }

Triad::Triad() { first = 0, second = 0, third = 0; }
Triad::Triad(double first = 0, double second = 0, double third = 0)
{
	this->first = first;
	this->second = second;
	this->third = third;
}
Triad::Triad(const Triad& A)
{
	first = A.GetFirst();
	second = A.GetSecond();
	third = A.GetThird();
}

Triad& Triad::operator = (const Triad& A)
{
	first = A.first;
	second = A.second;
	third = A.third;
	return *this;
}
ostream& operator << (ostream& out, const Triad& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Triad& A)
{
	cout << " first = "; in >> A.first;
	cout << " second = "; in >> A.second;
	cout << " third = "; in >> A.third;
	cout << " " << A.first << "." << A.second << "." << A.third << endl;
	return in;
}
Triad::operator string() const
{
	stringstream ss;
	ss << " first: " << first << endl;
	ss << " second: " << second << endl;
	ss << " third: " << third << endl;
	return ss.str();
}

Triad& Triad::operator ++ ()//перевантаження операції "інкременту"(префіксна форма)
{
	first++;
	second++;
	third++;
	return *this;
}
Triad& Triad::operator -- () //перевантаження операції "дикременту"(префіксна форма)
{
	first--;
	second--;
	third--;
	return *this;
}
Triad Triad::operator ++ (int) //перевантаження операції "інкременту"(постфіксна форма)
{
	Triad t(*this);
	first++;
	second++;
	third++;
	return t;
}
Triad Triad::operator -- (int) //перевантаження операції "дикременту"(постфіксна форма)
{
	Triad t(*this);
	first--;
	second--;
	third--;
	return t;
}