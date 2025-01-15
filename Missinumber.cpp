#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
vector<int> ans(n);
for(int i=0;i<n;i++){
    cin>>ans[i];
}
sort(ans.begin(),ans.end());
int flag=0;
for(int i=0;i<n;i++){
    if(ans[i]!=i+ans[0]){
        cout<<i+ans[0];
        return 0;
    }

}

cout<<n;


return 0;
}