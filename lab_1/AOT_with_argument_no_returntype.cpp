#include<iostream>
#include<cmath>
using namespace std;
void calculateArea(float a,float b, float c, float s)
{
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of triangle is:"<<area<<endl;
}
int main()
{
    float a,b,c,s;
    cout<<"Enter length of triangle:"<<endl;
    cin>>a;
    cout<<"Enter breadth of triangle:"<<endl;
    cin>>b;
    cout<<"Enter height of triangle"<<endl;
    cin>>c;

    s=(a+b+c)/2;

    calculateArea(a,b,c,s);
    return 0;

}