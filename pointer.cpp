#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    //print addrress -> a
    cout << &a << endl;
    cout << ptr << endl;
    
    //print value
    cout << a << endl;
    cout << *ptr << endl;


    
    int **ptr1 = &ptr;

    //printf address -> ptr
    cout << &ptr << endl;
    cout << ptr1 << endl;

    //print value 
    cout << **ptr1  << endl;

    **ptr1 = 67;

    //this is change original value of a 
    cout << a << endl;
    return 0;
}