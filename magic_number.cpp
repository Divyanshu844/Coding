#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num,sum=0;
    cout<<"Enter number: ";
    cin>>n;
    num=n;
    while(num>0){
        sum=sum+num%10;
        num=num/10;
        if(num==0 && sum>9){
            num=sum;
            sum=0;
        }
    }
    if(sum==1){
    cout<<"Magic Number";
    }
    else{
    cout<<"Not Magic Number";
    }
    return 0;
}