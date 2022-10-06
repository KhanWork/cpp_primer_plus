#include <iostream>
#include "stock01.h"

Stock::Stock()
{
    std::cout << "Default constructor called" << std::endl;
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called" << std::endl;
    company = co;
    if(n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0." << std::endl;
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    std::cout << "Bye, " << company << "!\r\n";
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted." << std::endl;
    }
    else
        shares += num;
    share_val = price;
    set_tot();
}

void Stock::sell(long num, double price)
{
    if(num < 0)
    {
        std::cout << "Number of shares sold can't be negative. "
                  << "Transaction is aborted." << std::endl;
    }
    else if(num > shares)
    {
        std::cout << "You can't sell more than you have! "
                  << "Transaction is aborted." << std::endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
         << " Shares: " << shares << "\r\n"
         << " Share Price: $" << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << endl;

    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
