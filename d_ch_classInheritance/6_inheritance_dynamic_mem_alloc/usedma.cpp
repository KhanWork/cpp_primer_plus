#include <iostream>
#include "dma.h"

int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);

    cout << "Displaying baseDMA object: " << endl;
    cout << shirt << endl;
    cout << "Displaying lacksDMA object: " << endl;
    cout << balloon << endl;
    cout << "Displaying hasDMA object: " << endl;
    cout << map << endl;

    lacksDMA balloon2(balloon);
    cout << "Result of lacksDMA copy: " << endl;
    cout << balloon2 << endl;

    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment: " << endl;
    cout << map2 << endl;

    return 0;
}