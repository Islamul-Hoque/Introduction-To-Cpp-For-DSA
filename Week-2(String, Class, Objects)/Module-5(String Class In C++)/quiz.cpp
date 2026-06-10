// Q-1
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "Hello";
    string b = " World";
    a.append(b);
    cout << a << endl;

    return 0;
}


// Q-2 
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "Hello";
    s.push_back('!');
    cout << s; 

    return 0;
}


// Q-3
#include <bits/stdc++.h>
using namespace std;

int main(){
string s = "";

if(s.empty()) cout << "String is empty";
    return 0;
}


// Q-4
#include <bits/stdc++.h>
using namespace std;

int main(){
string a = "Hello";
string b = "Hello";

if(a == b) cout << "Same"; 

    return 0;
}


// Q-5
#include <bits/stdc++.h>
using namespace std;

int main(){
string str;
getline(cin, str);
cout << str;

    return 0;
}


// Q-6
#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    string name;

    cin >> age;

    // newline character বাদ দেওয়ার জন্য
    cin.ignore();

    getline(cin, name);

    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;

    return 0;
}

/*
cin.ignore() ফাংশন , এই ফাংশনটি ইনপুট স্ট্রিম থেকে নির্দিষ্ট সংখ্যক ক্যারেক্টার বা একটি নির্দিষ্ট ক্যারেক্টার পর্যন্ত উপেক্ষা করতে ব্যবহৃত হয়।
getchar() ফাংশন, এই ফাংশনটি ইনপুট স্ট্রিম থেকে একটি ক্যারেক্টার গ্রহণ করে এবং সেটি রিটার্ন করে। আপনি যদি এটি রিটার্ন করা ভ্যালুটি ব্যবহার না করেন, তাহলে এটি কার্যত ক্যারেক্টারটি উপেক্ষা করে।
*/

// Q-7
#include <bits/stdc++.h>
using namespace std;

int main() {
string a = "Hello";
string b = " World";
a += b;
cout << a; // Output: Hello World

    return 0;
}


// Q-8
#include <bits/stdc++.h>
using namespace std;

int main() {
string s = "Hello World";

stringstream ss(s);
string word;

while(ss >> word) cout << word << endl;

    return 0;
}

/*
stringstream তৈরি করার দুইটি পদ্ধতি আছে:
(i) সরাসরি ইনিশিয়ালাইজ করা: stringstream ss(s);
(ii) স্ট্রিমে লেখা: stringstream ss; ss << s;

*/