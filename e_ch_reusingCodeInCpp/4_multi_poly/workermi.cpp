#include <iostream>
#include "workermi.h"

using std::cout;
using std::endl;
using std::cin;

Worker::~Worker() {}

void Worker::Data() const
{
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}

void Worker::Get()
{
    getline(cin, fullname);
    cout << "Enter worker's ID: ";
    cin >> id;
    while(cin.get() != '\n')
        continue;
}

void Waiter::Data() const
{
    cout << "Panache rating: " << panache << endl;
}

void Waiter::Get()
{
    cout << "Enter waiter's panache rating: ";
    cin >> panache;
    while(cin.get() != '\n')
        continue;
}

void Waiter::Set()
{
    cout << "Enter waiter's name: ";
    Worker::Get();
    Get();
}

void Waiter::Show() const
{
    cout << "Category: waiter\r\n";
    Worker::Data();
    Data();
}

char *Singer::pv[Singer::Vtypes] = {
    (char *)"other", (char *)"alto", (char *)"contralto",
    (char *)"soprano", (char *)"bass", (char *)"baritone", (char *)"tenor"};

void Singer::Data() const
{
    cout << "Vocal range: " << pv[voice] << endl;
}

void Singer::Get()
{
    cout << "Enter number for singer's vocal range: \r\n";
    int i;
    for(i = 0; i < Vtypes; i++)
    {
        cout << i << ": " << pv[i] << "   ";
        if(i % 4 == 3)
            cout << endl;
    }
    if(i % 4 != 0)
        cout << "\r\n";
    cin >> voice;

    while(cin.get() != '\n')
        continue;
}

void Singer::Set()
{
    cout << "Enter singer's name: ";
    Worker::Get();
    Get();
}

void Singer::Show() const
{
    cout << "Category: singer\r\n";
    Worker::Data();
    Data();
}

void SingingWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get()
{
    Waiter::Get();
    Waiter::Get();
}

void SingingWaiter::Set()
{
    cout << "Enter singing waiter's name";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const
{
    cout << "Category: singsing waiter\r\n";
    Worker::Data();
    Data();
}


