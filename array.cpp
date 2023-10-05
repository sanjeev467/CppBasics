// #include <iostream>

// using namespace std;

// int main()
// {
//     int array[4] = {10, 20, 30, 40};

//     cout << array[3] << endl;

//     return 0;
// }

// aise upar hum khud initialize kr rhe hain array

// what if hume user se krwana ho initialize array

#include <iostream>

using namespace std;

int main()
{
    int n;    // pehle hum integer n banayemge
    cin >> n; // then user se size le lenge jo ki n represent kr rha hain

    int array[n]; // yahan hum apna array declare krenge jisme user size dega array ka

    // ab hum user ko bolenge ki array ke elememts ko input do
    // uske liye for loop use krenge

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // ab humne user se jo liya hain use output kra denge

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
