#include<iostream>
using namespace std;

// print no upto 100 but not which are divisible by 3
int main(){

    for(int i = 1; i < 100; i++ ){

        if (i%3==0)
        {
            continue;

        }
        cout<<i<<endl;
    }




    return 0;
}