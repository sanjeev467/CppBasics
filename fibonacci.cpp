#include <iostream>
using namespace std;

void fib(int n)
{

    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl; // yahan hum t1 ko print karwayege jo ki pehle 0 hoga phir 1 hoga and phir next term ke wajah se 0+1 hoga and so on chalta rahega
        nextTerm = t1 + t2; // ekbaar humne next term calculate kr liya ab hume t1 aur t2 ko aage badhana hain to...
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main()
{
    int n;
    cin >> n;

    fib(n); // yahan hum kuch return nhi krwa rhe isliye jo hum fun banayenge main fun ke upar use rturntype void denge

    return 0;
}