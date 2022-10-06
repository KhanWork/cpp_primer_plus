#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co, long n, double pr)
{
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
    std::cout << "Company: " << company
              << " Shares: " << shares << "\r\n"
              << " Share Price: $" << share_val << "\r\n"
              << " Total Worth: $" << total_val << "\r\n";
}
