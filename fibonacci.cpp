#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int first=0,second=1;
    cout<<"Fibonacci Series: ";
    for(int i=0;i<n;i++){
        cout<<first<<" ";
        int c=first+second;
        first=second;
        second=c;
    }
    return 0;
}