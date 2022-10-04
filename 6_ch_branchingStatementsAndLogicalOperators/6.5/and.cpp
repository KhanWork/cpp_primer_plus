#include <iostream>

const int ArSize = 6;

int main()
{
    using namespace std;

    float naaq[ArSize];

    cout << "Enter the NAAQs (New Age Awareness Quotients) "
    << "of\r\nyour neighbors. Program terminates "
    << "when you make\r\n" << ArSize << " entries "
    << "or enter a negative value.\r\n";

    int i = 0;

    float temp;

    cout << "First value: ";
    cin >> temp;

    while(i < ArSize && temp >= 0)
    {
        naaq[i] = temp;
        ++i;
        if(i < ArSize)
        {
            cout << "Next value: ";
            cin >> temp;
        }
        if(i == 0)
            cout << "No data--byte" << endl;
        else
        {
            cout << "Enter your NAAQ: ";
            float you;
            cin >> you;

            int count = 0;
            for(int j = 0; j < i; j++)
                if(naaq[j] > you)
                    ++count;
            cout << count;
            cout << "of your neighbors have greater awareness of\r\n"
            << "the New Age than you do." << endl;
        }
    }

    return 0;
}