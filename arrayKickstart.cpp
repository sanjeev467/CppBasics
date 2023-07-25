#include "bits/stdc++.h"
using namespace std;

int main()
{

    int n;
    cin >> n;

    // iss baar hum n+1 size ka array declare karenge kyuki hume i +1 ko bhi compare krna hain na iss program mein

    int a[n + 1];
    // aur apne nth element ko basically 1 + nth element hai yebto set karenge -1 kyu kyuki 2nd condition jo check krni hain ki mera Ai should be greater than ai +1
    // aur mere no of visitors humesha non negative hain to maine bol diya bhai nth element tu negative le to ye a[n] = -1; cond to humesha satisfy kregi ki a [n-1] is greater than a[n]

    a[n] = -1;

    // ab array ke elements input lenge

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // waise to ques mein keh rakha hain ki mera n mimimum 2 hoga agar wo na hota to hum kaunsi cond daal dete ki

    if (n == 1)
    {
        cout << 1 << endl;
        return 0; // return 0 bana denge ki iske aage execution band krdo
        // return 0 kiske liye main fun ke liye ki yahan tak hi kaam kro, if agar satisfy hui to yahin se return mardo
        // aage ki conds mat padhna wo tumhare kaam ki nhi hain
    }

    // main logic build

    // ek ans variable rakhenge aur initially usko 0 se initialize kr liya

    int ans = 0;
    // isi ans me ++ krta jaunga to no of record breaking days badhte chale jayenge

    // phir max till i

    int mx = -1;

    // ab loop krenge array pe
    // jo conds discuss kri thi uske basis pe

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            ans++;
        }
        mx = max(mx, a[i]); // yahan max ko update kr dunga
    }

    cout << ans << endl;

    return 0;
}
