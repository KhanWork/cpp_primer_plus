#include <iostream>

const int Max = 5;

int main()
{
    using namespace std;
    double fish[Max];
    cout << "Please enter the weights of your fish.\r\n";
    cout << "You may enter up to " << Max << " fish <q to terminate>.\r\n";
    cout << "fish #1: ";
    int i = 0;
    while(i < Max && cin >> fish[i])
    {
        if(++i < Max)
            cout << "fish #" << i + 1 << ": ";
    }
    double total = 0.0;
    for(int j = 0; j < i; j++)
        total += fish[j];
    
    if(i == 0)
        cout << "No fish\r\n";
    else
        cout << total/i << " = average weight of " << i << " fish\r\n";

    cout << "Done.\r\n";

    return 0;
}