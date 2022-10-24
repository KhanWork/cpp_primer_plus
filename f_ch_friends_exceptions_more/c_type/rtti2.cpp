#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

class Graud{
    private:
        int hold;
    public:
        Graud(int h = 0) : hold(h) {}
        virtual void Speak() const { cout << "I am a grand class!\r\n"; }
        virtual int Value() const { return hold; }
};

class Superb : public Graud{
    public:
        Superb(int h = 0) : Graud(h) {}
        void Speak() const { cout << " I am a superb class!\r\n"; }
        virtual void Say() const { cout << "I hold the superb value of " << Value() << "!\r\n"; }
};

class Magnificent : public Superb{
    private:
        char ch;
    public:
        Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
        void Speak() const { cout << "I am a magnificent class!!!\r\n"; }
        void Say() const { cout << "I hold the character " << ch << " and the integer " << Value() << "!\r\n"; }
};

Graud *GetOne();

int main()
{
    srand(time(0));
    Graud * pg;
    Superb *ps;
    for(int i = 0; i < 5; i++)
    {
        pg = GetOne();
        cout << "Now processing type " << typeid(*pg).name() << ".\r\n";
        pg->Speak();
        if(ps = dynamic_cast<Superb *>(pg))
            ps->Say();
        cout << "------------------------" << endl;
        if(typeid(Magnificent) == typeid(*pg))
            cout << "Yes, you're really magnificent.\r\n";
    }

    return 0;
}

Graud *GetOne()
{
    Graud *p;
    switch(std::rand() % 3)
    {
        case 0:
            p = new Graud(std::rand() % 100);
            break;
        case 1:
            p = new Superb(std::rand() % 100);
            break;
        case 2:
            p = new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
            break;
    }

    return p;
}