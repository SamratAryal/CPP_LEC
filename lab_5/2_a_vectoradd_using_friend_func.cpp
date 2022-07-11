#include<iostream>
using namespace std;
class Vector
{
    private:
    float x,y,z;
    public:
    Vector()
    {
        x = 0;
        y = 0;
        z = 0;
    }

    void getData()
    {
     cout<<"Enter the x component:"<<endl; 
     cin>>x;
     cout<<"Enter the y component:"<<endl; 
     cin>>y;
     cout<<"Enter the z component:"<<endl; 
     cin>>z;
    }
    void showData()
    {
        cout<<x<<"i + "<<y<<"j + "<<z<<"k "<<endl;
    }
    friend Vector operator +(Vector a ,Vector b);
};

Vector operator + (Vector a ,Vector b )
{   
       Vector sum;
       sum.x = a.x + b.x;
       sum.y = a.y + b.y;
       sum.z = a.z + b.z;
       return sum;
}
int main()
{
Vector a,b,c;
a.getData();
b.getData();
c = a + b;
cout<<" The Sum is ";
c.showData();
}