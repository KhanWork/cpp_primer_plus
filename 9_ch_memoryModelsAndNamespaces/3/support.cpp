#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;
using std::endl;

void update(double dt)
{
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees." << endl;
}

void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees." << endl;
    cout << "But global warming = " << ::warming << " degrees." << endl;
    /* ::warming global variable */
}