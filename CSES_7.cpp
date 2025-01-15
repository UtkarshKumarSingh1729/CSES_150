#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long i=1;
    while(i<=n){
        long long k=i*i;
        long long val=(k*k-k)/2;
        long long sub=4*(i-1)*(i-2);
        val=val-sub;
        if(val<0){
            cout<<0<<endl;
        }else{
            cout<<val<<endl;
        }
        i++;
    }

    return 0;
}