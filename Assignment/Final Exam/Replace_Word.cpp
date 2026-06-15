#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        string s, x;
        cin >> s >> x;

    int idx = s.find(x);
    while(idx != string::npos){        // -1 or string::npos
        s.replace(idx, x.size(), "#");
        idx = s.find(x, idx + 1); 
    }

        cout << s << endl;
    }
    return 0;
}