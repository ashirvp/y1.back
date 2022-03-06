//#include "stdafx.h" 
#include <iostream>
#include <iomanip>
using namespace std;
// class declaration section
class Time
{
private:
	int seconds;
	int minutes;
	int hours;
public:
	Time(int = 0, int = 0, int = 0);   // constructor
	Time(long);           // another constructor
	void showTime();      // member method to display a Time
};
// class implementation section
Time::Time(int ss, int mm, int hh)
{
	seconds = ss;
	minutes = mm;
	hours = hh;
}
Time::Time(long hhmmss)
{
	hours = int(hhmmss / 10000.0);   // extract the year
	minutes = int((hhmmss - hours * 10000.0) / 100.00); // extract the month
	seconds = int(hhmmss - hours * 10000.0 - minutes * 100.0); // extract the day
}
void Time::showTime()
{
	cout << "The Time is ";
	cout << setfill('0')
		<< setw(2) << hours << ' '
		<< setw(2) << minutes << ' '
		<< setw(2) << seconds; // extract the last 2 year digits
	cout << endl;
	return;
}
int main()
{
	Time a, b(4, 1, 19), c(103515L ); // declare three objects
	a.showTime();           // display object a's values
	b.showTime();           // display object b's values
	c.showTime();           // display object c's values
	system("PAUSE");
	return 0;
}