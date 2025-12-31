#include<iostream>
using namespace std;
class Student{
    public:
    void print(){
        cout<<"I am student\n";
    }
};
class Male{
    public:
    void MalePrint(){
        cout<<"I am male\n";
    }
};
class FeMale{
    public:
    void FeMalePrint(){
        cout<<"I am Female\n";
    }
};
class Boy:public Student,public Male{
    public:
    void BoyPrint(){
        cout<<"I am Boy\n";
    };
};
class Girl:public Student, public FeMale{
    public:
    void GirlPrint(){
        cout<<"I am Girl\n";
    };
};
int main(){
    Girl G1;
    G1.print();
    Boy B1;
    B1.MalePrint();
}