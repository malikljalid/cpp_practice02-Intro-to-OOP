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
    clsPerson(void)
    {
        _ID = -1;
        _FirstName = "No First Name";
        _LastName = "No Last Name";
        _Email = "No Email";
        _Phone = "No Phone";
    };

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

class clsEmployee : public clsPerson
{
    private:
    std::string _Title;
    std::string _Departement;
    int         _Salary;

    public:
    clsEmployee(void)
    {
        _Title = "No Title";
        _Departement = "No Departement";
        _Salary = 0;
    }

    clsEmployee(short int ID, std::string FirstName, std::string LastName, std::string Email, std::string Phone, std::string Title, std::string Departement, int Salary) : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Departement = Departement;
        _Salary = Salary;
    }

    std::string getTitle(void)
    {
        return (_Title);
    }

    std::string getDepartement(void)
    {
        return (_Departement);
    }

    int getSalary(void)
    {
        return (_Salary);
    }

    void setTitle(std::string Title)
    {
        _Title = Title;
    }

    void setDepartement(std::string Departement)
    {
        _Departement = Departement;
    }

    void setSalary(int Salary)
    {
        _Salary = Salary;
    }

    // void print(void)
    // {
    //     clsPerson::print();
    //     std::cout << "Title       : " << _Title << std::endl;
    //     std::cout << "Depratement : " << _Departement << std::endl;
    //     std::cout << "Salary      : " << _Salary << std::endl;
    //     std::cout << "--------------------------\n";
    // }

    void print(void) // or you can do it this way.. but pay attention to use methods instead of private base class members direclty!
    {
        std::cout << "--------------------------\n";
        std::cout << "Name        : " << getFullName() << std::endl;
        std::cout << "ID          : " << getID() << std::endl;
        std::cout << "Email       : " << getEmail() << std::endl;
        std::cout << "Phone       : " << getPhone() << std::endl;
        std::cout << "Title       : " << _Title << std::endl;
        std::cout << "Depratement : " << _Departement << std::endl;
        std::cout << "Salary      : " << _Salary << std::endl;
        std::cout << "--------------------------\n";
    }
};

int main(void)
{
    clsEmployee Zakaria(42, "Zakaria", "The Magician", "zakaria@magician.com", "+21261113909", "Software Engineer", "IT", 7000);

    Zakaria.print(); 
    Zakaria.sendEmail("Birthday Request", "Happy Birthday Zakaria");
    Zakaria.sendSMS("Hello Mr. Zakaria");

    return (0);
}
