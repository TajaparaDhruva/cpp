#include <iostream>
using namespace std;

int main()
{

    int arr[3]={1,2,3};

    cout << sizeof(arr) << endl; // sizeof(arr) ----> 4*3 = 12
    cout << sizeof(arr) / sizeof(arr[0]) << endl; // find size of arr 

    int arr2[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter a number:" << endl;
    //     cin >> arr2[i];
        
    // }

    int arr3[2][2] ={
        {2,3},
        {4,5},
    };

    for(int i =0;i<2;i++){
        for(int j = 0;j<2;j++){
            cout << arr3[i][j] << endl; 
        }
    }
    return 0;
}
