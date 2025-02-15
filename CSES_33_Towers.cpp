#include<bits/stdc++.h>
using namespace std;

int upper(vector<int>& ans, int x){
    if(ans.size()==0) return 0;
    int low=0, high=ans.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(ans[mid]<=x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return low;
}
int main(){
    int n,temp;
    cin>>n;
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>temp;
        int it=upper(ans,temp);
        if(it==static_cast<int>(ans.size())){
            ans.push_back(temp);
        }else{
            ans[it]=temp;
        }
    }
    cout<<ans.size();
    return 0;
}