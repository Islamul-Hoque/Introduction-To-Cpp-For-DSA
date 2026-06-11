// #include <bits/stdc++.h>
// using namespace std;

// class Cricketer {
//     public:
//     string country;
//     int jersey;

//     Cricketer(string country, int jersey){
//         this->country = country;
//         this->jersey = jersey;
//     }
// };

// int main(){
//     Cricketer* dhoni = new Cricketer("india1", 10);
//     Cricketer* kholi = new Cricketer("india2", 18);

//     // wrong way
//     kholi = dhoni;
//     delete dhoni;
//     cout << kholi->country << " " << kholi->jersey << endl;
    
//     // right way-1
//     kholi->country = dhoni->country;
//     kholi->jersey = dhoni->jersey;

//     // way-2
//     *kholi = *dhoni;
//     cout << kholi->country << " " << kholi->jersey << endl;

//     return 0;
// }