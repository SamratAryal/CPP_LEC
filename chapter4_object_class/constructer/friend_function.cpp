//friend function can access private data of a class
//we declare friend function using friend keyword inside body of a class
//syntax - friend returtype functionNames(arguments)

#include<iostream>
using namespace std;

class Distance
{
friend int add(Distance);
    private:
    int meter;

    public:
  Distance()
  {
    meter = 0;  
  }

};

//friend function defination
int add(Distance d)
{
    d.meter = d.meter+5;
    return d.meter;

}
int main()
{
    Distance dist;
    int meter=add(dist);
    cout<<"Distance:"<<meter<<endl;
     return 0;
}
