#include <iostream>
using namespace std;

void Time(int , int);

int main(){
    int hour,minute;

    cout << "Enter the number of hours: ";
    cin >> hour;

    cout << "Enter tne number of minutes: ";
    cin >> minute;

    cout << "Time: ";
    Time(hour,minute);
    cout << endl;

    return 0;
}

void Time(int h,int m){
    cout << h << ":" << m; 
}