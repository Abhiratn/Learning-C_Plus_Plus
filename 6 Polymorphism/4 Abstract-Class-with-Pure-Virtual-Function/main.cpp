#include <iostream>
#include <cstring>
using namespace std;
//Abstract class having pure virtual function
class Faculty{
protected:
int facultyId;
char facultyName[25];
char facultyType;
public:
//pure virtual fuction in parent class
virtual float calculateSalary() = 0;
virtual void showDetails() = 0;
};
class RegularFaculty:public Faculty{
float basic, da, hra, tax;
public:
RegularFaculty(int id, char name[]){
  facultyId = id;
  strcpy(facultyName,name);
  facultyType = 'R';
}
void setSalaryParameters(float b, float d, float h, float t){
  basic = b;
  da = d;
  hra = h;
  tax = t;
}
//child class function
float calculateSalary(){
  return ((basic+da+hra)-tax);
}
void showDetails(){
  cout<<"\n ID: "<<facultyId;
  cout<<"\n Name: "<<facultyName;
  cout<<"\n FacultyType: Regular";
}
};
class GuestFaculty:public Faculty{
int noofLectures;
float perLectureRemuneration;
public:
GuestFaculty(int id, char name[]){
  facultyId = id;
  strcpy(facultyName,name);
  facultyType = 'G';
}
void setSalaryParameters(float nol, float plr){
  noofLectures = nol;
  perLectureRemuneration = plr;
}
//child class function
float calculateSalary(){
  return (noofLectures*perLectureRemuneration);
}
void showDetails(){
  cout<<"\n ID: "<<facultyId;
  cout<<"\n Name: "<<facultyName;
  cout<<"\n FacultyType: Guest";
}
};
int main(){
  float sal;
  Faculty *pFaculty;
  RegularFaculty rFaculty(1,"Ram");
  GuestFaculty gFaculty(2, "Shyam");
  rFaculty.setSalaryParameters(1500, 550.65, 250.5, 120);
  // Assigning the address of child class object into parent class pointer
  pFaculty = &rFaculty;
  // Invocation of calculateSalary() function with parent class pointer
  sal=pFaculty->calculateSalary();
  // Invocation of showDetails() function with parent class pointer
  pFaculty->showDetails();
  cout<<"\n Salary: "<<sal<<endl;
  gFaculty.setSalaryParameters(20, 150.50);
  // Assigning the address of child class object into parent class pointer
  pFaculty = &gFaculty;
  // Invocation of calculateSalary() function with parent class pointer
  sal=pFaculty->calculateSalary();
  // Invocation of showDetails() function with parent class pointer
  pFaculty->showDetails();
  cout<<"\n Salary: "<<sal<<endl;
}