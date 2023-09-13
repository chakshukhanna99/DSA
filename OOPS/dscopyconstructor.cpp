#include<iostream>
using namespace std;
class Student{
    int age;
     

    public:
   char *name ;
    Student(int age,char* name){    
        this->age=age;
        // this->name = name;   isko hi bolte h shallow copy sirf array ka ref  first loc ka address
        //deep copy pura array copy
        //int const &j;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void display(){
        cout<<name<<" "<<age;
    }
    Student(Student const &s){    //j k through we are not cpying & we are passing it by reference agr apa use krte h &j ;;pr agr cost & j toh j k through read but cant change 
        this->age=s.age;
        // this->name = s.name;   avoid this
        //dep copy
        this->name = new char[strlen(s.name)+1];
             strcpy(this->name,s.name);
    }
};
int main(){
    char name[]="abcd";
    Student s1(20,name);
    s1.display();

    Student s2(s1);
     s2.name[0]='x';
    cout<<"\n";
    s1.display();
    cout<<"\n";
    s2.display();

}