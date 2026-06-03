#include <bits/stdc++.h>
using namespace std;

class Student {
    public:   
    int roll;
    int cls;
    double gpa;

    // Constructors
    Student(int roll, int cls, double gpa){
        // this->roll = roll;   // this-> or (*this).
        (*this).roll = roll;   
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main(){
    Student nayeem(20, 11, 3.9);

    cout << "Nayeem: " << nayeem.roll << " " << nayeem.cls << " " << nayeem.gpa << endl;

    return 0;
}