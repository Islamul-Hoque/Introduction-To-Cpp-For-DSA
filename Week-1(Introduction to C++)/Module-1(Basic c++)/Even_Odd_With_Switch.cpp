#include <iostream>
using namespace std;

int main(){
    int x = 150;

    switch (x%2){
    case 0: 
        cout << "Even";
        break;

    case 1: 
        cout << "Odd";
        break;
    }
    return 0;
}