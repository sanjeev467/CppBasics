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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j]; // ek var banayege temp jisme aar j ki value store kr lenge aur arr j mein dal denge arr i ki value and last mein arr i mein dal denge hum temp
                arr[j] = arr[i];
                arr[i] = temp;

            } // agar arr of j is less than arry of i to hum swap kr denge
            // j matlab jo humara first element hain uske baad ke jo bhi sare elemsnts hain wo hum j se traverse kr rhe hain
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << endl;

    return 0;
}
