#include<iostream>
using namespace std;
class Engineer{
    void money(){
        cout<<"Hello money\n";
    }
    public:
    string specialization;
    Engineer(){
        cout<<"Hello Engineer\n";
    }
    void work(){
        cout<<"I have specialization in"<<specialization<<endl;
    }
};
class Youtuber{
    public:
    int subscribers;
    Youtuber(){
        cout<<"Hello Youtuber\n";
    }
    void contentCreator(){
        cout<<"I have a subscriber base of"<<subscribers<<endl;
    }
};
class CodeTeacher:public Youtuber, public Engineer{
    public:
    string name;
    CodeTeacher(){
        cout<<"Hello Coder\n";
    }
    CodeTeacher(string name,string specialization,int subscribers){
        this->name=name;
        this->specialization=specialization;
        this->subscribers=subscribers;
    }
    void showcase(){
        cout<<"My name is "<<name<<endl;
        work();
        contentCreator();
    }
};
int main(){
    CodeTeacher A1;
}