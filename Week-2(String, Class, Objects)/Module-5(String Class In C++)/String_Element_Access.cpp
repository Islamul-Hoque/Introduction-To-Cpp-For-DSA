// Element access
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "HELLO";

    // ith index
    cout << s[3] << endl;
    cout << s.at(3) << endl; // cross

    // first element
    cout << s.front() << endl; // cross
    cout << s[0] << endl;

    // last element
    cout << s.back() << endl;
    cout << s[s.size()-1] << endl;  // cross

    return 0;
}