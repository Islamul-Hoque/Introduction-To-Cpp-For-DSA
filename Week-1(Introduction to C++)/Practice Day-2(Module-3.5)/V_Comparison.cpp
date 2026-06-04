#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    char o;

    cin >> a >> o >> b;

    // Way‑1 (nested if‑else)
    if(o == '>') 
        if(a>b) cout << "Right";
        else cout << "Wrong";
    else if(o == '<') 
        if(a<b) cout << "Right";
        else cout << "Wrong";
    else if (o == '=') 
        if(a==b) cout << "Right";
        else cout << "Wrong";

    // Way-2: ternary operator with cout
    cout <<(
        (o == '>' && (a>b)) ? "Right" : 
        (o == '<' && (a<b)) ? "Right" :
        (o == '=' && (a==b)) ? "Right" : "Wrong"
    );

    return 0;
}