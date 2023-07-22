#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // iteration ke liye variable le lete hain counter
    // to counter start hoga 1 se and iske liye while loop laga denge ki jab tak counter
    // is less then n-1 tab tak hum apna process jo hain use repeat krte rahenge

    int counter = 1;

    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            // n- counter -->> agar ith iteration hain to hum n-i i tak check kr rhe hain
            if (arr[i] > arr[i + 1])
            {
                // arr[i]>arr[i+1] --> yahan pe hum check kr rhe hain ki arr of i is > than arr of i+1

                // swap krna hain ab
                // ek int temp bana denge jo arr of i ke equal rahega
                // and arr of i mein daal denge arr of i+1 ki value
                // aur arr of i+1 mein dal denge temp ki value
                // aur jab last mein jab for loop khatam ho jayega to hum kr denge counter ++
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++; // counter ++ kyu ki next iteration pe move kre
    }

    // last mein hum for loop laga denge to print the array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}