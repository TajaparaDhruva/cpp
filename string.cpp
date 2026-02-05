#include <iostream>
#include<string.h>
using namespace std;

int main(){

    string name = "Dhruva";

    cout << name << endl;//print


    cout << name.length() << endl; //length
    cout << name.size() << endl;//length


    string fname = "Dhruva";
    string lname = "Tajapara";

    cout << fname + " " + lname << endl; //concat
    cout << fname.append(lname) << endl;//concat


    cout << fname.at(0) << endl;// 0th index value



    string fullname;

    cout << "Enter full name";
    getline(cin,fullname); // take input with space
    cout << fullname;
}