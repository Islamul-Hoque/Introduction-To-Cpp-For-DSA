// Capacity
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "hi Nayeem";
    // returns the size of the string
    cout << s.size() << endl;  

    // 10^6 --> returns the maximum size that string can hold
    cout << s.max_size() << endl; 

    // returns current available capacity of the string
    cout << s.capacity() << endl; 

    // change the size of the string
    s.resize(7);
    cout << s << endl;
    s.resize(15, 'P');
    cout << s << endl;

    // clear the string.
    s.clear(); 
    cout << s << endl << s.size() << endl;

    // return true/false if the string is empty
    if(s.empty() ==true)  // OR if(s.size() ==0) 
    cout << "Empty";
    else cout << "Not Empty";

    return 0;
}