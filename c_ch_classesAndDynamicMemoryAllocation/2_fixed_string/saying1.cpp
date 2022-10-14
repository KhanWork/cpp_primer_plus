#include <iostream>
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

void callval(String sval);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    String name;

    cout << "Hi, what's your name?\r\n>> ";
    cin >> name;
    
    cout << name << ", Please enter up to " << ArSize << " short sayings <empty line to quit>:" << endl;

    String saying[ArSize];
    char temp[MaxLen];
    int i;
    for(i = 0; i < ArSize; i++)
    {
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        while(cin && cin.get() != '\n')
            continue;
        if(!cin || temp[0] == '\0')
            break;
        else
            saying[i] = temp;
    }
    int total = i;
    if(total > 0)
    {
        cout << "Here are your saying: " << endl;
        for(i = 0; i < total; i++)
            cout << saying[i][0] << ": " << saying[i] << endl;
        int shortest = 0;
        int first = 0;
        for(i = 1; i < total; i++)
        {
            if(saying[i].length() < saying[shortest].length())
                shortest = i;
            if(saying[i] < saying[first])
                first = i;
        }

        cout << "Shortest saying: \r\n" << saying[shortest] << endl;
        cout << "First alphabetically:\r\n" << saying[first] << endl;
        cout << "This program used " << String::HowMany() << " String objects. Bye." << endl;
    }
    else
        cout << "No input! Bye.\r\n";
    
    callval(saying[2]);
    cout << "--- " << saying[2] << " ---" << endl;

    return 0;
}

void callval(String sval)
{
    using std::cout;
    using std::endl;
    cout << "*** " << sval << " ***" << endl;
}