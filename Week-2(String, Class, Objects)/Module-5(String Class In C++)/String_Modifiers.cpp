// String Modifiers
#include <bits/stdc++.h>
using namespace std;

int main(){
    // C-style string concatenation
    char c[50] = "Islamul Hoque";
    char c2[50] = " Ishfak";

    strcat(c, c2);
    cout << c << endl;

    // c++ built-in operator
    string s = "Islamul Hoque";
    string s2 = " Ishfak";

    // way-1
    s += s2;
    // way-2
    s.append(s2);  // cross

    // add character to the last of the string
    // way-1
    s.push_back('A');  // cross
    // way-2
    s += 'B';

    // remove the last character of the string
    s.pop_back();
    cout << s << endl;

    return 0;
}