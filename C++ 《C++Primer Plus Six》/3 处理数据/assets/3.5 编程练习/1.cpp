#include <iostream>
using namespace std;

int main()
{
    const int ft_trans_in = 12;

    cout << "Please enter your height in inches_____\b\b\b\b\b ";
    int in ;
    cin >> in;
    int ft = in / ft_trans_in;
    int in_s = in % ft_trans_in;

    cout << "You height is " << ft << " feet and " << in_s << " inches.\n";

    return 0;
}