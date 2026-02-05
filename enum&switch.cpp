#include <iostream>
using namespace std;

enum word{
    LOW ,
    MEDIUM,
    HIGH
};

int main() {
    enum word a1 = LOW;
    enum word a2 = MEDIUM;
    enum word a3 = HIGH;
    
    cout << "The value returned by a1 is: " << a1 << endl;

    switch(a3){
        case 0 : cout << "The case0 is exceuted" << endl;
                 break;
        case 1 : cout << "The case1 is excuted" << endl;
                 break;
        default: cout << "The case2 is excuted" << endl;
    }
    return 0;
}