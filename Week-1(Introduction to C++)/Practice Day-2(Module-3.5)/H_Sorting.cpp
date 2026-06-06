#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i <n; i++)
    cin >> a[i];

    // way-1: Manual Sort (Selection/Bubble)
    for (int i = 0; i <n; i++)
        for (int j = i+1; j <n; j++){
            if(a[i]>a[j]){
                // manual swap
                int temp =a[i];
                a[i] = a[j];
                a[j] = temp;

                // built-in swap() func
                swap(a[i], a[j]);
            }
        }

    // way-2: STL sort (built‑in) | Standard Template Library
    sort(a, a+n);

    for (int i = 0; i <n; i++)
        cout << a[i] << " ";

    return 0;
}