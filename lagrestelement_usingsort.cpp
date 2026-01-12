#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr={1,4,5,2,5,6};
    //int n=arr.size();
    sort(arr.begin(),arr.end());
    cout<<arr[arr.size()-1];
    return 0;
}