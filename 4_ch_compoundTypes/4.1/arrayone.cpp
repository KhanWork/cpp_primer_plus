#include <iostream>

int main()
{
	using namespace std;
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamcosts[3] = {20, 30, 5};

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\r\n";
	
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total += yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\r\n";

	cout << "\r\nSize of yams array = " << sizeof yams;
	cout << " bytes.\r\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\r\n";

	return 0;
}
