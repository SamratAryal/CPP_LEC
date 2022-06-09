#include<iostream>
#include<cmath>
using namespace std;

void calculateArea()
{
    float a,b,c,s,area;
    cout<<"Enter length of triangle:"<<endl;
    cin>>a;
    cout<<"Enter breadth of triangle:"<<endl;
    cin>>b;
    cout<<"Enter height of triangle:"<<endl;
    cin>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is:"<<area<<endl;

}
int main()
{
    calculateArea();
}