#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // index based for Loop 
    for (int i = 0; i <s.size(); i++)
        cout << s[i] << endl;

    // build-in Range based for Loop
    for (char c : s)
        cout << c << endl;

    return 0;
}