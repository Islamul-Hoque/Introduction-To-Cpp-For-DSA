#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    cin.ignore();  // for ignore enter

    // c style space input
    char c[100];
    cin.getline(c, 100);

    // c ++ build-in class
    string s;
    getline(cin, s);

    cout << x << endl << c << endl << s << endl;

    return 0;
}