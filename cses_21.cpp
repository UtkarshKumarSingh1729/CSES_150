#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> aplcnt(n);
    vector<int> appt(m);
    for(int i=0; i<n;i++){
        cin>>aplcnt[i];

    }
    sort(aplcnt.begin(),aplcnt.end());
    
    for(int i=0; i<m;i++){
        cin>>appt[i];
        
    }
    sort(appt.begin(),appt.end());
    int cnt=0;
    int i=0,j=0;
    while(i<n && j<m){
        if(aplcnt[i]<appt[j] && abs(aplcnt[i]-appt[j])>k){
            i++;
        }else if(appt[j]<aplcnt[i] && abs(aplcnt[i]-appt[j])>k){
            j++;
        }else{
            cnt++;
            i++;
            j++;
        }
    }
    cout<<cnt;
    return 0;
}