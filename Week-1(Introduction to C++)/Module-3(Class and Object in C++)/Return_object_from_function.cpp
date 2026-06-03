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

Student fun(){
    Student nayeem(20, 11, 3.9);
    return nayeem;
}

int main(){
    Student obj = fun();
    cout << "Nayeem: " << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}