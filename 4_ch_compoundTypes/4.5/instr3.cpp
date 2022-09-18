#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\r\n";
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert:\r\n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\r\n";

	return 0;
}
