#include <iostream>

class clsMobile  // <---- Abstract Class / Interface / Contract
{
    private:
    virtual void Dial(std::string PhoneNumber) = 0;
    virtual void SendSMS(std::string PhoneNumber, std::string SMS) = 0;
    virtual void TakePicture(void) = 0;
};

class clsiPhone : public clsMobile
{
    public:
    void Dial(std::string PhoneNumber) override
    {
        std::cout << "Call : " << PhoneNumber << std::endl;
    }

    void SendSMS(std::string PhoneNumber, std::string SMS) override
    {
        std::cout << "Send : " << SMS << std::endl;
        std::cout << "To : " << PhoneNumber << std::endl;
    }

    void TakePicture(void) override {}
};

int main(void)
{
    clsiPhone iPad;

    iPad.TakePicture();

    return (0);
}
