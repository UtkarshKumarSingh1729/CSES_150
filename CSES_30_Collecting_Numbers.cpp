#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> idx(n+1);
    for(int i=0;i<n;i++){
        cin>>x[i];
        idx[x[i]]=i;
    }
    int c=1;
    for(int i=1;i<n;i++){
        if(idx[i]>idx[i+1]){
            c++;
        }
    }
    cout<<c;
    return 0;

}