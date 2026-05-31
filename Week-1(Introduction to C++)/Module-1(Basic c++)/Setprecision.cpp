#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double x = 123.1234567;

    cout << fixed << setprecision(7) << x;

    return 0;
}