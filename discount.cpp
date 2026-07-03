#include<bits/stdc++.h>
using namespace std;
int main(){
    int total_discount;
    int amount;
    int discount=0;
    cin>>amount;
    if(amount<1000){
        total_discount=amount;
    } 
    else if(amount>=1000 && amount<5000){
        discount=(amount*10)/100;
        total_discount=amount-discount;
       
    }else if(amount>=5000)
    {
        discount=(amount*20)/100;
        total_discount=amount-discount;
        
    }
    cout<<total_discount<<endl;
    return 0; 
}
