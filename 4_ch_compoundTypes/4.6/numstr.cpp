#include <iostream>

int main()
{
	using namespace std;
	cout << "What year was your house built?\r\n";
	int year;
	cin >> year;
	cout << "What is its street address?\r\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\r\n";

	return 0;
}
