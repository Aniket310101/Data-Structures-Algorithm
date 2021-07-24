# include <iostream>
# include "classParent.cpp"  //Accessing class from another file
using namespace std;

class Student{
    public:    //ACCESS MODIFIER   // IF PRIVATE YOU CAN ACCESS ONLY INSIDE THE CLASS
        int age;
        int rollno;
    private:
        int code;
};

int main(){

    // STATIC OBJECTS
    Student s1;
    Student s2;
    Student s3, s4, s5;

    //DYNAMIC OBJECTS
    Student *s6 = new Student;

    Parent p1;
    p1.code = 560;
    p1.name = "Avnish";
    
    s1.age = 23;
    s1.rollno = 56;

    // (*s6).age = 15;
    // (*s6).rollno = 115;
    s6->age = 12;
    s6->rollno = 112;

    cout<<s1.age<<" "<<s1.rollno;
    cout<<endl<<p1.code<<" "<<p1.name;

    return 0;
}