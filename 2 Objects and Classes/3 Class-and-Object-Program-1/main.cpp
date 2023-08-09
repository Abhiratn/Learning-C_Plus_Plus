#include <iostream>
#include <string>
using namespace std;

class Employee{
int id;
int age;
char name[25];
public:
int salary;
void get_data(void){
  cout << "Enter Id:"<<endl;
  cin>>id;
  cout<<"Enter Name:"<<endl;
  cin>>name;
  cout<<"Enter Age:"<<endl;
  cin>>age;
  cout<<"Enter Salary:"<<endl;
  cin>>salary;
}
void display_data(void){
  cout<<"\nID   :"<<id<<endl;
  cout<<"\nName :"<<name<<endl;
  cout<<"\nAge :"<<name<<endl;
  cout<<"\nSalary :"<<salary<<endl;
}
};
int main(){
// first object e1 declared of Employee class
// Second object e2 declared of Employee class  
  Employee e1, e2;

  cout <<"\nEnter 1st Employee Basic Information:"<<endl;
//object e1 calls member function get_data()  
  e1.get_data();

  cout <<"\nEnter 2nd Employee Basic Information:"<<endl;
//object e2 calls member function get_data()  
  e2.get_data();

  cout <<"\n1st Employee Basic Information:"<<endl;
//object e1 calls member function display_data()  
  e1.display_data();

  cout <<"\n2nd Employee Basic Information:"<<endl;
//object e2 calls member function display_data()
  e2.display_data();
}