#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={4,2,1,8,7};
    int n=arr.size();
    for(int i=0;i<n-1;i++){
         int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}