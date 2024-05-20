// WAP that demonstrate the use of arithmetic and assigment operators by getting two numbers from users.
# include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"enter first number :";
    cin>>num1;
    cout<<"enter second number :";
    cin>>num2;

    int sum = num1+num2;
    int differnce = num1-num2;
    int multiply = num1*num2;
    int quotient  = num1/num2;
    int remainder = num1%num2;

    cout<<"sum:"<<sum<<endl;
    cout<<"Differnce:"<<differnce<<endl;
    cout<<"Multiply:"<<multiply<<endl;
    cout<<"Quotient:"<<quotient<<endl;
    cout<<"Remainder:"<<remainder<<endl;
    
    return 0;
}