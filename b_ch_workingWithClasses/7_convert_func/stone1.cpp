#include <iostream>
#include "stonewt1.h"

int main()
{
    using std::cout;
    using std::endl;

    Stonewt poppins(9, 2.8);
    double p_wt = poppins;
    cout << "Convert to double => " << "Poppins: " << p_wt << " pounds." << endl;
    cout << "Convert to int => " << "Poppins: " << int(poppins) << " pounds." << endl;

    return 0;
}