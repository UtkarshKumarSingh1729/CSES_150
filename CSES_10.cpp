#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long ans=0;
    for(long long i=5; n/i>=1; i*=5){
        ans=ans+(n/i);
    }

    cout<<ans;
    return 0;
}