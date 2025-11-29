#pragma once
#include <iostream>

class clsString
{
    private:
    std::string _Value;


    private:
    bool wordFound(std::string str, int &i)
    {
        int     end     = str.length();
        bool    found   = false;
    
        while (str[i] == ' ' && i != end)
            i++;

        if (str[i] != ' ' && i != end)
            found = true;

        while (str[i] != ' ' && i != end)
            i++;

        return (found);
    }

    public:
    clsString(void)
    {
        _Value = "";
    }

    clsString(std::string str)
    {
        setValue(str);
    }

    void setValue(std::string Value)
    {
        _Value = Value;
    }

    std::string getValue(void)
    {
        return (_Value);
    }

    int countWord(void)
    {
        int count = 0;

        for (int i = 0; i < (int)_Value.length(); i++)
        {
            if (wordFound(_Value, i))
                count++;
        }

        return (count);
    }

    static int countWord(std::string str)
    {
        return (clsString(str).countWord());
    }
};
