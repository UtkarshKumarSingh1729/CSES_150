#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,wt;
    cin>>n>>wt;
    vector<int> c(n);
    for(int i=0;i<n;i++)
    cin>>c[i];
    sort(c.begin(),c.end());
    long long ans=0;
    int temp=wt;
    int left=0;
    int right=n-1;
    while(left<=right){
        if(c[left]+c[right]<=temp){
            left++;
        }
        right--;
        ans++;
    }
    
    cout<<ans;
}