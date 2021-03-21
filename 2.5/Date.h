//Date.h
#pragma once
#include "Triad.h"

class Date
{
	Triad t;
public:

	int Ñomparison(const Triad t1, const Triad t2) const;
	void TriadResult(int result);
	void date1(int result);

	friend bool operator > (const Triad t1, const Triad t2);
	friend bool operator < (const Triad t1, const Triad t2);
	friend bool operator == (const Triad t1, const Triad t2);
};