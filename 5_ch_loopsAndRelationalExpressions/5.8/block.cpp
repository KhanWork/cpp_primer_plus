#include <iostream>

int main()
{
	using namespace std;

	cout << "The Amazing Accounto will sum and average ";
	cout << "five numbers for you." << endl;
	cout << "Please enter five values:" << endl;

	double number;
	double sum = 0.0;

	for(int i = 1; i <= 5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}

	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << endl;
	cout << "The Amazing Accounto bids you adieu!" << endl;

	return 0;
}