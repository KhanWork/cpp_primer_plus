#include <iostream>

const int ArSize = 80;

int main()
{
    using namespace std;
    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text: \r\n";
    cin.get(line, ArSize);
    cout << "Complete line:\r\n" << line << endl;
    cout << "Line through first period: \r\n";

    for(int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];
        if(line[i] == '.')
            break;
        if(line[i] != ' ')
            continue;
        spaces++; 
    }
    cout << "\r\n" << spaces <<" spaces \r\n";
    cout << "Done.\r\n";

    return 0;
}