#include <iostream>
using namespace std;

int main()
{
    char a;
    float num1, num2;

    cout << "Enter number1 : " << endl;
    cin >> num1;
    cout << "Enter number2 : " << endl;
    cin >> num2;
    cout << "Enter your choice(+,-,*,/)" << endl;
    cin >> a;

    switch (a)
    {
    case '+':
        cout << "a + b = " << num1 + num2;
        break;
    case '-':
        cout << "a - b = " << num1 - num2;
        break;
    case '*':
        cout << "a * b = " << num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "Enter proper value" << endl;
            return 0;
        }
        else
        {
            cout << "a / b = " << num1 / num2;
        }
        break;
    }
    return 0;
}