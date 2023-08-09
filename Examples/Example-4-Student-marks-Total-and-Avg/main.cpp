#include <iostream>
using namespace std;

class Marks{
    int a[3];
    int sum;
    float avg;
    public:
    Marks(){
        sum = 0;
        avg = 0.0;
    }
    void get_marks(){
        for(int i=0; i<3; i++){
        cout<<"Enter marks of subject: ";
        cin>>a[i];
        sum+=a[i];
        }
        avg =sum/3.0;
    }
    void display_total(){
        cout<<sum;
    }
    void display_avg(){
         cout<<avg;
    }
};

int main(){
    Marks student[5];
    for(int i=0; i<5; i++){
        cout<<"Enter the marks of "<<i+1<<" student"<<endl;
        student[i].get_marks();
    }
    cout<<"Roll No \tTotal \t\tAvg"<<endl;
    cout<<"**************************"<<endl;
    for(int i=0; i<5; i++){
        cout<<i+1<<"\t\t\t";
        student[i].display_total();
        cout<<"\t\t\t";
        student[i].display_avg();
        cout<<endl;
    }
}