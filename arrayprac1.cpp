#include <iostream>
using namespace std;

int main()
{
    int mx = -1999999; // mx ki value minus mein is liy le rhe hain ki hume maximize krna hain na har kisi step pe

    // ab hum array ka size declare kr lenege to hum input le lenge to...

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {

        // so mujhe har kisi step me kya krna hain mujhe mx variable ko update krna hain
        mx = max(mx, a[i]);
        // ab mujhe ise c out kr dena hain

        cout << mx << endl;
    }

    return 0;
}