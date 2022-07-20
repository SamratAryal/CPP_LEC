#include<iostream>

using namespace std;

//declare a class
class wall
{
private:
    /* data */
    double length;
    double height;
public:
//create prameterized constructor
wall(double len, double high)
{
    length = len;
    height = high;
}
//copy constructor with wall object as parameter
//syntax to create copy constructor - classname(classname &ojectname)
wall(wall &obj) 
{
    length =  obj.length;
    height = obj.height;
}
double calculateArea()
{
    return length*height;
} 
};

int main()
{
    wall w1(20,30);
    
    cout<<"The area is: "<<w1.calculateArea()<<endl;
    return 0;
}