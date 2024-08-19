#include <iostream>
using namespace std;
int main()
{
    int a[5], sum = 0, i;
    float p;

    cout << "Enter integers : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum = a[i];
    }

    for (i = 0; i < 5; i++)
    {
        p = ((float)a[i] / sum) * 100;
        cout << "The precentage of each number is " << p << endl;
    }

    return 0;
}