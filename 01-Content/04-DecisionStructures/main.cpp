#include <iostream>;

using namespace std;

int main()
{
	
	cout << "Enter the number of units sold: ";
	float unitNumber;
	cin >> unitNumber;
	
	cout << "Enter the price per unit: $";
	float unitPrice;
	cin >> unitPrice;

	float discount;

	if (unitNumber >= 100)
		discount = .5;
	else if (unitNumber >= 70)
		discount = .4;
	else if (unitNumber >= 50)
		discount = .35;
	else if (unitNumber >= 20)
		discount = .3;
	else if (unitNumber >= 10)
		discount = .2;
	else discount = 0;
	
	float grossPrice = unitNumber * unitPrice;
	float discountPrice = grossPrice * discount;
	float netPrice = grossPrice - discountPrice;
	
	cout << "Number of units purchased is: " << unitNumber << endl;
	cout << "Discount applied is: " << discount * 100 << "%" << endl;
	cout << "Total savings due to discount is: $" << discountPrice << endl;
	cout << "The total cost of the purchase is: $" << netPrice << endl;
	
	return 0;
}
