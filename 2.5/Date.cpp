//Date.cpp
#include "Date.h"

bool operator > (const Triad t1, const Triad t2)
{
	if (t1.GetFirst() > t2.GetFirst() || (t1.GetFirst() == t2.GetFirst()) &&
		 (t1.GetSecond() > t2.GetSecond()) ||  (t1.GetSecond() == t2.GetSecond())&&
		 (t1.GetThird() > t2.GetThird()))
		return 1;
	else
		return 0;
}
bool operator < (const Triad t1, const Triad t2)
{
	if (t1.GetFirst() < t2.GetFirst() || (t1.GetFirst() == t2.GetFirst()) &&
		(t1.GetSecond() < t2.GetSecond()) || (t1.GetSecond() == t2.GetSecond()) &&
		 (t1.GetThird() < t2.GetThird()))
		return 1;
	else
		return 0;
}
bool operator == (const Triad t1, const Triad t2)
{
	if ((t1.GetFirst() == t2.GetFirst()) &&
		(t1.GetSecond() == t2.GetSecond()) &&
		(t1.GetThird() == t2.GetThird()))
		return 1;
	else
		return 0;
}

int Date::Ñomparison(const Triad t1, const Triad t2) const
{
	if (t1 > t2)
		return 1;
	if (t1 < t2)
		return 2;
	if (t1 == t2)
		return 3;
}
void Date::TriadResult(int result)
{
	switch (result)
	{
	case 1:
		cout << " t1 > t2 " << endl;
		break;
	case 2:
		cout << " t1 < t2 " << endl;
		break;
	case 3:
		cout << " t1 = t2 " << endl;
		break;
	}
}

void Date::date1(int result)
{
	switch (result)
	{
	case 1:
		cout << " d1 > d2 " << endl;
		break;
	case 2:
		cout << " d1 < d2 " << endl;
		break;
	case 3:
		cout << " d1 = d2 " << endl;
		break;
	}
}
