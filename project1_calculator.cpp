#include <iostream>
#include <string>

class clsCalculator
{
    private:
    std::string _LastOperation;
    double      _LastInput;
    double      _PreviousResult = 0.0;
    double      _FinalResult = 0.0;

    void setFinalResult(double Result)
    {
        setPreviousResult(getFinalResult());
        _FinalResult = Result;
    }

    void setPreviousResult(double Result)
    {
        _PreviousResult = Result;
    }

    void setLastInput(double Input)
    {
        _LastInput = Input;
    }

    void setLastOperation(std::string OperationName)
    {
        if (!OperationName.empty())
            _LastOperation = OperationName;
    }

    std::string getLastOperation(void)
    {
        return (_LastOperation);
    }

    double getLastInput(void)
    {
        return (_LastInput);
    }

    double getPreviousResult(void)
    {
        return (_PreviousResult);
    }

    void incrementResult(double Value)
    {
        setFinalResult(getFinalResult() + Value);
        setLastOperation("adding");
        setLastInput(Value);
    }

    void decrementResult(double Value)
    {
        setFinalResult(getFinalResult() - Value);
        setLastOperation("subtracting");
        setLastInput(Value);
    }

    void multiplyResult(double Value)
    {
        setFinalResult(getFinalResult() * Value);
        setLastOperation("multiplying");
        setLastInput(Value);
    }

    void devideResult(double Value)
    {
        if (Value != 0)
        {
            setFinalResult(getFinalResult() / Value);
            setLastInput(Value);
        }
        else
            setLastInput(1);
        setLastOperation("deviding");
    }

    public:
    double getFinalResult(void)
    {
        return (_FinalResult);
    }

    void Add(double Value)
    {
        incrementResult(Value);
    }

    void Subtract(double Value)
    {
        decrementResult(Value);
    }

    void Multiplay(double Value)
    {
        multiplyResult(Value);
    }

    void Devide(double Value)
    {
        devideResult(Value);
    }

    void CancelLastOperation(void)
    {
        setFinalResult(getPreviousResult());
        setLastOperation("Canceling Last Operation");
    }

    void Clear(void)
    {
        setFinalResult(0);
        setLastOperation("clear");
        setLastInput(0);
    }

    void PrintResult(void)
    {
        std::string LastOperation = getLastOperation();

        if (LastOperation != "Canceling Last Operation")
            std::cout << "Result after "<< getLastOperation() + " " << getLastInput() << " is : " << _FinalResult << std::endl;
        else
            std::cout << LastOperation << std::endl;
    }
};

int main(void)
{
    clsCalculator Calculator;

    Calculator.Add(10);
    Calculator.PrintResult();

    Calculator.Add(100);
    Calculator.PrintResult();

    Calculator.Subtract(20);
    Calculator.PrintResult();

    Calculator.Devide(1);
    Calculator.PrintResult();

    Calculator.Devide(2);
    Calculator.PrintResult();

    Calculator.Multiplay(3);
    Calculator.PrintResult();

    Calculator.CancelLastOperation();
    Calculator.PrintResult();

    Calculator.Clear();
    Calculator.PrintResult();

    return (0);
}
