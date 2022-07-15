#include<iostream>
using namespace std;
template<class T>
class calculator
{
    private:
    T num1,num2;
    public:
    calculator(T n1, T n2)
    {
        num1=n1;
        num2=n2;
    }
    T add()
    {
        return (num1+num2);
        }

    T sutract()
    {
       return (num1-num2); 
    }
    T multiply()
    {
        return (num1*num2);
    }
    T divide()
    {
        return (num1/num2);
    }

    void displayResult()
    {
        cout<<"Numbers are:"<<num1<<"and"<<num2<<"."<<endl;
        cout<<"Addition is:"<<add()<<endl;
        cout<<"subtaction is:"<<subtract()<<endl;
        cout<<"product is:"<<multipy()<<endl;
        cout<<"diviion is:"<<divide()<<endl;
    }
};
int main()
{
    calculator<int> intCalc(2,1);
    calculator<float> floatCalc(2.4,1.2);
    cout<<"Int results:"<<endl;
    intCalc.displayResult();
    cout<<"float results:"<<endl;
    floatCalc.displayResult();
    return 0;
}