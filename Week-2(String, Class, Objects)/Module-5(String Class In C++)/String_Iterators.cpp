// Iterators
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello";

    // pointer to the first element.
    cout << *(s.begin()) << endl;

    // pointer to the next element after the last element of the string
    cout << *(s.end()) << endl;
    cout << *(s.end()-1) << endl << endl;

    // normal loop 
    for (int i = 0; i <s.size(); i++)
        cout << s[i] << endl;

    // using Iterators
    for (auto it = s.begin(); it < s.end(); it++) // string:: iterator or auto
        cout << *it << endl;

    return 0;
}

