#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    cout << s << endl;

    // string কে word-by-word read
    stringstream ss(s);

    string word; 
    int count =0;
    while(ss>> word){ // প্রতিবার (ss >> word) করলে পরবর্তী word পাওয়া যায়
            cout << word << endl;
            count++;
        }

    cout << "Total word: " << count << endl;
    return 0;
}
