#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;

    vector<string> ans;
    sort(a.begin(),a.end());
    ans.push_back(a);
    while(next_permutation(a.begin(),a.end())){
        ans.push_back(a);
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<endl;

    }
    return 0;
}