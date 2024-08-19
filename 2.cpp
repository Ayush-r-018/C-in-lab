#include <iostream>
using namespace std;
int main()
{
    int a, p, l, b;
    cout << "Enter lenght and breadth ";
    cin >> l >> b;
    a = l * b;
    p = 2 * (l + b);
    cout << "Area of rectangle is " << a << endl;
    cout << "Perimeter of rectangle " << p;
    return 0;
}