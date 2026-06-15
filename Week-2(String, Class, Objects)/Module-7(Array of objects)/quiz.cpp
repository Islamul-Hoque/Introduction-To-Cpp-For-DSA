// Q-1: How to declare an array of objects of this Student class?
class Student{
    public:
	int roll;

    Student(int r){	
	roll = r;
    }
};	

/*
যদি কোনো ক্লাসে কনস্ট্রাক্টর ডিফাইন করা থাকে এবং সেই কনস্ট্রাক্টরে প্যারামিটার প্রয়োজন হয়, 
তাহলে সরাসরি অবজেক্টের অ্যারে ডিক্লেয়ার করা সম্ভব নয়। কারণ প্যারামিটার ছাড়া কনস্ট্রাক্টর কল করা সম্ভব হবে না।

যদি আমরা Student a[5]; ব্যবহার করি, তবে এটি কোনো আর্গুমেন্ট ছাড়াই পাঁচটি Student অবজেক্ট তৈরি করার চেষ্টা করবে, 
যা কনস্ট্রাক্টরের অভাবে কম্পাইল-টাইম ত্রুটি সৃষ্টি করবে। 
এই কারণে, প্যারামিটারযুক্ত কনস্ট্রাক্টর থাকা অবস্থায় এমন অ্যারে সরাসরি ডিক্লেয়ার করা সম্ভব নয়।

*/


// Q-2: How to declare a static array of objects of this Student class?
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int roll;
};

/*

যেহেতু এখানে কোনো কনস্ট্রাক্টর নেই,একটি স্ট্যাটিক অ্যারে সরাসরি ডিক্লেয়ার করা যায় Student a[5]; দিয়ে। 
এটি পাঁচটি Student অবজেক্ট তৈরি করবে।
*/


// Q-3: Suppose we have created a static array of 5 objects of Student class. How can we access 3rd student’s roll?
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int roll;
};

int main() {
    Student a[5];

    // সব student এর roll assign
    for(int i = 0; i < 5; i++)
        a[i].roll = i + 1;

    // 3rd student এর roll access
    cout << "3rd Student এর Roll: " << a[2].roll << endl;

    return 0;
}

/*
অ্যারের ইন্ডেক্স ০ থেকে শুরু হয়। তাই তৃতীয় এলিমেন্ট অ্যাক্সেস করতে হলে a[2] ব্যবহার করতে হবে। 
a[2].roll লেখার মাধ্যমে আপনি ঐ অবজেক্টের roll প্রোপার্টি পেতে পারবেন।
*/

// Q-4: What will be the datatype of our mx variable, if we want to find the object with maximum marks from an array of objects of a class named Student?
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

int main() {
    Student a[5];

    // Data input
    a[0] = {"Rahim", 85};
    a[1] = {"Karim", 92};
    a[2] = {"Jamal", 78};
    a[3] = {"Ritu", 95};
    a[4] = {"Setu", 88};

    // Maximum marks
    Student mx;
    mx.marks = INT_MIN;

    for(int i = 1; i < 5; i++) {
        if(a[i].marks > mx.marks) {
            mx = a[i];
        }
    }

    cout << "সর্বোচ্চ marks পেয়েছে: " << mx.name << endl;
    cout << "Marks: " << mx.marks << endl;

    return 0;
}

/*

যেহেতু আমরা একটি অবজেক্টের সর্বোচ্চ প্রপার্টি খুঁজছি, 
তাই আমাদের Student টাইপের একটি ভেরিয়েবল প্রয়োজন যা সেই অবজেক্ট ধারণ করতে পারে। তাই Student mx; ব্যবহার করতে হবে।  
*/


// Q-5: It is possible to get the object with maximum marks using the builtin max function?
// ans: false
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

int main() {
    Student a[5];

    a[0] = {"Rahim", 85};
    a[1] = {"Karim", 92};
    a[2] = {"Jamal", 78};
    a[3] = {"Ritu", 95};
    a[4] = {"Setu", 88};

    // Manual loop দিয়ে max
    Student mx = a[0];
    for(int i = 1; i < 5; i++) {
        if(a[i].marks > mx.marks) {
            mx = a[i];
        }
    }

    cout << "সর্বোচ্চ marks: " << mx.name << endl;
    cout << "Marks: " << mx.marks << endl;

    return 0;
}

/*
C++-এর built-in max ফাংশন সাধারণত দুটি মান (যেমন, সংখ্যা বা প্রিমিটিভ ডেটা টাইপ) তুলনা করতে ব্যবহার করা হয়। 
এটি object-এর ক্ষেত্রে সরাসরি কাজ করে না, কারণ object-এর মধ্যে কীভাবে তুলনা করতে হবে, তা max ফাংশন জানে না।
*/


// Q-6:  What is the return type of comparator function ?
bool cmp(Student l, Student r) {
    return l.marks < r.marks; 
}

/*
C++-এর comparator ফাংশন হলো একটি user-defined ফাংশন, যা sorting বা তুলনা করার সময় ব্যবহার করা হয়। 
এই ফাংশনের কাজ হলো দুটি object বা মানের মধ্যে তুলনা করা এবং true বা false রিটার্ন করা।

*/



// Q-7: What is our condition in the comparator function, if we want to sort by descending order of roll?
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r) {
    return (l.roll > r.roll)
}

int main() {
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].roll >> a[i].marks;

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++) 
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;

    return 0;
}

/*
Descending order-এ সোর্ট করতে হলে, আমাদের শর্ত হবে a[i].roll যদি a[j].roll এর চেয়ে বড় হয় তবে True return হবে ।

*/



// Q-8: What’s the syntax to sort array of objects of a class using built-in sort function ?
// ans: sort(array_name, array_name + size, user_defined_bool_function);

/*
যখন আমরা একটি অবজেক্ট অ্যারে সোর্ট করতে চাই, 
আমাদের একটি user_defined_bool_function সরবরাহ করতে হবে যা কাস্টম শর্ত অনুযায়ী সঠিক সিকোয়েন্স প্রদান করবে।
*/


// Q-9: If this is our user-defined boolean compare function, then in which order our array of objects will sort?
// Ans:  Descending order of roll
bool cmp(Student a, Student b){
    if(a.roll > b.roll) return true;
    else return false;
}

/*
উপরের কম্পারেটর ফাংশনটি a.roll এবং b.roll এর তুলনায় a.roll > b.roll এর ক্ষেত্রে true রিটার্ন করে। 
এটি roll এর ডেসেন্ডিং অর্ডার নিশ্চিত করে। 
*/


// Q-10: How can we access the index of a lowercase character stored in variable(c) in frequency array named frq?
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "banana";
    int frq[26] = {0}; // frequency array

    for(int i = 0; i < s.size(); i++) {
        char c = s[i];
        frq[c - 'a']++;  // অথবা frq[c - 97]++; একই কথা
    }

    // Print frequency
    for(int i = 0; i < 26; i++) {
        if(frq[i] > 0) {
            cout << (char)(i + 'a') << " : " << frq[i] << endl;
        }
    }

    return 0;
}

/*
স্ট্রিং থেকে কোনো ছোট হাতের অক্ষরের ফ্রিকোয়েন্সি খুঁজতে হলে, আমরা c-'a' বা c-97 ব্যবহার করতে পারি। 
এটি c অক্ষরের ASCII মান থেকে 'a' বা ৯৭ বাদ দিয়ে তার সঠিক ইন্ডেক্স নির্ধারণ করে।

*/