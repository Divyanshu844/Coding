#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,3,4,5,6};
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int N=n+1;
    int actualsum=(N*(N+1))/2;
    int missing_number=actualsum-sum;
    cout<<missing_number;
    return 0;
}