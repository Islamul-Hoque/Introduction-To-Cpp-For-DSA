#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello Word";
    cout << "s: " << s << endl;

    // way-1
    string s1("Hello Word");
    cout << "s1: " << s1 << endl;

    // way-2
    string s2("Hello Word", 8);   // shurur 8 char print korbe  
    cout << "s2: " << s2 << endl;

    // way-3
    string s3 = "Hello Word"; 
    string t(s3, 8); // shurur 8 char bad diye baki sob char print korbe 
    cout << "t(s3, 8)=> " << t << endl;

    // way-4
    string s4(8, 'A');
    cout << "s4(8, 'A')=> " << s4 << endl;
    return 0;
}