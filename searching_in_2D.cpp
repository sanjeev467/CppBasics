#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // ab print karane ke liye

    cout << "Matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; // cout isliye taaki har ek row ek nai line pe print ho sake
    }

    // ab hume ek element ko dhundhna hain
    // wo element x hain

    int x;
    cin >> x;
    // ab hum ek variable le lete hain flag jo hume batayega ki
    // humari matrix me x elemenrt hain ki nhi to ise initially false mark kr dete hain

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << " "; // coordinate print kra deneg x ele ki row aur col no
                // agar ye x mil gaya to hum flag ko true kr denge
                // kyuki variable mil gaya na
                flag = true;
            }
        }
    }

    // ab x dhundhne ke liye raverse krte hain apni matrix se yani array se

    // end mein check kr lete hain hain ki hume variable mila ya nhi
    // agar element mil gaya to flag ki value true hogi
    // to niche if wala block hoga wo execute hoga

    if (flag)
    {
        cout << "Element is found\n";
    }
    else
    {
        cout << "Element not found\n";
    }

    return 0;
}