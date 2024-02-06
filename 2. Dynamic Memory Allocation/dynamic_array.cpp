#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[8];
    /* int arr1[10];
    int s = sizeof(arr1);
    cout << s; */

    // initialize kora jabe na. input niye kaj korte hobe
    // int b = sizeof(arr);
    // cout << b << endl;

    int i;
    for (i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < 8; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}