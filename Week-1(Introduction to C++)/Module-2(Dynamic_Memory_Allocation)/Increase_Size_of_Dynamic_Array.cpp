#include <bits/stdc++.h>
using namespace std;

int main(){
    // int a[3]; // Static
    int* a = new int [3]; // Dynamic

    for (int i = 0; i <3; i++) 
        cin >> a[i];

    // int b[5]; //  Static
    int* b =new int[5]; // Dynamic
    for (int i = 0; i <5; i++) 
        b[i] = a[i];

    b[3] = 40;
    b[4] = 50;

    // Delete Dynamic Array 
    delete[] a;

    for (int i = 0; i <5; i++) 
    cout << b[i] << " ";

    return 0;
}

