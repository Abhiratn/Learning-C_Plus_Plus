#include <iostream>
#include <cstring>
using namespace std;

class Student{
    int roll;
    char name[30];
    public:
    Student(int x, char y[]){       //paramerterized constructor
       roll = x; 
       strcpy(name, y);
    }      
    Student(){                 //normal constructor
        roll = 100;
        strcpy(name,"y");
    }

    void input_data(){
        cout<<"\n Enter roll no:";
        cin>>roll;
        cout<<"\n Enter name:";
        cin>>name;
    }
    void show_data(){
        cout<<"\n roll no:"<<roll;
        cout<<"\n name:"<<name;
    }
};

int main(){
    Student s(10,"z");
    s.show_data();
    return 0;
}