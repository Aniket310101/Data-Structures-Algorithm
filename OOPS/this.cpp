# include <iostream>
using namespace std;

class Student{
    public:    //ACCESS MODIFIER   // IF PRIVATE YOU CAN ACCESS ONLY INSIDE THE CLASS
        int age;
        int rollno;

        Student(int age, int rollno){             // Parameterized Constructor
             this->age = age;
             this->rollno = rollno;
        }

        void display(){
            cout<<age<<" "<<rollno<<endl;
        }

};

int main(){

    // STATIC OBJECTS
    Student s1(30,123);
    Student s2(22,512);

    //DYNAMIC OBJECTS
    Student *s6 = new Student(56,768);

    s1.display();
    s2.display();
    (*s6).display();

    return 0;
}