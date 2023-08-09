#include <iostream>
#include <cstring> // Instead of <string.h>
using namespace std;

class MyString {
private:
    char str[80]; // Character array to store the string
public:
    MyString() {
        strcpy(str, "ttt"); // Default constructor, initializes the string with "ttt"
    }
    MyString(char s[]) {
        strcpy(str, s); // Parameterized constructor, copies the given string to str
    }
    void display() {
        cout << str << endl; // Display the string
    }
    MyString operator+(MyString); // Overloaded + operator for string concatenation
};

MyString MyString::operator+(MyString ss) {
    MyString temp; // Temporary object to store the result
    if (strlen(str) + strlen(ss.str) < 80) { // Check if the combined length of strings is within the size limit
        strcpy(temp.str, str); // Copy the current string to temp
        strcat(temp.str, ss.str); // Concatenate ss.str to temp
    } else {
        cout << "string overflow" << endl; // Display an error message if the combined length exceeds the size limit
        temp = 0; // Assign an empty string to temp
    }
    return temp; // Return the concatenated string
}

int main() {
    MyString s1("Operator"); // Create an object s1 and initialize it with "Operator"
    MyString s2("Overloading"); // Create an object s2 and initialize it with "Overloading"
    MyString s3; // Create an object s3
    s1.display(); // Display the string in s1
    s2.display(); // Display the string in s2
    s3 = s1 + s2; // Concatenate s1 and s2 using the overloaded + operator and assign the result to s3
    s3.display(); // Display the concatenated string in s3
    return 0;
}
