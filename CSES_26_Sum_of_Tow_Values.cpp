#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;

    }
    sort(a.begin(),a.end());
    int l=0, r=n-1;
    while(l<r){
        if(a[l].first+a[r].first==x){
            cout<<a[l].second<<" "<<a[r].second;
            return 0;
        }else if(a[l].first+a[r].first<x){
            l++;
        }else{
            r--;
        }
    }    
    cout<<"IMPOSSIBLE";
    return 0;

}
