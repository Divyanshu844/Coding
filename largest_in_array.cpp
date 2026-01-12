#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,5,2,3,4};
    int n=arr.size();
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}