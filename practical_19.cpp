// write any multi-level program where drive class can acess base class and super drive class .even try to make relation between drivw class and super drive class
# include<iostream>
using namespace std;

class electronic_device{
    public:
    void start_button(){
        cout<<"push to start"<<endl;
    }
    void stop_button(){
        cout<<"push to stop"<<endl;
    }
    void current(){
        cout<<"Current pass successful"<<endl;
    
    }
};
class laptop : public electronic_device{
    public:
    void portable(){
        cout<<"you can move it"<<endl;
    }
    void lightweight(){
        cout<<"it is light in weight"<<endl;
    }
};
class moblie : public laptop{
    public:
    void charge_able(){
        cout<<"you can charge it"<<endl;
    }
};
int main(){
    moblie mydevice;
    mydevice.start_button();
    mydevice.current();
    mydevice.portable();
    mydevice.lightweight();
    mydevice.charge_able();
    mydevice.stop_button();
    return 0;
}