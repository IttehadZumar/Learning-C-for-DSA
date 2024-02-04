#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[8];

    // initialize kora jabe na. input niye kaj korte hobe
    // int b = sizeof(arr);
    // cout << b << endl;

    int i;
    for (i = 0; i < 5; i++){
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
        return 0;
}