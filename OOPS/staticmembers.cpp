#include<iostream>
using namespace std;

class Student {
       static int totalStudents; // This is a static member variable to count total students
public:
    int rollNumber;
    int age;

    // static int totalStudents; // This is a static member variable to count total students

    Student() {
        totalStudents++; // Increment the totalStudents count when a new Student object is created
    }
  int getRollNumber() {
        return rollNumber;
    }

    static int getTotalStudents() {
        return totalStudents;
    }
};

int Student::totalStudents = 0; // Initialize the static member variable

int main() {
    Student s1; // Create a Student object, which increments totalStudents
    Student s2; // Create another Student object, which increments totalStudents again
    // cout << Student::totalStudents << endl; // Print the totalStudents count (it should be 2 in this case)
      cout << Student::getTotalStudents() << endl; 
}
