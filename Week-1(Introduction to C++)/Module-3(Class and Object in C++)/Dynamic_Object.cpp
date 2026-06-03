#include <bits/stdc++.h>
using namespace std;

class Student {
    public:   
    int roll;
    int cls;
    double gpa;

    // Constructors
    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main(){
    Student* p = new Student(20, 11, 3.9);
    cout << "Nayeem: " << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}