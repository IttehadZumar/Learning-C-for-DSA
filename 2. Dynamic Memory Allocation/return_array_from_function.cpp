
#include <bits/stdc++.h>
using namespace std;

int *funny()
{
    // this program will give a runtime error. because of after the funny function return the value all the variables and array space will be removed by the compiler. because it is stored in the stack which is the static memory. to return from the funny function an array we need to declare it in the heap memory, which is a dynamic memory.

    // int a[5], i;
    int* a = new int[5], i;
    for (i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int i;
    int *a = funny();
    for (i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    // if you have any code after printing then do delete, otherwise it's necessary, because the program will stop after pronting, and the array will be deallocated when program stops.
    delete[] a;
    return 0;
}
