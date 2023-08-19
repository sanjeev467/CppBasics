// Problem
// Given a square matrix A & its number of rows (or columns) N, return the
// transpose of A.
// The transpose of a matrix is the matrix flipped over it's main diagonal,
// switching the row and column indices of the matrix.

// Constraints
// 1 <= N <= 1000

// Sample Input1
// A = [
// [1,2,3],
// [4,5,6],
// [7,8,9]
// ]
// N = 3

// Sample Output1
// A = [
// [1,4,7],
// [2,5,8],
// [3,6,9]
// ]

// Time complexity : O(N2)

// Space complexity : O(1), as no extra space for a new matrix was used

#include <iostream>
using namespace std;

int main()
{
    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        // i represent krta hain row ko
        // 3 ko hum replace kr sakte hain apne matrix ke size se jo ki hain n
        // to agar i ki value 0 hogi to hum 0th roq ko traverse kr rhe hain 1 hogi to 1 ko and so on

        // ab coloumn ke liye loop

        for (int j = i; j < 3; j++)
        {
            // humne i se kyu shuru kiya j ko, taaki row se humara jo
            // coloumn hain wo humesha bada rahe ti isse hum uri matrix ke elements ko traverse nhi karenge
            // hum sirf aone matrix ke diagonaly upper triabgle wale elements ko traverse krenge
            // aur hume sirf unhi elements ko swap krna hain

            // ek temporary variable banana hain jisme value store kr lenge A[i][j] ki

            // swap

            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

    // print

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}