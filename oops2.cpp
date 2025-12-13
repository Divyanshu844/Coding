#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age,roll_number;
    string grade;
    //getter and setter function
    public:
    void setname(string s){
        if(s.size()==0){
            cout<<"Invalid name";
            return;
        }
        name=s;
    }
    void setage(int a){
        if(age<0 || age>100){
            cout<<"Invalid age";
            return;
        }
        age=a;
    }
    void setroll_no(int r){
        roll_number=r;
    }
    void setgrade(string s){
        grade=s;
    }
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getroll_number(){
        cout<<roll_number<<endl;
    }
    string get_grade(int pin){
        if(pin=123)
        return grade;

        return " ";
    }

};
int main(){
    Student S1;
    S1.setname("Divyanshu");
    S1.setage(10);
    S1.setroll_no(25);
    S1.setgrade("A+");
    S1.getname();
    S1.getage();
    

}