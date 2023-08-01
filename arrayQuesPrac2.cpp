// Problem:
// Given an unsorted array A of size N of non-negative integers, find a continuous subarray
// which adds to a given number S.

// Constraints:
// 1 N 105
// 0 Ai 1010

// Example:
// Input: n = 5, s = 12
// a[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements from 2nd position to 4th position is 12.

#include "bits/stdc++.h"

using namespace std;

int main()
{

    // sabse pehle hum n aur s le lenge no of elements aur sum jo hume chahiye
    int n, s;
    cin >> n >> s;

    // phir n size ka array declare karenge

    int a[n];
    // phir array ke inputs le lenge

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // iske baad hum kuch apne variables declare karenge
    //  basically ye mere iterators hain 2 pointer wale

    int i = 0, j = 0, st = -1, en = -1, sum = 0;

    // st aur en mera final answer store kr rhe honge
    // aur sum variable jo i se j tak ka sum store kr rha hoga

    // ab mujhe sabse pwhlw j ko kahan tak daudana hain
    // jab tak mera sum+a[j]<=s na ho jaye

    while (j < n && sum + a[j] <= s)
    {
        // j n se bada na ho jaye isliye while loop men j<n likha hain
        sum += a[j]; // pehle maine sum mein add krdiya kyuki mujhe update bhi to krna hain elements matlab sum variable ko
        j++;
        // ab mera j aisi position pe aa chuka hain jahan pe sum jo variable hain na wo greater than ho gaya hain ya phir equal to s ho chuka hain
    }

    // ab main check krunga mera jo sum hain st aur end ke sum ke barabar ho chuka hain
    // to main utput kr dunga cout<i+1 kyuki mujhe 1 index se output dena hain aur <<j jo jo hain inclusive nhi hain iss baar
    // aur main return 0 kr dunga ki bhaiya dekho ki agar if wali cond satisfy ho gayi to aage ka code mat padhna yahin se return kr jaana

    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    // agar ye wali cond satisfy nh krti to main kya krunga
    // hum phir apna while loop lagayenge

    // j<n hona chahiye
    // sabse pehle sum mein add kr denge a[j] ---> jo mera 2nd pointer hain wo to include ho ja sum mein
    // aur ohir hum check karenge kya wo sum wo s se bada to nhi hain
    // aur wo s se bada hua to i wale pointer jo ki starting pointer hain usko aahe badhate rahenge jab tak
    // mera sum <= s na ho jaaye

    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            // jab sum s se bada hain tak tak kya karte raho
            // tum sum me se sabse pehle to minus kr do a[i] aur mere i ko plus kr do i++
            sum -= a[i];
            i++;
        }

        // ab hum check karenge agar sum barabar ho gaya s ke
        // to st mein i+1 daal do aur en mein j +1 daal do
        // 1 pe indexing ke wajah se hum i+1 aur j+1 kr rhe hain warna hum i, j krte
        // aur yahin se break kr jao

        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }

        // aur baad mein aone j ko update kr denge kyuki while loop laga hua hain warna infinite loop ban jayega ye
        j++;
    }

    cout << st << " " << en << endl;

    return 0;
}