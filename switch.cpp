// #include<iostream>
// using namespace std;

// int main(){

    // char button;
    // cout<<"Input a character: ";
    // cin>>button;

//     if(button == 'a'){
//         cout<<"Hello!!"<<endl;
//     }
//     else if (button == 'b')
//     {
//         cout<<"Namaste!!"<<endl;
//     }
//     else if (button == 'c')
//     {
//         cout<<"Ciao!!"<<endl;
//     }
//     else if (button == 'd')
//     {
//         cout<<"Hola!!"<<endl;
//     }
//     else if (button == 'e')
//     {
//         cout<<"Salut!!"<<endl;
//     }
//     else{
//         cout<<"Im still learning more!!"<<endl;

//     }



//     return 0;
// }


// switch---->>

#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Input a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello!!"<<endl;
        break;
        case 'b':
        cout<<"Hola!!"<<endl;
        break;
        case 'c':
        cout<<"Namaste!!"<<endl;
        break;
        case 'd':
        cout<<"Ciao!!"<<endl;
        break;
        case 'e':
        cout<<"Salut!!"<<endl;
        break;

    default:  //in default if nothing matches the switch cases the code in default will be printed
    cout<<"Im still larning!!"<<endl;
        break;
    }
 return 0;

}
