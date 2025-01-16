#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> ans;
    ans.push_back("0");
    ans.push_back("1");
    for(int i=2;i<=n;i++){
        int size=ans.size();
        for(int i=size-1;i>=0;i--){
            ans.push_back(ans[i]);
        }
        for(int i=0;i<size;i++){
            ans[i]="0"+ans[i];
            ans[i+size]="1"+ans[i+size];
        }
    }
    for(auto at:ans){
        cout<<at<<endl;
    }
}