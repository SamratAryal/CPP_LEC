//program in c++ to compute area of triangle with arguments and with return type
#include<iostream>
#include<cmath>
using namespace std;
float calculateArea(float a, float b , float c,float s)
{
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main()
{
    float a,b,c,s,area;
    cout<<"Enter length of triangle:"<<endl;
    cin>>a;
    cout<<"Enter breadth of triangle:"<<endl;
    cin>>b;
    cout<<"Enter height of triangle:"<<endl;
    cin>>c;
    s=(a+b+c)/2;
    cout<<"The area of triangle is:"<<calculateArea(a,b,c,s)<<endl;
    return 0;
}