#include <iostream>
using namespace std;
#define MAX_SIZE 10

int n;
class Matrix {
  int item[MAX_SIZE][MAX_SIZE];

public:
  void get_Matrix(void);
  void display_matrix(void);
  Matrix add(Matrix m); // obj as argument return:pass by value
  void mul(Matrix &mat,
           Matrix m); // obj as argument:pass by reference and pass by vlaue
};
void Matrix::get_Matrix(void) {
  cout << "\n Enter the order of square(nXn):" << endl;
  cin >> n;
  cout << "\n Enter the element of matrix:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> item[i][j];
    }
  }
}
void Matrix::display_matrix(void) {
  cout << "\n The element of matrix is;" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << item[i][j] << "\t";
    }
  }
}
Matrix Matrix::add(Matrix m) {
  Matrix temp; // object temp of Matrix class
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      temp.item[i][j] = item[i][j] + m.item[i][j];
      return (temp); // return matrix object
    }
  }
}
void Matrix::mul(Matrix &mat, Matrix m){
  for(int i = 0; i<n; i++){
    for(int j=0; j<n;j++){
      mat.item[i][j]=mat.item[i][j]+item[i][j]*m.item[i][j];
    }
  }
}
int main(){
  Matrix X,Y,Result;
  cout<<"Matrix X :"<<endl;
  X.get_Matrix();
  cout<<"Matrix Y :"<<endl;
  Y.get_Matrix();
  cout<<"\n Addition of X & Y :"<<endl;
  Result=X.add(Y);
  Result.display_matrix();
  cout<<"\n Multiplication of X & Y :"<<endl;
  X.mul(Result,Y);
  Result.display_matrix();
}