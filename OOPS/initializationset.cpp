class Student{
    public:
    int age;
    const int rollNumber;
    int &x; //age ref variable initialization k sath

    Student (int r,int a):rollNumber(r),age(a),x(this->age){
        // rollNumber=r;
    }
};
int main(){
    Student s1(101,20);
    s1.age=20;
    // s1.rollNumber=101;
}