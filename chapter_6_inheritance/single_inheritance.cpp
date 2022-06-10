#include<iostream>

using namespace std;

class animal
{
    public:
    void eat()
    {
        cout<<"Eating...";

    } 
};
class dog : public animal
{
  public:
  void bark()
  {
      cout<<"Barking..."<<endl;
  }
};
int main()
{
 dog d1;
 d1.eat();
d1.bark();
}