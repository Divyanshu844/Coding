#include<iostream>
using namespace std;
class Human{
    string Religion, color;
    public:
    string name;
    int age, weight;
};
class Student : protected Human{
    private:
    int roll_number, fees;
    public:
    Student(string name,int age,int weight,int roll_number,int fees){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void display(){
        cout<<name<< "age is"<<age<<",weight is"<< weight<<",roll_numer is"<< roll_number<<"and fees is"<< fees<<endl;
    }
};
class Teacher:public Human{
    int salary,id;
};
int main(){
Student A("Divyanshu",23,85,25,50000);
A.display();
Teacher B;
B.name="Rohit";
}
