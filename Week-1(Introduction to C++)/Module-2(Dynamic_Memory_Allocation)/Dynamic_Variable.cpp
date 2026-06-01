#include <bits/stdc++.h>
using namespace std;

int *p;
int *y;

void fun(){
    // static
    int x =10;
    p = &x;
    cout << "Fun func => x:" << *p << endl;

    // dynamic
    int *z = new int;
    *z = 101;
    y = z;
    cout << "Fun func => y:" << *y << endl;

    return;
}

int main() {
    int x = 10;
    int *p1 = new int;

    *p1 = 100;
    cout << *p1 << endl;

    fun();
    cout << endl;

    // static
    cout << "main func => x:" << *p << endl;

    // dynamic
    cout << "main func => y:" << *y << endl;

    return 0;
}