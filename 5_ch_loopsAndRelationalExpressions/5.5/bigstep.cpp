#include <iostream>

int main()
{
	using namespace std;

	cout << "Enter an integet: ";
	int by;
	cin >> by;
	cout << "Counting by " << by << "s:\r\n";
	for(int i = 0; i < 100; i += by)
		cout << i << endl;

	return 0;
}
