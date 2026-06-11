#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    // reverse and print first word (no space)
    ss>> word;
    reverse(word.begin(), word.end());
    cout << word;

    while (ss >> word){
        // reverse and print remaining words (with leading space)
        reverse(word.begin(), word.end());
        cout << " " << word;
    }

    return 0;
}