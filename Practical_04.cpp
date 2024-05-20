// WAP a program to that accept age in years from user as input and display his age in month and day:
# include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age :";
    cin>>age;
    cout<<"Your age in month :"<<age*12<<endl;
    cout<<"Your age in days :"<<age*365<<endl;
    return 0;
}