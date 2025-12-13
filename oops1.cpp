#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age, roll_number;
    string grade;
};
int main(){
    Student S1;
    S1.name="Divyanshu";
    S1.age= 23;
    S1.roll_number=25;
    S1.grade="A++";
    cout<<S1.name<<" ";
    cout<<S1.age<<" ";
    Student S2;
    S2.name="Ram";
    S2.age=21;
    S2.roll_number=24;
    S2.grade="A++";
    cout<<S2.name<<" ";
}