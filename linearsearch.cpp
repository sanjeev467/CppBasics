// this program will find the index of the key which we have to find
#include <iostream>
using namespace std;

// linear search krne ke liye hum alag function bana lenge

int linearSearch(int arr[], int n, int key)
{
    // array ,  array size,and key jo hume khojna hain agrs of linear search fun
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;

    int arr[n]; // declarration of array of size n

    // array elements ko input lene ke liye for loop laga denge

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << linearSearch(arr, n, key) << endl; // yahan pe call kr rhe hain apne fun ko

    return 0;
}