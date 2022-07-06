#include<iostream>
using namespace std;

class complex
{
    private:
    float real,img;

    public:
    void input()
    {
        cout<<"Enter real values:"<<endl;
        cin>>real;
        cout<<"Enterimaginary  values:"<<endl;
        cin>>img;
    }
    void showValue()
    {
      int i;
        cout<<"("<<real<<","<<img<<"i)";
    }
    
    void add(complex c1,complex c2)
    {
       real=c1.real+c2.real;
       img=c1.img+c2.img;
    }
};
int main()
{
    complex c1,c2,c3;
    cout<<"Enter first complex number:"<<endl;
    c1.input();
    cout<<"Enter second complex number:"<<endl;
    c2.input();
    c3.add(c1,c2);
    c3.showValue();
    return 0;
}