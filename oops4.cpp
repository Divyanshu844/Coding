#include<iostream>
using namespace std;
class Customer{
    string name;
    int accound_number;
    int balance;
    public:
    //Default Constructor
    Customer(){
        name="Divyanshu";
        accound_number=100;
        balance=65;
    }
    //Parameterized Constructor
    Customer(string a, int b, int c){
        name=a;
        accound_number=b;
        balance=c;
    }
    Customer(string a, int b){
        name=a;
        accound_number=b;
    }
    void display(){
        cout<<name<<" "<<accound_number<<" "<<balance<<endl;
    }
    Customer(Customer &B){
        name= B.name;
        accound_number= B.accound_number;
        balance= B.balance;
    }
};
int main(){
    Customer A1;
    Customer A2("Divyanshu",23,1000);
    Customer A3("Mohit",29);
    A1.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
}