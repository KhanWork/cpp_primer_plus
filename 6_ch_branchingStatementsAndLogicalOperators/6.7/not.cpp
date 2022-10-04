#include <iostream>
#include <climits>

bool is_int(double x)
{
    return ((x <= INT_MAX && x >= INT_MIN) ? true : false);
}

int main()
{
    using namespace std;
    double num;

    cout << "Yo, dude! Enter an integer value: ",
    cin >> num;

    while(!is_int(num))
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int(num);
    cout << "You've entered the integer " << val << "\r\nBye\r\n";

    return 0;
}