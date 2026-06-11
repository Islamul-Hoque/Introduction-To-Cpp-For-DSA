#include <bits/stdc++.h>
using namespace std;

int main(){
// int array reverse
    int n;
    cin >> n;
    int a[n];

    // Input array
    for (int i = 0; i <n; i++)
        cin >> a[i];

    // reverse int array
    reverse(a, a+n);

    // Index Base for Loop
    for (int i = 0; i <n; i++)
    cout << a[i] << " ";
    cout << endl;

    // Range Base for Loop
    for(int i : a)
        cout << i << " ";
        cout << endl;

// String reverse
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}