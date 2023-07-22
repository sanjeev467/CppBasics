#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // ab hum kya karenge yahan pe ki sabse pehle for loop laga denge start hoga 1 se jaise ki hum 0th element se start
    // nhi karenge hum uske baad wala element se start karenge jo 1st index pe hoga usse start karenge aur ye chalega n tak

    for (int i = 1; i < n; i++)
    {
        // jo humara current hai uske liye alag variable banate hain jisme hum current no store kr rahe honge
        // to isme hum daal denge arr of i

        int current = arr[i];

        // aur ek aur variable bana lete hain j jo ki start hoga i-1 se
        int j = i - 1;

        // to humara jo current wala jo no hain usse pehle wale indexes pe bhi nos hain usko compare karenge
        // ki kya koi arr of j more than hain humare current se
        // agar haan to hum usko move kr denge aage ek position se ---> arr[j+1]= arr[j]; aur uske pehle wale element pe jayenge to uske liye kr denge j--
        // to yahan ye cheez dhyan rakhni hogi ki kahi j-- krte hue j ki value 0 se kam na ho jaye to uske cond dal dete hain ki j>=0

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // aur jab hum ye check kr lenge ki humnse jo saare no humare current no se jyada hain
        // hum unko 1 -1 position se aage kr diya ab array of j+1 pe daal denge hum apna current;
        // yahan pe j+1 isliye kr rhe hain kyuki jab while wale loop mein j-- hua hoga to j jis pos pe hoga tu hume uske aage wale pos pe apna current add krna hoga
        // to isse ho jayega humara arr sort

        arr[j + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}