#include <iostream>
using namespace std;

int main(){
    int carrots;
    cout << "How many carrots do you have? ";
    cin >> carrots; // C++input
    cout << "Here are two more.";
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}