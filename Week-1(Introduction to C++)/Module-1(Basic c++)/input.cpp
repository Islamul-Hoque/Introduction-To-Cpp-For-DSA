#include <iostream>
using namespace std;

int main(){
    int x = 10, y=65;
    char c = 'a';
    double d = 1.1; 

    cin >> x >> c >> d;
    cout << x << endl << d << endl;

    // way-1(Normal)
    int ascii = c;
    cout << c << " er ascii value: " << ascii << "\n";

    // way -2 (Typecasting)
    cout << c << " er ascii value: " << int(c) << endl;

    cout << y << " " << char(y);

    return 0;
}