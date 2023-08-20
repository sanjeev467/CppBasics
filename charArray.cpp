#include <iostream>
using namespace std;

int main()
{

    char arr[100] = "apple";
    // ab muhe iss character array ka ek ek word access krna hian wo kaise karenge?
    // loop laga ke

    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }

    return 0;
}