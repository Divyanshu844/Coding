#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"Not Anagram";
        return 0;
    }
    int freq[256]={0};
    for(int i=0;i<s1.length();i++){
        freq[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++){
        freq[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            cout<<"Not Anagram";
            return 0;
        }
    }
            cout<<"Anagram";
            return 0;    
    
}