#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    cout << "12345678901234567890\r\n";
    char ch = 'K';
    int t = 273;
    cout << ch << ":\r\n";
    cout << t << ":\r\n";
    cout << -t << ":\r\n";

    double f1 = 1.200;
    cout << f1 << ":\r\n";
    cout << (f1 + 1.0/9.0) << ":\r\n";

    double f2 = 1.67E2;
    cout << f2 << ":\r\n";
    f2 += 1.0/9.0;
    cout << f2 << ":\r\n";
    cout << (f2*1.0e4) << ":\r\n";

    double f3 = 2.3e-4;
    cout << f3 << ":\r\n";
    cout << f3/10 << ":\r\n";

    return 0;
}