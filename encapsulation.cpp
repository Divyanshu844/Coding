#include<iostream>
using namespace std;
class Customer{
    string name;
    int account_number, balance, age;
    public:
    Customer(string name,int account_number,int balance,int age){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        this->age=age;
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"Invalid amount";
        }
    }
    void updateage(int age){
        if(age<0&&age>100){
            this->age=age;
        }
        else{
            cout<<"Invalid Age";
        }
    }
    void withdraw(int amount){
        if(amount<=balance&&amount>0){
            balance-=amount;
        }
    
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
    }
};
int main(){
    Customer A1("Divyanshu",101,2000,24);
    Customer A2("Ramesh",201,6722,21);
    Customer A3("Rahul",301,-12,0);
    A1.display();
    A2.display();
    A3.display();
    A1.updateage(-24);
    A1.deposit(200);
    A1.display();
}