#include<iostream>
using namespace std;

class shape
{
    protected:
    int width,height;
public:
shape(int a=0,int b=0)
{
    width=a;
    height=b;
}
void virtual area()
{
cout<<"area of shape"<<endl; 
}
};
class triangle:public shape
{
    public:
    triangle(int a,int b)
    {
        width=a;
        height=b;
    }
  void area()
  {
    cout<<"Area of triangle is:"<<((width*height)/2);
  }
};
class rectangle:public shape
{
    public:
    rectangle(int a,int b)
    {
        width=a;
        height=b;
    }
  void area()
  {
    cout<<"Area of rectangle is:"<<(width*height);
  }
};
int main()
{
    shape *shap;
    shape sh(1,2);
    shap = &sh;
    shap -> area();
     rectangle rec(10,20);
     shap=&rec;
     shap -> area();
     triangle tri(20,30);
     shap=&tri;
     shap -> area();
     return 0;

}