#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];
    int i;
    for (i = 0; i < 6; i++)
    {
        cin >> a[i];
    }

    int *b = new int[7];
    for (i = 0; i < 6; i++)
    {
        b[i] = a[i];
    }
    b[6] = 70;
    b[7] = 80;

    for (i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }

    delete[] a;
    cout << a << endl;

    for (i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}