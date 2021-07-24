# include <iostream>
using namespace std;

class Student{
    public:    //ACCESS MODIFIER   // IF PRIVATE YOU CAN ACCESS ONLY INSIDE THE CLASS
        int age;
        int rollno;

        Student(int r){             // Parameterized Constructor
             cout<<"Constructor called! "<<r<<endl;
        }

};

int main(){

    // STATIC OBJECTS
    Student s1(30);
    Student s2(22);

    //DYNAMIC OBJECTS
    Student *s6 = new Student(56);

    s1.age = 23;
    s1.rollno = 56;

    // (*s6).age = 15;
    // (*s6).rollno = 115;
    s6->age = 12;
    s6->rollno = 112;

    cout<<s1.age<<" "<<s1.rollno;

    return 0;
}