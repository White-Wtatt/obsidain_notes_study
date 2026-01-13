#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int ft_in = 12;
    const double in_m = 0.0254;
    const double lb_kg = 2.2;

    double foot,inch,lb;

    cout << "Please enter your height in feed and in inches: ";
    cin >> foot >> inch;
    cout << "Please enter your weight in lb: ";
    cin >> lb;

    double height_in = foot * ft_in + inch;
    double height = height_in * in_m;
    double weight = lb / lb_kg ;
    double BMI = weight / pow(height,2);

    cout << "Your height is " << height_in << " inches.\n";
    cout << "Your weight is " << weight << " KG.\n";
    cout << "The BMI is " << BMI <<" .\n";

    return 0;
}