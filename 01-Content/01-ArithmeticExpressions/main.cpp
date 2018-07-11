#include <iostream>
#include <iomanip> //for std::setprecision
using std::cout;
using std::endl;


int main()
{
	double salary = 32500;
	double twiceMonthly = salary / 24;
	double biWeekly = salary / 26;
	
	cout << std::setprecision(2);
	cout << "Annual salary: \t\t\t$" << std::fixed << salary << endl;
	cout << "When paid twice a month: \t$" << twiceMonthly << endl;
	cout << "When paid bi-weekly: \t\t$" << biWeekly << endl;
	
	return 0;
}
