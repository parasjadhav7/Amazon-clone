#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    string age;
    string dept;
    


    Student(string n,string a, string d){
        name = n;
        age = a;
        dept = d;
        
    }
    
    void getinfo(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"dept :"<<dept<<endl;
        
    }

    
};

int main(){
    Student s1("Paras jadhav" , "19" , "Information Techlonogy");
    s1.getinfo();
    return 0;
}