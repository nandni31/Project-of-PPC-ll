// WAP that accepts numbers from keyword and find its factorial.
# include <iostream>
using namespace std;

int main(){
    int number,fact=1;
    cout<<"enter any positive number :";
    cin>>number;
    for(int i=1;i<=number;i++){
        fact*=i;
    }
    cout<<"Factorial of number is :"<<fact;
    return 0;
}