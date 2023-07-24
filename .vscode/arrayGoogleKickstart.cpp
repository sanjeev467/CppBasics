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

    // iske baad hum kya karenge ki jo variables jo declare kiye the ya discuss kiye the to jo humara final ans hoga uska ans naam se variable bana liya
    int ans = 2;

    // jo humara previous common difference tha uska naam humne pd rakha tha

    int pd = a[1] - a[0]; // isko humse initially a[1] - a[0] se initialize kr liya

    // uske baad jo while loop ka iterator hoga usko declare kr lenge

    int j = 2; // j 2 isliye hoga kyuki 1 tak ki kahani to humne pehle dekh li hain int pd mein jo value dekhi hain

    // aur jo current length hogi including A[i] wali uska naam hum cirr se daal denge

    int curr = 2;

    // ab while loop lagayenge

    while (j < n)
    {
        // har element ke liye laga rhe hain j<n tak
        // aur update krte hain j++ mein
        // so hume kaun si condition check karenge ki, kya mera curr common diff
        // mere previous comm diff ke barabar hain to hum kya karenge simply curr++ kr denge

        //  current comm diff kya hain mera a[j] - a[j-1]

        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        // agar aisa nhi hain to aap update krdo mere previous comm diff ko pd = a[j] - a[j - 1];
        // aur mere curr ko 2 se update krdo kyuki meri streak break ho gayi hain na
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2; // kyuki streak kam ho gayi na
        }

        // itna karne ke baad jo bhi mera curr hain na agar wo ans se bada hua to wo ans mein dalna chahiye

        ans = max(ans, curr);

        j++;
    }

    // ab cout kr denge ans ko

    cout << ans << endl;

    return 0;
}
