#include <iostream>
#include <cstdlib>

double hmean(double a, double b);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    double x, y, z;
    cout << "Enter two numbers: ";
    while(cin >> x >> y)
    {
        z = hmean(x, y);
        cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
        cout << "Enter next set of numbers <q to quit>: ";
    }

    cout << "Bye!" << endl;

    return 0;
}

double hmean(double a, double b)
{
    using std::cout;
    using std::endl;
    if(a == -b)
    {
        cout << "untenable arguments to hmean()" << endl;
        std::abort();
    }

    return 2.0 * a * b /(a + b);
}