#include<iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
    private:
    int age;
    public:
    Student(int r,int a){
        cout<<"this : "<<this<<endl;
        cout<<"constructor 3 called"<<endl;
        this->rollNumber=r;
        this->age=a;
    }
        void display(){
        cout<<age<<" "<<rollNumber<<"\n";
    }


};
int main(){
    Student s1(10,20);
    s1.display();
    cout<<"address of s1:"<<&s1<<endl;
}