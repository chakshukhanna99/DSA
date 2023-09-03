#include <iostream>
using namespace std;

class Student {
    public:
    int rollNumber;
    private:
    int age;
    public:
    //default constructor 
    Student(){
        cout<<"constructor called\n";
    }
    //parametrized constructor
    Student(int r){
        cout<<"constructor 2 called \n";
        rollNumber=r;
    }
    void display(){
        cout<<age<<" "<<rollNumber<<"\n";
    }
    int getAge(){
        return age;
    }
    void setAge(int a){
        age=a;
    }
};

int main() {
    Student s1;   //when we call it default constructor called
    // s1.Student();
    // Student(){

    // }
    // s1.age=24;
    s1.rollNumber=24;
    s1.setAge(18);
       cout<<"s1 age:"<<s1.getAge()<<endl;
    cout <<"s1 rollnumber:"<< s1.rollNumber;
    cout<<"\ndisplay function:\n";
    s1.display();
    Student *s6 = new Student;
    s6->setAge(35);
        s6->rollNumber=29;
        (*s6).display();

   cout<<"s6 age"<<s6->getAge()<<endl;
   cout<<s6->rollNumber;
   Student s4(28);
   s4.display();

}


//this holds the address of current variable