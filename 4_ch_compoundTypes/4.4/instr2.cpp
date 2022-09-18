#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\r\n";
	cin.getline(name, ArSize);	//reads through newline
	cout << "Enter your favorite dessert:\r\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\r\n";

	return 0;
}
