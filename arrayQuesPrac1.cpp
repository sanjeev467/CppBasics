// Problem:
// Given an array arr[] of size N. The task is to find the first repeating element in the array of
// integers, i.e., an element that occurs more than once and whose index of first occurrence is
// smallest.

// Constraints:
// 1 N 106
// O <= Ai 106

// Example:
// Input:
// 7
// 1534356 ==
// Output:
// 2
// Explanation:
// 5 is appearing twice and its first appearance is at index 2 which is less than 3 whose first
// occurring index is 3.

//  Base Idea:
// To check if a element is repeating, we maintain an array idx[], which stores the first
// occurrence (index) of a particular element a[i].
// * Initialise the idx[] with -1, and minidx with INT MAX.

// • Keep updating idx[], while traversing the given array.
// Given Array:
// 1534356

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

    // ab mujhe apna idx array banana hain to uske liye main bahot bada n declare krunga jo i 10 to the power 6 hoga

    const int N = 1e6 + 2; // 1e6 ka matlab 10 to the power 6
    // const isliye liya kyuki agar baad mein koi N ki value change krta hain to baad mein error aa jaye ya N ki value change na ho paye

    // ab apna idx array declare kr lete hain ab

    int idx[N];

    // ab initialise kr lete hain apne idx array ko -1 se

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    // ab hume ek aur variable declare krna hain minidx

    // ise initialise krna hain bahot hi badi value se to humne kr diya INT_MAX se

    int minidx = INT_MAX;

    // ab loop krna hain hain array pe aur conditions apply krni hain

    for (int i = 0; i < n; i++)
    {
        // to humne pehli cndition kya discuss ki thi, agar mera previous, basically idx of ai -1 nhi hain,
        // agar main kisi ai pe pahucha aur udhar wo -1 nhi pada hua tha to wo mera ek potential answer ho sakta hain
        // to wo mein minidx mein minimize kr ke update kr duga

        if (idx[a[i]] != -1)
        {
            // agar idx of ai is not equal to - 1, to minidx mein minimize kr ke update kr do
            // warna idx of ai mein i daal do
            // pehle wo -1 tha to ab wahan i update kr do, aona to itna hi kaam hain bhai

            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
        // to ab jab maine logic likh liya hain apne code ka to hum kya karenge
    }

    // maan lijiye ki mereko minidx mila hi nhi aur main capital n (N) tak pahuch gaya
    // tab to mujhe cout -1 krna hi padega

    // basically n tak nhi, minidx mera INT_MAX hi raha aur mera update hi nhi hua tab to mujhe -1 update krna hi padega

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}