#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    // min
    if(a<b) cout << a << endl;
    else  cout << b << endl;

    // build-in min(), max() func
    cout << "Min is: " << min(a, b) << endl;
    cout << "Max is: " << max(a, b) << endl;
    cout << "Max is: " << max({a, b, 4, 6, 7, 12}) << endl;

    // manual swap
    int temp =a;
    a=b;
    b = temp;

    // Swap() func
    swap(a, b);

    cout << a << " " << b;

}
