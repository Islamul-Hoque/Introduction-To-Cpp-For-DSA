#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int ID;
    char name[101];
    char section;
    int total_marks;
};

int main(){
    int t;
    cin >> t;

    while (t--) {
        Student arr[3];

        for (int i = 0; i <3; i++)
            cin >> arr[i].ID >> arr[i].name >> arr[i].section >> arr[i].total_marks;

        // Default best student
        Student highest_marks = arr[0];

        for (int i = 1; i < 3; i++) {
            // Find max Mark
            if( arr[i].total_marks > highest_marks.total_marks) highest_marks = arr[i];

            // Marks same => ID check
            else if (arr[i].total_marks == highest_marks.total_marks) {
                if(arr[i].ID < highest_marks.ID) highest_marks = arr[i];
            }
        }

        cout << highest_marks.ID << " " << highest_marks.name << " " << highest_marks.section << " " << highest_marks.total_marks << endl;
    }

    return 0;
}