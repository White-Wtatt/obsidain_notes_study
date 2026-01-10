#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of light years: ";

    double light;
    cin >> light;
    
    cout << light << " light years = " << light * 63240 
    << " astronomical nuits." << endl;

    return 0;
}