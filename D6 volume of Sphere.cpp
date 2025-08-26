#include <iostream>

using namespace std;

int main()
{
    int r, vol;
    cout <<"Enter the radius of sphere: "<< endl;
    cin >> r;
    vol = (4/3)*3.14*r*r*r;
    cout << "The volume of sphere is: " << vol <<endl;

    return 0;
}
