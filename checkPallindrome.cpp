#include <iostream>
using namespace std;

int main()
{

    // check palindrome

    int n;
    cin >> n;

    char arr[n + 1];
    cin >> arr;

    // ab hum chec h krne ke liye ek variable rakhenge
    // ki theek hain muhhe pata to chalna chahiye ki meri koi condition
    // false hui hain ya wo phir true hi reh gayi
    // uske liye hum ek check variable likhenge

    bool check = true; // initially maan liya ki chali palindrome hoga

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
    {
        cout << "word is a palindrome" << endl;
    }
    else
    {
        cout << "word is not a palindrome" << endl;
    }

    return 0;
}