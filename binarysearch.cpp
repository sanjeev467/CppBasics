// this program will find the index of the key which we have to find
#include <iostream>
using namespace std;

// linear search krne ke liye hum alag function bana lenge

int binarySearch(int arr[], int n, int key)
{
    // start aur end point decide kr lete hain
    int s = 0; // start point
    int e = n; // end point
    while (s <= e)
    {
        // while loop says jab tak s chota hain e se
        int mid = (s + e) / 2; // isse hum mid element find karnege...isse humara mid elememt ka index aajayega

        if (arr[mid] == key)
        {
            // yahan jo array of mid hain matlab jo humara mid element hain usko compare karenge key se
            return mid; // hum return kr denge mid jo ki uska index hain
        }
        else if (arr[mid] > key)
        {
            // matlab jo humara key hain wo mid arr se kam hain aur kam hain to wo first half mein present hoga matlab mid element ke pehle
            e = mid - 1; // jab pata chala ki key mid element se kam hain to humara end point  mid - 1 kr denge jaise yahan samjho key 27 hain hain and arr {27, 34, 42 hain}
            // to yahan  mid point 43 ain and key 34 se kam hai so hume pata hain kikey mid se pehle hain so naya end point ho jayega mid - 1
        }
        else
        {
            s = mid + 1; // jab pata chala ki key mid element se jyada hain to humara start point  mid + 1 kr denge
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

    cout << binarySearch(arr, n, key) << endl; // yahan pe call kr rhe hain apne fun ko

    return 0;
}