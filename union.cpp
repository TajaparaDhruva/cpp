#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 10;
    cout << "i = " << d.i << endl;
    
    d.f = 3.14;
    cout << "f = " << d.f << endl;   // overwrites i
    
    cout << "i = " << d.i << endl;// garbage value
    
}
