#include <iostream>

using namespace std;

int main()
{
    float p, r, t, si;
    cout << "Enter the principle amount: " << endl;
    cin >>p;
    cout << "Enter the rate: " << endl;
    cin >>r;
    cout << "Enter the time period: " << endl;
    cin >>t;

    si = (p*r*t)/100;
    cout << "The simple interest is: " << si << endl;
    return 0;
}
