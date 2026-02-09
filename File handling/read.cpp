#include <iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
    string oneline;

    ifstream file1;

    file1.open("sample.txt");

    if(file1.is_open()){
       while (getline(file1,oneline))
       {
         cout << oneline  << endl;
       }
       
        file1.close();
    }
    cout << "done" << endl;
    return 0;
}