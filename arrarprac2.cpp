#include <iostream>
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

    // array to declare krke uske inputs le liye
    // ab kya krna hain ki nikalna hain har kisi sub array ka sum

    //  so ek variable bana lete hain hain current naam ka jo ki sum store karega --> current sum

    int curr = 0;
    // outer loop
    for (int i = 0; i < n; i++)
    {
        // starting main currenty hona chahiye 0
        curr = 0;
        // ab inner loop jo lagega wo kya lagega

        for (int j = i; j < n; j++)
        {
            // ab hum kya karenge curr mein plus kr denge a of j a[j]
            curr += a[j]; // ab ise output krna hain
            cout << curr << endl;
        }
    }

    return 0;
}