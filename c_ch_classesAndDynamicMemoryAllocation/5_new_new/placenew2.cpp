#include <iostream>
#include <string>
#include <new>

using namespace std;
const int BUF = 512;

class JustTesting{
    private:
        string words;
        int number;
    public:
        JustTesting(const string & s = "Just Testing", int n = 0)
        {
            words = s;
            number = n;
            cout << words << " constructed\r\n";
        }
        ~JustTesting()
        {
            cout << words << " destroyed\r\n";
        }
        void Show() const
        {
            cout << words << ", " << number << endl;
        }
};

int main()
{
    char *buffer = new char[BUF];

    JustTesting *pc1, *pc2;
    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);

    cout << "Memory block address:\r\n" << "buffer: "
    << (void *)buffer << " heap: " << pc2 << endl;

    cout << "Memory contents:\r\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    cout << "--------------------" << endl;

    JustTesting *pc3, *pc4;
    pc3 = new (buffer + sizeof(JustTesting)) JustTesting("Better Idea", 6);
    pc4 = new JustTesting("Heap2", 10);

    cout << "Memory contents: " << endl;
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;
    delete pc4;
    delete [] buffer;
    
    cout << "Done" << endl;

    return 0;
}
