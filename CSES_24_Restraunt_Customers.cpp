#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arrive(n);
    vector<int> depart(n);
    for(int i=0;i<n;i++){
        cin>>arrive[i];
        cin>>depart[i];

    }
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int a=0,d=0;
    int ans=0;
    int maxi=0;
    while(a<n && d<n){
        if(arrive[a]<=depart[d]){
            a++;
            ans+=1;
            maxi=max(maxi,ans);
        }else{
            d++;
            ans-=1;
        }
    }
    cout<<maxi;
    return 0;

}