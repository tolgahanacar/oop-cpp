#include <iostream>
#include <string>
// using namespace std;
class User
{
private:
    std::string name;
    std::string lastName;
    int age = 21;
    int64_t idNumber;

public:
    User()
    {
        std::cout << "The constructor method has been processed.\n";
    }
    void setFullName(std::string set_name, std::string set_lastName)
    {
        name = set_name;
        lastName = set_lastName;
    }
    void getFullName()
    {
        std::cout << name + " " + lastName + "\n";
    }

    ~User()
    {
        std::cout << "The destructor method has been processed.";
    }
};

int main()
{
    User Users; // ClassName ObjectName
    Users.setFullName("Tolgahan", "Acar");
    Users.getFullName();
}
