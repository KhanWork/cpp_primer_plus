#include <iostream>

int main()
{
	using namespace std;

	int n;

	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite numnber" << endl;

	do{
		cin >> n;
	}while(n != 7);

	cout << "Yes, 7 is my favorite." << endl;

	return 0;
}
