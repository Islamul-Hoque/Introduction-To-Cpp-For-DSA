#include <bits/stdc++.h>
using namespace std;

int* fun(){
    int* a = new int [5]; // Dynamic Array

    for (int i = 0; i <5; i++) 
    cin >> a[i];

    return a; // Dynamic Array Return From Function
}

int main(){
    int* x = fun(); // Dynamic Array Receive 

    for (int i = 0; i <5; i++) 
    cout << x[i] << " ";

    return 0;
}

