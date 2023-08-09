#include <iostream>
using namespace std;
class Area{
    int a;
    public:
    void get_data(){
        cout<<"Enter Side of square : ";
        cin>>a;
    }
    void area_result(){
        cout<<"Area of rectangle is : "<<a*a<<endl;
    }
    void peri_result(){
        cout<<"Perimeter of rectangle is : "<<4*a<<endl;
    }
};

int main(){
    Area a;
    a.get_data();
    a.area_result();
    a.peri_result();
}