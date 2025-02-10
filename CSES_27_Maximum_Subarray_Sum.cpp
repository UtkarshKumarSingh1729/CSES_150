#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i< n;i++){
        cin>>a[i];
    }
    long long su=a[0];
    long long maxsu=a[0];
    for(int i=1;i<n;i++){
        su=max(a[i],a[i]+su);
        maxsu=max(maxsu,su);
    }
    cout<<maxsu;

}