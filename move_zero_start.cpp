#include<bits/stdc++.h>
using namespace std;
void moveZeros(vector<int>&nums){
    int n=nums.size();
    int j=n-1;
    sort(nums.begin(),nums.end());
    for(int i=n-1;i>=0;i--){
        if(nums[i]!=0){
            swap(nums[j],nums[i]);
            j--;
        }
    }
}
int main(){
    vector<int>nums={1,0,3,0,0,2,6};
    int n=nums.size();
    moveZeros(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}