#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //Open file
    ofstream fout;
    fout.open("file1.txt"); // create and open file

    //write file
    fout<<"Hello India"; //write something is file

    fout.close(); //Resourse Release
}
