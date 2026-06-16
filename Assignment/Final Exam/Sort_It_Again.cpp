#include <bits/stdc++.h>
using namespace std;

class Students{
public:
    string name; 
    int cls;
    char section; 
    int id; 
    int math_marks;
    int eng_marks;
};

bool cmp(Students l, Students r){
    return 
    (l.eng_marks != r.eng_marks) ? (l.eng_marks > r.eng_marks) :
    (l.math_marks != r.math_marks) ? (l.math_marks > r.math_marks) : l.id <r.id;
}

int main(){
    int n;
    cin >> n;
    Students a[n];

    for (int i = 0; i <n; i++)
    cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;

    sort(a, a+n, cmp);
    for (int i = 0; i <n; i++)
    cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks <<endl;

    return 0;
}