#include <iostream>
int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main()
{
    using namespace std;
    cout << "main() reports the following address:\r\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harray" <<endl;
    cout << "\r\n" << endl;
    
    remote_access();

    return 0;
}