#include <iostream>
using namespace std;
int main()
{
    int a[5], sum = 0, i;
    float p;

    cout << "Enter the marks of five subjects : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    p = ((float)sum / 500) * 100;

    if (p > 80)
    {
        cout << "You have got distinction " << p << " %" << endl;
    }

    else if (p > 60 && p < 80)
    {
        cout << "You have got First Division " << p << " %" << endl;
    }

    else if (p > 40 && p < 60)
    {
        cout << "You have got Second Division " << p << " %" << endl;
    }

    else
    {
        cout << "You have failed " << p << endl;
    }

    return 0;
}