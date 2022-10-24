#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter an integer: ";
    int n;
    cin >> n;

    cout << "n    n*n\r\n";
    cout << n << "    " << n * n << " (decimal)\r\n";
    cout << hex;
    cout << n << "     " ;
    cout << n * n << " (hexadecimal)\r\n";

    cout << oct << n << "    " << n * n << " (octal)\r\n";
    dec(cout);
    cout << n << "    " << n * n << " (decimal)\r\n";

    return 0;
}