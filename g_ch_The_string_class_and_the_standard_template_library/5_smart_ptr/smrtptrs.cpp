#include <iostream>
#include <string>
#include <memory>

class Report{
    private:
        std::string str;
    public:
        Report(const std::string s) : str(s) {std::cout << "Object created!\r\n";}
        ~Report() {std::cout << "Object deleted!\r\n";}
        void comment() const {std::cout << str << "\r\n";}
};

int main()
{
    {
        std::auto_ptr<Report> ps(new Report("using auto_ptr"));
        ps->comment();
    }

    {
        std::shared_ptr<Report> ps(new Report("using shared_ptr"));
        ps->comment();
    }

    {
        std::unique_ptr<Report> ps(new Report("using unique_ptr"));
        ps->comment();
    }

    return 0;
}