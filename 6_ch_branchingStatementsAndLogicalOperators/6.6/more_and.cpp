#include <iostream>

const char *qualify[4]{
    "10,000-meter race.\r\n",
    "mud tug-of-war.\r\n",
    "masters conoe jousting.\r\n",
    "pie-throwing festival.\r\n"
};

int main()
{
    using namespace std;
    int age;

    cout << "Enter your age in years: ";
    cin >> age;

    int index;

    if(age > 17 && age < 35)
        index = 0;
    else if(age >= 35 && age < 50)
        index = 1;
    else if(age >= 50 && age < 65)
        index = 2;
    else
        index = 3;
    
    cout << "You qualify for the " << qualify[index];

    return 0;
}