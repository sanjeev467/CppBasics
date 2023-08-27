#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    cout << *arr << endl;

    // main yahan pe pointer bhi bana sakta hoon

    int *ptr = arr; // isme main arr ka addresss nhi store kr rha hoon kyuki ye jo variable hain arr
    // ye store kr rha hain already humara array ka address or 0th element ka address

    // ab mujhe pointer ki help se pura array print karwana hain hain to....\

    for ( int i = 0; i < 4; i++)
    {
        cout << *ptr << endl;
        ptr++;
        // ye 10 pw access krega aur 10 ko print krega aur phir
        // ptr++ kren se wo 4 bytes aage chala jayega 4 bytes aage use milega humara 20
        // 4 bytes aage kyu jayega kyuki integer ka size 4 bytes hota hain to 20 4 bytes aage store hoga address mein
    }

    return 0;
}