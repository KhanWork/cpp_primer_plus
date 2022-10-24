#include <iostream>

const int LIMIT = 255;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char input[LIMIT];

    cout << "Enter a string for getline() processint: \r\n";
    cin.getline(input, LIMIT, '#');
    cout << "Here is your input:\r\n";
    cout << input << "\r\nDone with phase 1\r\n";

    char ch;
    cin.get(ch);
    cout << "The next input character is " << ch << endl;

    if(ch != '\n')
        cin.ignore(LIMIT, '\n');

    cout << "Enter a string for get() processing:\r\n";
    cin.get(input, LIMIT, '#');
    cout << "Here is your input: \r\n";
    cout << input << "\r\nDone with phase 2\r\n";

    cin.get(ch);
    cout << "The next input character is " << ch << endl;

    return 0;
}