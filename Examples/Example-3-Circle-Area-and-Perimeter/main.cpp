#include <iostream>
using namespace std;
#define PI 3.14
class Area{
    int r;
    public:
    void get_data(){
        cout<<"Enter Radius of circle: ";
        cin>>r;
    }
    void area_result(){
        cout<<"Area of Circle is : "<<PI * r* r <<endl;
    }
    void peri_result(){
        cout<<"Perimeter of Circle is : "<<2 * PI * r<<endl;
    }
};

int main(){
    Area a;
    a.get_data();
    a.area_result();
    a.peri_result();
}