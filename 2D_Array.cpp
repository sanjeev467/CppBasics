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

    cout << "Matrix is :\n ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl; // cout isliye taaki har ek row ek nai line pe print ho sake
    }
    return 0;
}