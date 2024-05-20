// WAP to find Area of Rectangle by using default and parameterize constructor.
# include <iostream>
using namespace std;

class Rectangle{
    private:
    double length;
    double breadth;

    public:
    Rectangle (double l, double b){
        length = l;
        breadth = b;
    }
    double calculateArea(){
        return length*breadth;
    }
}obj1(10,6),obj2(13,6);

int main(){
    cout<<"Area of Rectangle1 :"<<obj1.calculateArea()<<endl;
    cout<<"Area of Rectangle2 :"<<obj2.calculateArea();

    return 0;
}