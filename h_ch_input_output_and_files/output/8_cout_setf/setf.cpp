#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;

    cout << "Today's water temperature: ";
    cout.setf(ios_base::showpos);   // + sign
    cout << temperature << endl;

    cout << "For our programming friends, that's\r\n";
    cout << std::hex << temperature << endl;
    
    cout.setf(ios_base::uppercase); // 0x -> 0X
    cout.setf(ios_base::showbase);  // 0X prefix
    cout << "or\r\n";
    cout << temperature << endl;

    cout << "How " << true << "! oops -- How ";
    cout.setf(ios_base::boolalpha);
    cout << true << "!\r\n";

    return 0;
}