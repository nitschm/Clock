#include "clockType.h"
#include <iostream>
using namespace std;

/*
Matthew Nitsch - Intro to Data Structures: Practice 2
*/

void clockType::setTime(int h, int m, int s)
{
	if (h >= 0 && h < 24)
		hr = h;
	else
		hr = 0;

	if (0 <= m && m < 60)
		min = m;
	else
		min = 0;

	if (0 <= s && s < 60)
		sec = s;
	else
		sec = 0;
}

void clockType::setH(int h)
{
	hr = h;
}

void clockType::setM(int m)
{
	min = m;
}

void clockType::setS(int s)
{
	sec = s;
}

void clockType::getTime(int& h, int& m, int& s)
{
	h = hr;
	m = min;
	s = sec;
}

void clockType::printTime() const
{
	if (hr < 10)
		cout << "0";
		cout << hr << ":";

	if (min < 10)
		cout << "0";
		cout << min << ":";

	if (sec < 10)
		cout << "0";
		cout << sec;
}

void clockType::incrementH()
{
	hr++;
	if (hr > 23)
		hr = 0;
}

void clockType::incrementM()
{
	min++;
	if (min > 59)
	{
		incrementH();
		min = 0;
	}
}

void clockType::incrementS()
{
	sec++;
	if (sec > 59)
	{
		incrementM();
		sec = 0;
	}
}

bool clockType::equalTime(const clockType& otherOb) const
{
	return (hr == otherOb.hr && min == otherOb.min && sec == otherOb.sec);
}


clockType::clockType(int h, int m, int s)
{
	setTime(h, m, s);
}

clockType::clockType()
{
	hr = 0;
	min = 0;
	sec = 0;
}

clockType::~clockType()
{

}












