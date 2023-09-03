```cpp
class Student{
    public:
    int age;
    int rollNo;
};
```


```cpp
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
```


practice

#### Which of these statements is used to allocate memory for an object dynamically ?


new

#### Which of the following is/are a valid statement(s) to create an object of class Bird in C++ ?


Bird *b = new Bird;

Bird b;

```other
class Car{
    public : 
    int price;
};

int main() {
    Car c; 
    //Figure out the correct statement to set the price of the car object referred to by c to “10000”
}
```


c.price=10000;

The syntax for accessing the data member or member function of the class using object is : OBJECT_NAME.MEMBER_NAME, so the answer for this is c.price=10000.

```other
#include <iostream>
using namespace std;

class Student {
    int rollNumber;
};

int main() {
    Student s;
    cout << s.rollNumber;
}
```


Since rollNumber is a private member of Student class, so compilation error will be there as we are trying to access it outside of the class.

```other
#include <iostream>
using namespace std;

class Shape{
    public : 
    int height;
    int width;
};

int main() {
    Shape *s = new Shape();
    s -> height = 1;
    cout << s -> height;
}
```


1

When an object of the class is  created dynamically, the data members are accessed using the following syntax : object->member_name, so the answer for this is 1.

#### Which statement is not true in C++ language ?


A private member of a class cannot be accessed by the functions of the same class.

Shape *s = nw Shape();

s->height=1;

(*s).  instead of deref and  == s->

**getters and setters**

```cpp
class Student{
    public:
    int age;
    int rollNo;
};
```


```cpp
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
```


constructors a default constructer is called whenever we make an object we can call a constructor by ourself tooo we can call parametrized constructor too

```cpp
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
```


```cpp
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
```


some questions

```other
#include <iostream>
using namespace std;

class Box{
    public :
    int width;
    int height;
    int length;
    void volume(){
        cout << length * width * height;
    }
};

int main() {
    Box b;
    b.height = 5;
    b.width = 4;
    b.volume();
}
```


garbage value and no value assgn to h

```other
#include <iostream>
using namespace std;

class Student{
    public :
    char *name;
    int rollNo;
    Student(int num){
        rollNo = num;
    }

    void print(){
        cout << rollNo;
    }
};

int main() {
    Student s(12);
    s.print();
}
```


12

####Constructor is called when an object is created, here when we create a Student object, corresponding student object is created and rollNo is assigned to 12. So output is 12.


```other
#include <iostream>
using namespace std;

class Student{
    public :
    char name;
    int rollNo;

    Student(int num){
        rollNo = num;
    }

    void print(){
        cout << name << " "  <<  rollNo;
    }
};

int main() {
    Student *s = new Student();
    s -> name = 'A';
    s -> rollNo = 15;
    s -> print();
}
```


####There is Compilation error - “constructor Student() is undefined” because the default constructor is available only till the point we don’t create our own constructor. So Student class has only one constructor which require roll number as argument, hence we should pass integer as argument while creating any Student object.


copy constructor

Student s2(s1);

    Student *s = new Student(20,2001);

s3->display();

Student s4(*s3)

Student *s5=new Student(*s3)

Student *s5=new Student(s)

s2=s1

student s2(2000,21)

student s2(3000,22)

s2=s1;

destructor

deallocate object memory

same name as our class

no return type

no input argument.  //tilda

~student(){

}

Student *s5=new Student

delete s3
----

Student s1;   // 1 

Student s2(100);  // 2

Student s3(20,20). // 3

Student s4(s1).  // copy constructor

s1= s2.  /// copy assignment operator

Student s5 = s4;   // student s5(s4)
----

 

```other
1. It is invoked when object goes out of the scope
2. Like constructor, it can also have parameters 
3. It can be declared in private section
4. It bears same name as that of the class and is preceded by tilde sign. 
```


2 is in correct

```other
1. DEMO D2(D1); //  Here D1 is an already created object of class  DEMO
2. D2 = D1; // Here D1, D2 are already created objects of class DEMO
```


in 1 copy con will be called

```other
class Pair{
  public :
  int first;
  int second;
};

int main(){

  Pair *p1 = new Pair;
  Pair p2;
}
```


p2=*p1;

```other
#include<iostream>
using namespace std;

class Pair{
      public :
      int first;
      int second;
};

int main(){

      Pair p1;
      p1.first = 10;
      p1.second = 20;
      Pair p2;
      p2 = p1;
      cout << p2.first << " " << p2.second << endl;
}
```

