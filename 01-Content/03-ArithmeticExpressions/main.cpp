#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	cout << "Enter your home's value: $";
	float value;
	cin >> value;
	
	cout << "Enter the tax rate: $";
	float taxRate;
	cin >> taxRate;
	
	float assessedValue = (value * .6);
	float propertyTax = assessedValue / 100 * taxRate;
	
	cout << setprecision(2);
	cout << "Based on a home's value of $" << std::fixed << value << endl;
	cout << "Your assessed value is $" << assessedValue << endl;
	cout << "Your propery taxes will be $" << propertyTax << endl;
	
	return 0;
}
