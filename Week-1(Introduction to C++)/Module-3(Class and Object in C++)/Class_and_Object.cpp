#include <bits/stdc++.h>
using namespace std;

class Student {
    public:         // access modifiers
    char name[101];
    int roll;
    double gpa;
};

int main(){
    Student a;

    // Hard coded data
    a.roll = 10;
    a.gpa = 4.5;
    char temp[101] = "Rakib";
    strcpy(a.name, temp);
    cout << a.name << " " << a.roll << " " << a.gpa << endl;

    // User input 
    Student b, c;

    cin.getline(b.name, 101);
    cin >> b.roll >> b.gpa;
    cin.ignore();       // Or  getline()

    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}