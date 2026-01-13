#include <iostream>
using namespace std;

int main()
{
    const int day_hour = 24;
    const int hour_minute = 60;
    const int minute_second = 60;

    long second ;
    cout << "Enter the number of seconds: ";
    cin >> second;


    int seconds = second % minute_second;
    int min = second / minute_second ;
    int minutes = min % hour_minute;
    int hou = min / hour_minute;
    int hours = hou % day_hour;
    int days = ((second / minute_second) / hour_minute) / day_hour;

    cout << second << " second = " << days << " days, " << hours 
    << " hours, " << minutes << " minutes, " << second << " seconds."<< endl;

    return 0;
}