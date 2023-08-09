#include <iostream>
//#include <conio.h>
#include <cstring>
using namespace std;
class Student{
    int roll;
    char name[30];
    public:
    Student(){             //default constructor
        roll=10;
        strcpy(name,"x");
    }
    Student(Student&O){             //copy constructor
        roll=O.roll;
        strcpy(name,O.name);
    }

    void input_data(){
        cout<<"\n Enter Roll no.:";
        cin>>roll;
        cout<<"\n Enter Name:";
        cin>>name;
    }
    void show_data(){
        cout<<"\n Roll no.:";
        cout<<"\n Name:";
    }
};
int main(){
    Student s; //default constructor
    s.show_data();
    Student A(s);  //copy constructor
    A.show_data();
    //getch();
    return 0;
}
