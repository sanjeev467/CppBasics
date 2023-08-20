#include <iostream>
using namespace std;

int main()
{

    // largest word in a sentence
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];

    // sentence input lene ke liye hum ek specual function ka use karenge
    // cin.getline()
    // iske baad ek line hoti hain jo bahit jaruri hoti hain likhni cin.ignore()
    // ye hum isliye likhte hain jisse humara jo buffer ho wo clear ho jaye aage ka
    //

    cin.getline(arr, n);
    cin.ignore();

    // while loop use karenge iterate karne ke liye
    // to ek iterator rakhna padega int i = 0;

    int i = 0;

    // ab do var honge mere ek curr length aur ek max length jo word ki hain

    int currLen = 0, maxLen = 0;

    while (1) // 1 yaani true ki jb tak true hain tab tak chalte jao loop

    {

        // agar space aaya to kya karenge
        // hum if cond lagayenge
        // agar currlen badi hain max len se to main curLen daal duga maxLen meain

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
            }

            // humne cur length ko daal diya to hume curlen ko zero krna padega
            // kyuki jab space aa gaya to space ke baad ek naya fresh word shuru hoga na
            currLen = 0;
        }

        // agar mera space nhi hain, maan lo koi word aa rha hain, character aa rha hain
        // to currLen ++ krdo
        // ki bhai space nhi hain bas currlen increase hogi jo bhi mere word ki hain
        else

            currLen++;

        if (arr[i] == '\0')
        {
            break;

            i++;
        }
    }

    return 0;
}