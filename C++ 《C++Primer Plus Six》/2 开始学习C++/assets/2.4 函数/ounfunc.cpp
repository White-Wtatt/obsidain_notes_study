#include<iostream>
void sidom(int);

int main()
{
    using namespace std;
    sidom(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    sidom(count);
    cout << "Done!";
    return 0;

}

void sidom(int n){
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
}