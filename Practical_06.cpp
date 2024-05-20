// WAP that to calculate area of circle ,square , rectangle and triangle using switch case statements.
# include<iostream>
using namespace std;

int main(){
    int choice ;
    double area,length,width,radius,base,height;
    cout<<"Choose 1. circle\n";
    cout<<"Choose 2. square\n";
    cout<<"Choose 3. rectangle\n";
    cout<<"Choose 4. triangle\n";
    cin>>choice;

    switch (choice){
        case 1 : cout<<"enter radius of circle :";
                    cin>>radius;
                    area = 3.14*radius*radius;
                    cout<<"area of circle :"<<area;
                    break;
        case 2 : cout<<"enter length of square :";
                    cin>>length;
                    area = length*length;
                    cout<<"Area of Square :"<<area;
                    break;
        case 3 : cout<<"enterr length & width of rectangle";
                    cin>>length>>width;
                    area = length*width;
                    cout<<"Area of Rectangle :"<<area;
                    break;
        case 4 : cout<<"enter base & height of triangle :";
                    cin>>base>>height;
                    area = 0.5*base*height;
                    cout<<"Area of triangle :"<<area;
                    break;
        default : cout<<"please select given option ";    

    }

    return 0;
}