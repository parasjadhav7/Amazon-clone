#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    // Constructor
    Student() {
        name;
        roll; 
        cout << "Constructor is called!" << endl;
    }

    void insert(){
        cout<<"enter the student name:"<<endl;
        cin>>name;
        cout<<"roll no:"<<endl;
        cin>>roll;
    }

    // Member function
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor is called!" << endl;
    }
};

int main(){
    Student s1;
    s1.insert();
    s1.display();
}


