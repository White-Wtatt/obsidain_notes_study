#include <iostream>
using namespace std;

int main()
{
    double km,L,Km_L;

    cout << "Enter the vehicle's mileage : ";
    cin >> km;
    cout <<"Enter the corresponding fuel consumption: ";
    cin >> L;

    Km_L = L / km;

    cout << "Fuel consumption per 100 kilometers is :" << Km_L *100 << " L.\n";

    return 0;
}