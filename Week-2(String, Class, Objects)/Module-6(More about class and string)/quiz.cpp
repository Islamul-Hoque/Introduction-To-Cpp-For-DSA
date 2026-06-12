// Q-1: he
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s("hello",2);
    cout << s;

    return 0;
}


// Q-2: aaaaa  
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s(5,'a');
    cout << s;

    return 0;
}



// Q-3 (sort(s.begin(), s.end()))
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "dcba";

    sort(s.begin(), s.end());
    cout << s; 

    return 0;
}



// Q-4 (Range based for loop)
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "ISHFAK";

    for(char ch : s)
    cout << ch << " ";

    return 0;
}



// Q-5 (*A = *B)
#include <bits/stdc++.h>
using namespace std;

class Player {
    public:
    string name;
    int score;

    // Player(string n, int s) : name(n), score(s) {}    OR 👇
    Player(string name, int score){
        this->name = name;
        this->score = score;
    } 
};

int main(){
    Player* A = new Player("Dhoni", 100);
    Player* B = new Player("Kohli", 50);

    *A = *B; // B এর data A তে copy হলো(B to A)
    delete B;

    cout << A->name << " " << A->score << endl; // Output: Kohli 50
    delete A;

    return 0;
}


// Q-6: this
#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    string country;
    int jersey;

    // current object instance within a class
    Cricketer(string country, int jersey){
        this->country = country;  // বর্তমান object এর member কে reference করছে
        this->jersey = jersey;
    }
};


int main(){
    Cricketer dhoni("India", 7);
    Cricketer kohli("India", 18);

    cout << dhoni.country << " " << dhoni.jersey << endl;
    cout << kohli.country << " " << kohli.jersey << endl;

    return 0;
}

/*
this keyword হলো pointer, যা সবসময় বর্তমান object কে reference করে।
মানে constructor বা method এর ভেতরে তুমি যদি this->country লেখো, 
সেটা আসলে সেই object এর country property কে বোঝাচ্ছে।
*/


// Q-7: How do you copy an object in C++?
#include <bits/stdc++.h>
using namespace std;

class Player {
public:
    string name;
    int score;
    Player(string n, int s) : name(n), score(s) {}
};

int main(){
    Player A("Dhoni", 100);
    Player B("Kohli", 50);

    A = B;  // assignment operator দিয়ে copy
    cout << A.name << " " << A.score << endl; // Output: Kohli 50
}

/*
C++-এ অবজেক্ট কপি করতে = অপারেটর ব্যবহার করা হয়। 
এটি ক্লাসের কপি কনস্ট্রাক্টর বা অ্যাসাইনমেন্ট অপারেটরের মাধ্যমে ডেটা কপি করে। 
উদাহরণস্বরূপ, obj1 = obj2 করলে obj2-এর ডেটা obj1-এ কপি হবে।
*/

// Q-8: dlrow
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "world";

    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}

// Q-9: How do you access a member of a class using the "this" pointer?  (this->member)
#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey){
        this->country = country;  // বর্তমান object এর country
        this->jersey = jersey;    // বর্তমান object এর jersey
    }

    void printInfo(){
        cout << this->country << " " << this->jersey << endl;
    }
};

int main(){
    Cricketer dhoni("India", 7);

    dhoni.printInfo(); // Output: India 7

    return 0;
}


// Q-10
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "hello";

    for (char ch : s) 
    cout << ch << " ";

    return 0;
}