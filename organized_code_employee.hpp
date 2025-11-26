#pragma once

#include "organized_code_person.hpp"

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

    void print(void)
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
