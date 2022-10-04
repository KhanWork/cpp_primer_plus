#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char ch;
    cout << "Type, and I shall repeat." <<endl;

    cin.get(ch);
    while(ch != '.')
    {
        if(ch == '\n')
            cout << ch;
        else
            cout << ++ch;
        cin.get(ch);
    }

    cout << endl;
    cout << "Please excuse the slight confusion" << endl;

    return 0;
}