// Problem:
// You are given an array arr[] of N integers including O. The task is to find the smallest
// positive number missing from the array.

#include "bits/stdc++.h"

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // ab hum apna ek bahot bada variable bana lenge 10 to the power 6 ka jiska hum check arra banayenge

    const int N = 1e6 + 2;

    // ab hum aona boolean array declare kr lenge

    bool check[N];
    // iske baad hum apne check array ko false se initialize kr lenge
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

    // iske baad hum array pe iterate karenge aur jo elememt non negative hoga uski occurance ko true mark kr denge

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = true;
        }
    }

    // ab hum ans varibale declare kr lenge

    int ans = -1;
    // abhi ke liye -1 declare kr lete hain

    // ab hum check krenge apne check array me ki kaunsa aisa no hain jo missing hain
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }

    // ab maan lijiye jo mera ans tha wo mila hi nhi to mera ans -1 ho jayega warna mera updated ans aa jayega

    cout << ans << endl;

    return 0;
}