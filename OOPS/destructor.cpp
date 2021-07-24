# include <iostream>
using namespace std;

class Student{
    public:    //ACCESS MODIFIER   // IF PRIVATE YOU CAN ACCESS ONLY INSIDE THE CLASS
        int age;
        int rollno;

        Student(int a, int r){             // Parameterized Constructor
            age = a;
            rollno = r;
        }
        void display(){
            cout<<age<<" "<<rollno<<endl;
        }

        ~Student(){
            cout<<"Destructor Called!"<<endl;
        }

};

int main(){

    Student s1(10,100);
    cout<<"s1: ";
    s1.display();

    Student s2(20,200);     //COPY CONSTRUCTOR CALLED 
    cout<<"s2: ";
    s2.display();

    Student *s3 = new Student(21,334);
    cout<<"s3: ";
    s3->display();

    s1 = s2;  // Copy assignment Operator
    *s3 = s2;

    s1.display();
    s3->display();

    return 0;
}