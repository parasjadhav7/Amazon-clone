#include<iostream>
#include<fstream>
using namespace std;

class student{
    public:
    string name;
    int roll;

    void writeTofile(){
        ofstream("student.txt");
        file<<"name:"<<name<<endl;
        file<<"roll no:"<<roll<<endl;
        file.close();
    }

    void readfrom(){
        ifstream file("student.txt");
        file>>name>>roll;
        cout<<"name:"<<name<<endl;
        cout<<"roll no:"<<roll<<endl;
        file.close();
    }
};

int main(){
    student s;
    cout<<"enter name and roll";
    cin>>s.name>>s.roll;
    s.writeTofile();
    cout<<"data read from file";
    s.readfrom file();
    return 0;


}