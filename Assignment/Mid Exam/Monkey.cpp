#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100001];

    // EOF
    while (cin.getline(s, 100001)) {
        int len = strlen(s);

        string letters;
        for (int i = 0; i < len; i++) 
            if (s[i] != ' ') letters.push_back(s[i]);  // Removing space

        // ascending order
        sort(letters.begin(), letters.end());

        cout << letters << endl;
    }

    return 0;
}