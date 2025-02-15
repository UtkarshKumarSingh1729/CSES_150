#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    queue<int> q;
    for(int i=1;i<n+1;i++){
        q.push(i);
    }
    bool flag=false;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        if(flag){
            cout<<t<<" ";
        }else{
            q.push(t);
        }
        flag=!flag;
    }
    return 0;
}