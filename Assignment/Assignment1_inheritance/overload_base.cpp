#include<iostream>
using namespace std;
class base
{
  public:
  void display(char c)
  {
    cout<<"display() in Base with char argument:"<<endl;

  }
  void displayl(int i)
  {
    cout<<"display() in Base with int argument"<<endl;
  }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"display() in Derived without argument"<<endl;
    }
};
int main()
{
    derived d1;
    d1.display();  //call derived class display without arguments
    d1.display('a'); //error: function will be hidden after overriding
    d1.display(5);  //error: function will be hidden after overriding
    d1.base::display('a'); //calls base class display() with char argument
    d1.base::display(5);  //calls base class display with int argument
     return 0;

}