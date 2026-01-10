#include <iostream>
using namespace std;

int main(){
    double Celsius,Fahrenheit;

    cout << "Please enter a Celsius values: ";

    cin >> Celsius;
    Fahrenheit = 1.8 * Celsius + 32.0;

    cout << Celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}