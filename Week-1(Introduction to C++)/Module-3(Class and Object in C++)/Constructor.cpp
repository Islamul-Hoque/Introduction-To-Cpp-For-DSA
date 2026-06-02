#include <bits/stdc++.h>
using namespace std;

class Student {
    public:   
    int roll;
    int cls;
    double gpa;

    // Constructors
    Student(int r, int c, double g){
        roll = r;
        cls = c;
        gpa = g;
    }

    // Default constructor (optional)
    Student() {
        roll = 0;
        cls = 0;
        gpa = 0.0;
    }
};

int main(){
    // Manual data (without constructor)
    Student nayeem;
    nayeem.roll = 20;
    nayeem.cls = 11;
    nayeem.gpa = 3.9;

    // Constructors Call (Set data)
    Student tumpa(20, 11, 3.9);

    // 1 .User input (with Constructors)
    int r, c;
    double g;
    cin >> r >> c >> g;
    Student nokib(r, c, g);

    //2. User input (without Constructors)
    Student saad;
    cin >> saad.roll >> saad.cls >> saad.gpa;

    // object print
    cout << "Nayeem: " << nayeem.roll << " " << nayeem.cls << " " << nayeem.gpa << endl;
    cout << "Tumpa: "  << tumpa.roll << " " << tumpa.cls << " " << tumpa.gpa << endl;
    cout << "Nokib: "  << nokib.roll << " " << nokib.cls << " " << nokib.gpa << endl;
    cout << "Saad: "  << saad.roll << " " << saad.cls << " " << saad.gpa << endl;

    return 0;
}

/*
Core Properties of Constructors in C++
1. Inside the class → A constructor must always be defined as a member function of the class.
2. No return type → A constructor cannot have a return type, not even void.
3. Identical name → A constructor must have the exact same name as the class it belongs to.
*/
