# include <iostream>
using namespace std;

class Student{
 
    private:
        int code;

    public:    //ACCESS MODIFIER   // IF PRIVATE YOU CAN ACCESS ONLY INSIDE THE CLASS
        int age;
        int rollno;
        void display(){
            cout<<age<<" "<<rollno<<" "<<endl;
        }
        int getCode(){  // Access private property outside the class
            return code;
        }
        void setCode(int c){ // Set the value of private property
            code = c;
        }
};

int main(){

    // STATIC OBJECTS
    Student s1;
    Student s2;
    Student s3, s4, s5;

    //DYNAMIC OBJECTS
    Student *s6 = new Student;

   
    s1.age = 23;
    s1.rollno = 56;
    s1.setCode(340);

    // (*s6).age = 15;
    // (*s6).rollno = 115;
    s6->age = 12;
    s6->rollno = 112;
    s6->setCode(540);

    s1.display();
    cout<<"Code: "<<s1.getCode()<<endl;
    (*s6).display();
    cout<<"Code: "<<(*s6).getCode()<<endl;

    return 0;
}