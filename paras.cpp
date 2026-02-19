#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    int roll;


    public:
    Student(string n, int r){
        string name = n;
        int roll = r;
        cout<<"constructor is called :"<<endl;

    }

    void display(){
        cout<<"student name :"<<endl;
        cout<<"roll no :"<<endl;


    }
    ~Student(){
         cout << "Destructor is called!" << endl;
    }
};



