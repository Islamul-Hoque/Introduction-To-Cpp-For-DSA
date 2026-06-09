// String Modifiers
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Islamul Hoque";

    // assign string
    s = "Ishfak";
    cout << s << endl;

    string s2 = "Hi";
    // way-1
    s = s2;

    // way-2
    s.assign(s2);
    cout << s << endl;

    s.assign("kemon acho?");
    cout << s << endl;

    // erase characters from the string
    s.erase(3, 4);
    cout << s << endl;

    s.erase(3);
    cout << s << endl;

    // replace a portion of the string.
    s.replace(5, 0, " oi");
    cout << s << endl;

    s.replace(5, 6, " oi");
    cout << s << endl;

    s.insert(5, " Ishfak");
    cout << s << endl;

    return 0;
}