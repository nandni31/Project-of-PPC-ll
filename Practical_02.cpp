// WAP to perform calculator using class and function.
# include <iostream>
using namespace std;

class calculator{
    public:
    float add (float a, float b){
        return a+b;
    }
    float subtract (float a, float b){
        return a-b;
    }
    float multiply(float a, float b){
        return a*b;
    }
    float divide (float a, float b){
        if (b!=0){
            return a/b;
        }else{
            cout<<"not valid for division"<<endl;
        }
    }

};

int main(){
    calculator calc;
    float num1,num2;
    char op;
    cout<<"enter first number : ";
    cin>>num1;
    cout<<"enter operator(+,-,*,/) : ";
    cin>>op;
    cout<<"enter second number : ";
    cin>>num2;

    switch(op){
        case '+' : cout<<"Result :"<<calc.add(num1,num2)<<endl;
                    break;
        case '-' : cout<<"Result :"<<calc.subtract(num1,num2)<<endl;
                    break;
        case '*' : cout<<"Result :"<<calc.multiply(num1,num2)<<endl;
                    break;
        case '/' : cout<<"Result :"<<calc.divide(num1,num2)<<endl;
                    break;
        default : cout<<"Invalid operator ! "<<endl;                                    
    }

    return 0;
}