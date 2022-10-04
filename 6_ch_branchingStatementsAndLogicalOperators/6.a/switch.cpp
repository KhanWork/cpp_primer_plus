#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void showmenu()
{
    cout << "Please enter 1, 2, 3, 4, or 5:\r\n"
            "1) alarm       2) report \r\n"
            "3) alibi       4) comfort\r\n"
            "5) quit\r\n";
}

void report()
{
    cout << "It's been an excellent week for business.\r\n"
            "Sales are up 120%. Expenses are down 35%.\r\n";
}

void comfort()
{
    cout << "Your employees thinks you are the finest CEO\r\n"
            "in the industry. The board of directors think\r\n"
            "you are the finest CEO in the industry.\r\n";
}

int main()
{
    showmenu();

    int choice;
    cin >> choice;
    while(choice != 5)
    {
        switch (choice)
        {
        case 1:
            cout << "\a\n";
            break;
        case 2:
            report();
            break;
        case 3:
            cout << "The boss was in all day.\r\n";
            break;
        case 4:
            comfort();
            break;
        default:
            cout << "That's not a choice.\r\n";
            break;
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\r\n";

    return 0;
}