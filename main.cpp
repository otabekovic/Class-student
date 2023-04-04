#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class student{
private:
    string name;
    int age;
    int year;
public:
    student():name ("Null"), age(0),year(0){}
    student(string n,int a , int b): name(n),age(a),year(b){}
    void set_name();
    void set_age();
    void set_year();
    void get_name();
    void get_age();
    void get_year();
};
void student::set_name(){
    cout<<"Ism kiriting :";
    cin>>name;
}
void student::set_age(){
    cout<<"yosh kiriting :";
    cin>>age;
}
void student::set_year(){
    cout<<"yil kiriting :";
    cin>>year;
}
void student::get_name(){
    cout<<"Name :"<< name <<endl;
}
void student::get_age(){
    cout<<"Age:"<<age<<endl;
}
void student::get_year(){
    cout<<"Year: "<<year<<endl;
}

int main(){
    int n;
    cout<<"Student sonini kiriting: ";
    cin >> n;
    vector <student*> library_stnd(n);
    for(int i=0;i<n;i++){
        student* temp = new student;
        temp->set_name();
        temp->set_age();
        temp->set_year();
        
}
return(0);
}