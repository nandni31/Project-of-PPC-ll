// WAP in c++ base on single inheritance

# include<iostream>
using namespace std;

class vehicle{
    public:
    void start(){
        cout<<"Vehicle Started..."<<endl;
    }
    void stop(){
        cout<<"Vehicle Stoped..."<<endl;
    }
};
class fortuner : public vehicle{
    public:
    void speed(){
        cout<<"200km/h"<<endl;
    }
};

int main(){

    fortuner myCar;
    myCar.start();
    myCar.speed();
    myCar.stop();

    return 0;
}
