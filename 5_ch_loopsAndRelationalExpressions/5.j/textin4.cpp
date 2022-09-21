#include <iostream>

int main(void)
{
	using namespace std;

	int ch;
	int count = 0;

	while((ch = cin.get()) != '#')
	{
		cout.put(char(ch));
		++count;
	}

	cout << endl << count << " characters read" << endl;

	return 0;
}
