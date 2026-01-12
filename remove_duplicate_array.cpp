#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,2,3,3,3,3,4,3};
    sort(arr.begin(),arr.end());
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    for(int k=0;k<=i;k++){
    cout<<arr[k]<<" ";
    }
}