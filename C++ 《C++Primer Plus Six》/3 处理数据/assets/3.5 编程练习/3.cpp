#include <iostream>
using namespace std;

int main()
{
    const int de_mi = 60;
    const int mi_se = 60;
    double degree,minute,second;

    cout << "Enter a latitude in degree,minutes,and seconds:" << endl;
    cout << "First,enter the degree: ";
    cin >> degree;
    cout << "Next,enter the minutes of arc: ";
    cin >> minute;
    cout <<"Finally, enter the seconds of arc: ";
    cin >> second;

    double degrees = degree + ( minute + second / mi_se ) / mi_se;

    cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = "
    << degrees << " degrees.";

    return 0;
}