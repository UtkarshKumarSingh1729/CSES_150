#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string res){
    int n=res.length();
    for(int i=0;i<n/2;i++){
        if(res[i]!=res[n-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    string ans="";
    for(auto odd:mp){
        if(odd.second%2==1){
            ans+=odd.first;
            mp[odd.first]--;
        }
    }
    string begin="";
    for(auto e:mp){
        for(int i=0;i<e.second/2;i++){
            begin+=e.first;
            mp[e.first]--;
        }
    }
    string end="";
    for(auto r:mp){
        for(int i=0;i<r.second;i++){
            end+=r.first;
            mp[r.first]--;

        }
    }
    reverse(end.begin(),end.end());
    string res=begin+ans+end;
    if(isPalindrome(res)){
        cout<<res<<endl;
    }else{
        cout<<"NO SOLUTION"<<endl;
    }
    return 0;

}