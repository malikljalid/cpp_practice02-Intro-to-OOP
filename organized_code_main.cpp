#include "organized_code_employee.hpp"

int main(void)
{
    clsEmployee Zakaria(42, "Zakaria", "The Magician", "zakaria@magician.com", "+21261113909", "Software Engineer", "IT", 7000);

    Zakaria.print(); 
    Zakaria.sendEmail("Birthday Request", "Happy Birthday Zakaria");
    Zakaria.sendSMS("Hello Mr. Zakaria");

    return (0);
}
