#include <iostream>

enum{
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    indigo
};

int main()
{
    using namespace std;
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while(code >= red && code <= indigo)
    {
        switch(code)
        {
            case red:
                cout << "Her lips were red." << endl;
                break;
            case orange:
                cout << "Her hair was orange." << endl;
                break;
            case yellow:
                cout << "Her shoes were yellow." << endl;
                break;
            case green:
                cout << "Her nails were green." << endl;
                break;
            case blue:
                cout << "Her sweatsuit was blue." << endl;
                break;
            case violet:
                cout << "Her eyes were violet." << endl;
                break;
            case indigo:
                cout << "Her mood was indigo." << endl;
                break;
        }
        cout << "Enter color code (0-6)";
        cin >> code;
    }

    cout << "Bye" << endl;

    return 0;
}