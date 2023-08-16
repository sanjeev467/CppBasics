#include <iostream>
using namespace std;

// ek finction banayenge printArray naam ka
//  iss function ke andar pehli cheez hum apna array pass karenge
//  pehla parameter array hain int array[]
//  2nd muhhe iska size bhi bata do int size

void printArray(int arr[], int size)
{
    // print the array

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Printing DONE" << endl;
}

int main()
{

    int n = 15;
    printArray(first, 15);
    //        array name, array size

    return 0;
}