#include <iostream>
using namespace std;

int main()
{
	cout << "Enter score for test 1: ";
	float test1;
	cin >> test1;
	
	cout << "Enter score for test 2: ";
	float test2;
	cin >> test2;
	
	cout << "Enter score for test 3: ";
	float test3;
	cin >> test3;
	
	cout << "Enter score for test 4: ";
	float test4;
	cin >> test4;
	
	cout << "Enter score for test 5: ";
	float test5;
	cin >> test5;
	
	float avg = (test1 + test2 + test3 + test4 + test5) / 5;
	
	cout << "Test score average is: " << avg << endl;
	
	return 0;
}
