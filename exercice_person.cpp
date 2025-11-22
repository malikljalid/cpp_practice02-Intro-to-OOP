#include <iostream>

class clsPerson
{
    private:
    short int   _ID;
    std::string _FirstName;
    std::string _LastName;
    std::string _Email;
    std::string _Phone;

    public:
    clsPerson(short int ID, std::string FirstName, std::string LastName, std::string Email, std::string Phone)
    {
        _ID = ID;
        setFirstName(FirstName);
        setLastName(LastName);
        setEmail(Email);
        setPhone(Phone);
    }

    ~clsPerson(void) {};

    short int getID(void)
    {
        return (_ID);
    }

    std::string getFirstName(void)
    {
        return (_FirstName);
    }

    std::string getLastName(void)
    {
        return (_LastName);
    }

    std::string getFullName(void)
    {
        return (getFirstName() + " " + getLastName());
    }

    std::string getEmail(void)
    {
        return (_Email);
    }

    std::string getPhone(void)
    {
        return (_Phone);
    }

    void setFirstName(std::string FirstName)
    {
        _FirstName = FirstName;
    }

    void setLastName(std::string LastName)
    {
        _LastName = LastName;
    }

    void setEmail(std::string Email)
    {
        _Email = Email;
    }

    void setPhone(std::string Phone)
    {
        _Phone = Phone;
    }

    void print(void)
    {
        std::cout << "--------------------------\n";
        std::cout << "Name  : " << getFullName() << std::endl;
        std::cout << "ID    : " << getID() << std::endl;
        std::cout << "Email : " << getEmail() << std::endl;
        std::cout << "Phone : " << getPhone() << std::endl;
        std::cout << "--------------------------\n";
    }

    void sendEmail(std::string Subject, std::string Body)
    {
        std::cout << "The following message below sent successfully to email : " << getEmail() << std::endl;
        std::cout << "Subject : " << Subject << std::endl;
        std::cout << "Body    : " << Body << std::endl;
    }

    void sendSMS(std::string SMS)
    {
        std::cout << "The following SMS below sent successfully to phone : " << getPhone() << std::endl;
        std::cout << "SMS : " << SMS << std::endl;
    }
};

int main(void)
{
    clsPerson Zakaria(13, "Zakaria", "Adriouche", "zacharia@gmail.com", "+2120011339");

    Zakaria.print();

    Zakaria.sendEmail("Birthday Request", "Happy Birthday Zakaria");
    Zakaria.sendSMS("Hello Mr. Zakaria");

    return (0);
}
