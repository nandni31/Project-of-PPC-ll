// WAP  to print number ,alphabets and special character on the output screen.
#include <iostream>
using namespace std;

int main (){
    cout<<"Numbers :-";
    for(int i=1 ; i<=9 ; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Alphabets :";
    for(char i='A'; i<='Z';i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Special Character :";
    for(char i=33;i<=47;i++){
        cout<<i<<" ";
    }

    return 0;
}