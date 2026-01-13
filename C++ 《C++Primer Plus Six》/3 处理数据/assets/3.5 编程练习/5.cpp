#include <iostream>
using namespace std;

int main()
{
    long long World_Population ;
    long long China_Population ;

    cout << "Enter the world's population : ";
    cin >> World_Population;
    cout << "Enter the population of China : ";
    cin >> China_Population;

    double rate = (double)China_Population / World_Population;

    cout << "The population of the China is " << rate * 100 << "% of the world population." << endl;
    return 0;
}