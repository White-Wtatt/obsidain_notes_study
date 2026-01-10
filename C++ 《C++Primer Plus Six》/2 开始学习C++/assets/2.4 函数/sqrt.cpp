#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double area;
    cout << "Enter the floor area , in square feet, of the building: ";
    cin >> area;
    double side;
    side = sqrt (area);
    cout << "The side length of the square footage is: " << side << endl;
    return 0;
}