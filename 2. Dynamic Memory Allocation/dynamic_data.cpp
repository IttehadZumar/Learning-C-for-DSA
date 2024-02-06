#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Heap memory te directly memory use kora jay na. Memory theke ekta refernece create hoy variable ta identify korte. Tai pointer diye memory allocate kore rakhte hoy. Example: int* a = new int. new int allocates memory reference in heap mmeory, int*a used to save the memory address from heap
    int *a = new int;
    *a = 10;

    // will return the address of heap
    cout << a << endl; 

    // so we need to do dereferencing
    cout << *a << endl;

    float *b = new float;
    *b = 2.56;
    cout << *b << endl;
    return 0;
}