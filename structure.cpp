// #include<iostream>
// using namespace std;

// struct students
// {
//     string name;
//     int rollNumber;
//     float marks;
// };

// int main(){

//     students s;

//     s.name = "Dhruva";
//     s.rollNumber = 21;
//     s.marks = 100;

//     cout<< s.name;
    
// }

#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r;
    r.length = 10;
    r.breadth = 5;

    cout << r.area();
}
