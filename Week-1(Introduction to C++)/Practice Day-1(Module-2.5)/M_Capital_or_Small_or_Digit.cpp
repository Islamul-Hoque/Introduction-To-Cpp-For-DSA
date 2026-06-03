#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin >> c;

    if(c>= '0' && c<='9')
        cout << "IS DIGIT\n";
    else{
        cout << "ALPHA\n";
        if(c>= 'A' && c<='Z')
            cout << "IS CAPITAL\n";
        else  cout << "IS SMALL\n";
        }

    return 0;
}