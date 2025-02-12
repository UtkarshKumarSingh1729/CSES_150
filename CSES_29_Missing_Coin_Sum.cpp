#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    sort(coins.begin(),coins.end());
    long long x=1;
    for(int i=0;i<n;i++){
        if(coins[i]>x){
            cout<<x; 
            return 0;
        }
        else{
            x+=coins[i];
        }
    }
    cout<<x;
    return 0;
}

//   1 2 2 7 9
//   1 2 4 6
//   2 4 6 return 6