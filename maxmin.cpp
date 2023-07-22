// to find max and min
#include <iostream>
#include <climits> // isse int max mein max integer aa jata hain aur int min mein min integer

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int maxNO = INT_MIN; // to hum maxNO ko int_min de denge to koi bhi value jaise hi isse badi hogi to himara maxNO jo hai update h jayega
    int minNo = INT_MAX;

    // hum INT_MAX aur INT_MIN kyu de rhe hain kyuki hum yaha pe loop kr rhe hain hain aur jaise hi koi no maximum se bada milta hain ya min se kam to hum usko update kr denge

    for (int i = 0; i < n; i++)
    {
        maxNO = max(maxNO, array[i]); // ye jo max use kiya hain humne ye built in fun hain isse agar jo brackets mein values hain unme se jo bhi bada hoga wo maxNo ko allocate ho jayengi
        minNo = min(minNo, array[i]);
    }

    cout << maxNO << " " << minNo << " " << endl;

    return 0;
}