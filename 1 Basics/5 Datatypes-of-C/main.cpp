#include <iostream>
using namespace std;

int main(){
//variables and datatypes
int a = 1;
short int b = 2;
long int c = 3;
float d = 4.0;
double e = 5.0;
long double f = 6.0;
bool g = true;
char h = 'a';
wchar_t i = 'b';
//multiple declerations
int j,k,l;
j = 7;
k = 8;
l = 9;
//constant
const float pi = 3.1415926;
//Typecasting
char m = 'c';
int n = static_cast<char>(m);
//or int n = int(m);


cout << a << b << c << "integers" << endl;
cout << d << e << f << "floats" << endl;
cout << g << "bools" << endl;
cout << h << "chars" << endl;
cout << i << "wide character" << endl;
cout <<j << k << l << "multiple declared" << endl;
cout << pi << "constants" << endl;
cout << m << endl;
cout << n << endl;
return 0;
}
