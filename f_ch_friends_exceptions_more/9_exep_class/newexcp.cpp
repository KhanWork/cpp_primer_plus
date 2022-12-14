#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big
{
    double stuff[2000000];
};

int main()
{
    Big *pb;
    try{
        cout << "Trying to get a big block of memory: \r\n";
        pb = new Big[10000];
        cout << "Got past the new request:\r\n";
    }
    catch(bad_alloc & ba)
    {
        cout << "Caught the exception!\r\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Memory successly allocated\r\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete [] pb;
    return 0;
}