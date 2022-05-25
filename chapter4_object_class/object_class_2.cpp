#include <iostream>
using namespace std;

// create a class
class Room {

   private:
    double length;
    double breadth;
    double height;
public:
double setValues(double len, double brdth, double high)
{
      length=len;
      height=high;
      breadth=brdth;
}
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // assign values
    room1.setValues(20,30,40);

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}