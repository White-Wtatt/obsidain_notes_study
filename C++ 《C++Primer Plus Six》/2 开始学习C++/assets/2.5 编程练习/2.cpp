#include <iostream>
using namespace std;

int main()
{
    int distance;

    cout << "Enter a distance in the unit of long." << endl;

    cin >> distance;

    int yard = 220 * distance;
    
    cout << "The distance is " << yard << " yard." << endl;

    return 0;
}