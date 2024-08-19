#include <iostream>
using namespace std;

void interest(int p, int t, float r)
{
    float i;
    i = (p * t * r) / 100;

    cout << "The Simple Interest is " << i << endl;
}

int main()
{
    int p, t;
    float r;

    cout << "Enter the principal, time and rate : ";
    cin >> p >> t >> r;

    interest(p, t, r);
}
