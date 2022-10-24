#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    float price1 = 20.40;
    float price2 = 1.9 + 8.0 / 9.0;

    cout.setf(ios_base::showpoint);
    cout << "\"Furry Friends\" is $" << price1 << endl;
    cout << "\"Fiery Friends\" is $" << price2 << endl;

    cout.precision(2);
    cout << "\"Furry Friends\" is $" << price1 << endl;
    cout << "\"Fiery Friends\" is $" << price2 << endl;

    return 0;
}