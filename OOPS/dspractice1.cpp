#include <iostream>
using namespace std;
#include <cstring>

class Student{
    public :
    char *name;
    int rollNo;
    int x;

    // Constructor 1
    Student(int num){
        rollNo = num;
        name = new char[10];
        strcpy(name, "abc");
        x=50;
    }

    // Constructor 2
    Student(int num, char *str){
        rollNo = num;
        name = new char[strlen(str) + 1];
        strcpy(name, str);

    }

    void print(){
        cout << name << " "  <<  rollNo << " "<<x;
    }
};

int main() {
    Student s1(101);
    s1.print();
    char str[] ="xyz";
    Student *s2 = new Student(150, str);
    s2 -> print();
}