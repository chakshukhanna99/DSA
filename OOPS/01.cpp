#include<iostream>
using namespace std;
#include "student.cpp"
int main(){
    Student s1;
    s1.age=22;
    s1.rollNo=24;

cout<<s1.age;
    Student *s6 = new Student;
    (*s6).age=24;
    s6->age=24;
    cout<<s6->age;
}
//access modifier pub private protected b default private