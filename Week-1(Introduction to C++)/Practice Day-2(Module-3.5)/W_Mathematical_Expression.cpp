#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    char sign, q = '=';

    cin >> a >> sign >> b >> q >> c;

    if(sign == '+') {
        if(a+b == c) cout << "Yes";
        else cout << a+b;
    } 
    else if(sign == '-'){
        if(a-b == c) cout << "Yes";
        else cout << a-b;
    } 
    else if(sign == '*'){
        if(a*b == c) cout << "Yes";
        else cout << a*b;
    }

    return 0;
}