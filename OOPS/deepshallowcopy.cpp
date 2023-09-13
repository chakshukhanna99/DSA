#include<iostream>
using namespace std;
class Student{
    int age;
    char *name ;

    public:
    Student(int age,char* name){    
//yhn prr jo age copy ho rhi h voh toh puri ho rhi h but jo array copy ho rha h vo copy hone
// ki jagah sirf uska address 0th index se copy ho rha h isko shallow copy kehte h 
//ideally purane vala array pura copy hona chahiye tha uske baad naya array
//aur uske baad name ko bolna chahiye tha point to the new array 

        this->age=age;
        // this->name = name;   isko hi bolte h shallow copy sirf array ka ref  first loc ka address
        //deep copy pura array copy
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void display(){
        cout<<name<<" "<<age;
    }
};
int main(){
    char name[]="abcd";
    Student s1(10,name);
    s1.display();
    name[3]='e';
    Student s2(20,name);
    cout<<"\n";
    s2.display();
    s1.display();
}