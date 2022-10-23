#include <iostream>
#include <string>
#include <vector>

struct Review{
    std::string title;
    int rating;
};

bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main()
{
    using namespace std;

    vector<Review> books;

    Review temp;
    while(FillReview(temp))
        books.push_back(temp);
    int num = books.size();
    if(num > 0)
    {
        cout << "Thank you. You entered the following: \r\n"
             << "Rating\tBook\r\n";
        for(int i = 0; i < num; i++)
            ShowReview(books[i]);
        cout << "Reprising:\r\n"
             << "Rating\tBook\r\n";

        vector<Review>::iterator pr;
        for(pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
        vector<Review> oldlist(books);
        if(num > 3)
        {
            books.erase(books.begin() + 1, books.begin() + 3);
            cout << "After erasure: \r\n";
            for(pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
            books.insert(books.begin(), oldlist.begin() + 1, oldlist.begin() + 2);
            cout << "After insertion: \r\n";
            for(pr = books.begin(); pr != books.end(); pr++)
                ShowReview(*pr);
        }
        books.swap(oldlist);
        cout << "Swapping oldlist with books: \r\n";
        for(pr = books.begin(); pr != books.end(); pr++)
            ShowReview(*pr);
    }
    else
        cout << "Nothing entered, nothing gained.\r\n";
    
    return 0;
}

bool FillReview(Review &rr)
{
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin, rr.title);
    if (rr.title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if (!std::cin)
        return false;

    while (std::cin.get() != '\n')
        continue;
    return true;
}
void ShowReview(const Review &rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}