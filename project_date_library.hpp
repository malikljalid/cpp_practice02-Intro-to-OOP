#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>

struct stDate
{
    short int Day;
    short int Month;
    short int Year;
};

stDate initDate(short int Day, short int Month, short int Year)
{
    stDate Date;

    Date.Day    =   Day;
    Date.Month  =   Month;
    Date.Year   =   Year;

    return (Date);
}

short int last2DigitsOf(int Number)
{
    return (Number % 100);
}

short int first2DigitsOf(int Number)
{
    return (Number / 100);
}

short int zeller_formula(short int Day, short int Month, short int Year)
{
    if (Month < 3)
    {
        Month += 12;
        Year  -= 1;
    }

    return ((Day + (int)std::floor(13 * (Month + 1) / (double)5) + last2DigitsOf(Year) + (int)std::floor(last2DigitsOf(Year) / (double)4) + (int)std::floor(first2DigitsOf(Year) / (double)4) + 5 * first2DigitsOf(Year)) % 7);
}

short int zeller_to_sakamoto(short int zeller)
{
    if (zeller > 0)
        return (zeller - 1);
    return (6);
}

void printDayOfWeek(short int Day, short int Month, short int Year)
{
    std::string week[7] = { "Saturday", "Sunday", "Monday", "Thuesday", "Wedensday", "Thursday", "Friday" };

    std::cout << "it's " << week[zeller_formula(Day, Month, Year)] << " Baby !" << std::endl;
}

bool leapYear(short int year)
{
    return ((year % 4 == 0) ? ((year % 100 == 0) ? ((year % 400 == 0) ? true : false ) : true) : false);
}

short int getMonthDays(short int Month, short int Year)
{
    short int listOfDays[13] = { 0, 31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return ((Month == 2) ? (leapYear(Year) ? 29 : 28) : listOfDays[Month]); 
}



class clsDate
{
    private:
    stDate          _Date;
    std::string     _DateString;

    private:
    void printDayOfWeek(void)
    {
        std::string week[7] = { "Saturday", "Sunday", "Monday", "Thuesday", "Wedensday", "Thursday", "Friday" };

        std::cout << "it's " << week[zeller_formula(_Date.Day, _Date.Month, _Date.Year)] << " Baby !" << std::endl;
    }

    bool leapYear(void)
    {
        return ((_Date.Year % 4 == 0) ? ((_Date.Year % 100 == 0) ? ((_Date.Year % 400 == 0) ? true : false ) : true) : false);
    }

    short int getMonthDays(void)
    {
        short int listOfDays[13] = { 0, 31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        return ((_Date.Month == 2) ? (leapYear() ? 29 : 28) : listOfDays[_Date.Month]); 
    }

    public:
    clsDate(void)
    {
        _Date = initDate(0, 0, 0);
        _DateString = "";
    }

    clsDate(short int Day, short int Month, short int Year)
    {
        _Date = initDate(Day, Month, Year);
        _DateString = dateToString(_Date);
    }

    clsDate(std::string DateString)
    {
        _Date = stringToDate(DateString);
        _DateString = DateString;
    }

    void setDate(short int Day, short int Month, short int Year)
    {
        _Date = initDate(Day, Month, Year);
    }

    stDate getDate(void)
    {
        return (_Date);
    }

    void setDateString(std::string DateString)
    {
        _DateString = DateString;
    }

    std::string getDateString(void)
    {
        return (_DateString);
    }

    void showCalendar()
    {
        std::string _m[13] = { "", "Jan", "Feb", "Mar", "Apr", "Mai", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

        short int firstDay = zeller_to_sakamoto(zeller_formula(1, _Date.Month, _Date.Year));
        short int lastDay  = getMonthDays();

        std::cout << "   _____________ " << _m[_Date.Month] << " _______________\n\n";
        std::cout << "   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

        for (int i = 0; i < firstDay; i++)
            printf("     ");
        for (int i = firstDay, j = 1; j <= lastDay; j++)
        {
            printf("%5d", j);
            if (++i == 7)
            {
                i = 0;
                printf("\n");
            }
        }

        std::cout << "\n   _________________________________\n";
    }

    static std::string dateToString(stDate Date)
    {
        std::string strDate = "";

        strDate += std::to_string(Date.Day) + "/";
        strDate += std::to_string(Date.Month) + "/";
        strDate += std::to_string(Date.Year);

        return (strDate);
    }

    static stDate stringToDate(std::string strDate)
    {
        short  int  i = 0;
        stDate      Date;

        i           = strDate.find("/", 0);
        Date.Day    = std::stoi(strDate.substr(0, i));
        strDate     = strDate.substr(i + 1);

        i           = strDate.find("/", 0);
        Date.Month  = std::stoi(strDate.substr(0, i));
        strDate     = strDate.substr(i + 1);

        i           = strDate.find("/", 0);
        Date.Year   = std::stoi(strDate.substr(0, i));
        strDate     = strDate.substr(i + 1);

        return (Date);
    }
};
