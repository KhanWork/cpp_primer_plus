#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    using namespace std;

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
            cout << saying[i] << endl;

        String *shortest = &saying[0];
        String *first = &saying[0];
        for(i = 1; i < total; i++)
        {
            if(saying[i].length() < shortest->length())
                shortest = &saying[i];
            if(saying[i] < *first)
                first = &saying[i];
        }

        cout << "Shortest saying: \r\n" << *shortest << endl;
        cout << "First alphabetically:\r\n" << *first << endl;
        srand(time(0));
        int choice = rand() % total;
        String *favorite = new String(saying[choice]);
        cout << "My favorite saying: \r\n" << *favorite << endl;
        delete favorite;
    }
    else
        cout << "No input! Bye.\r\n";

    return 0;
}