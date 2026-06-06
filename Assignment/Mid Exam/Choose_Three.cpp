#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        // 5 times n,s a[n] input
        int n, s, flag = 0;;
        cin >> n >> s;

        int a[n];
        for (int i = 0; i <n; i++) cin >> a[i];

        // 3 index check for 5 times
        for (int i = 0; i <n; i++){
            for (int j = i+1; j <n; j++){
                for (int k = j+1; k <n; k++)
                    if(a[i]+a[j]+ a[k] == s) {
                        flag = 1;
                        break;
                    }
            }
        }
        if(flag == 1 ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}