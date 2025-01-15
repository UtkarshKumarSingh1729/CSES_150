#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> even,odd;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }
    
    if(n==2||n==3){
        cout<<"NO SOLUTION";
        return 0;
    }
    for(auto x:even) cout<<x<<" ";
    for(auto x:odd) cout<<x<<" ";
    return 0;
}