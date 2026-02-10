#include <iostream>
using namespace std;

float addition(float a,float b){
    return a+b;
}

float subtraction(float a,float b ) {
    return a-b;
}

float multiplication(float a, float b){
    return a*b;
}

#include <cmath>

float division(float a, float b) {
    if (b == 0) {
        cout << "Enter proper value" << endl;
        return 0; 
    }
    return a / b;
}



int main() {

    float num1,num2;

    cout << "Enter number1 : " << endl;
    cin >> num1;
    cout << "Enter number2 : " << endl;
    cin >> num2;
    cout << "number1 + number2 = " << addition(num1,num2) << endl;
    cout << "number1 - number2 = " << subtraction(num1,num2) << endl;
    cout << "number1 * number2 = " << multiplication(num1,num2) << endl;
    cout << "number1 / number2 = " << division(num1,num2) << endl;
    return 0;
}