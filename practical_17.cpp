// Perform inline function function in c++ by using class and object. Its is mandatory to use keyword and inline function.

// #include <iostream>
// using namespace std;

// class myClass|{
//     private:
//     int num;

//     public :
//     myClass(int n):num(n){}
//     inline int getNum() const{
//         return num;
//     }
//     friend inline void displayNum(const myClass & obj);
// };
// inline void displayNum(const myClass &obj){
//     cout<<"friend function accessing private number:"<<obj.num<<endl;

// }
// int main(){
//     myClass obj(10);
//     cout<<"inline member function output:"<<obj.getNum()<<endl;
//     displayNum(obj);
//     return 0;
// }

#include <iostream>
using namespace std;

class myClass {
private:
    int num;

public:
    // Constructor declaration
    myClass(int n);

    // Inline member function to get the value of num
    inline int getNum() const {
        return num;
    }

    // Declaration of friend function to access private member num
    friend inline void displayNum(const myClass &obj);
};

// Definition of constructor
myClass::myClass(int n) : num(n) {}

// Definition of friend function to display private member num
inline void displayNum(const myClass &obj) {
    cout << "Friend function accessing private number: " << obj.num << endl;
}

int main() {
    // Creating object of myClass with value 10
    myClass obj(10);

    // Calling inline member function to get the value of num
    cout << "Inline member function output: " << obj.getNum() << endl;

    // Calling friend function to display the value of private member num
    displayNum(obj);

    return 0;
}
