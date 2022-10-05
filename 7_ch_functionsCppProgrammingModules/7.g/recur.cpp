#include <iostream>

void countdown(int n)
{
    using namespace std;
    cout << "Counting down ... " << n << endl;
    if(n > 0)
        countdown(n - 1);
    
    cout << n << ": Kaboom!" << endl;
}

int main()
{
    countdown(4);

    return 0;
}
