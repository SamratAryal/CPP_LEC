//ambiguity in member access
#include<iostream>
using namespace std;
class baseOne
{
    public:
    void display()
    {
        cout<<"I am from baseOne.."<<endl;

    }
};
class baseTwo
{
    public:
    void display()
    {
        cout<<"I am from baseTwo"<<endl;
    }
};
class derived : public baseOne,public baseTwo
{
    void drvdisplay()
    {
        display();   //error:ambiguous, which dispaly to call
        baseOne::display();  //ok:base class name is specified
        baseTwo::display();  //ok:base class name is specified 
    }
};
int main()
{
    derived der;
    der.display(); //error:ambiguios,which dispaly to call
    der.baseOne::display(); //display() of baseOne class is called
    der.baseTwo::display();  //display() of baseTwo class is called
    return 0;
}

