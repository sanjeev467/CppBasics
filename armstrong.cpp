#include<iostream>
using namespace std;
#include<math.h> //for the pow func

int main(){

    int n;
    cin>>n;


    int sum=0;
    int originaln = n;
    while(n>0){
        int lastdigit = n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }

    if(sum==originaln){
        cout<<"Armstrong No"<<endl;
    }
    else{
        cout<<"Not armstrong"<<endl;
    }

    return 0;
}