#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    // vector<int> tp(n);
    // for(int i=0;i<n;i++){
    //     cin>>tp[i];
    // }
    // vector<int> cp(m);
    // for(int i=0;i<m;i++){
    //     cin>>cp[i];
    // }
    // vector<int> ans(m,-1);
    // for(int i=0; i<min(n,m);i++){
    //     int mini=INT_MAX;
    //     int idx;
    //     for(int j=0;j<tp.size();j++){
    //         if(tp[j]<=cp[i] && cp[i]-tp[j]<mini){
    //             mini=cp[i]-tp[j];
    //             ans[i]=tp[j];
    //             idx=j;
    //         }
    //     }
    //     tp.erase(tp.begin()+idx);
    // }

    // for(int i=0;i<m;i++){
    //     cout<<ans[i]<<endl;
    // }

    multiset<int> tickets;
    vector<int> customers(m);
    for(int i=0;i<n;i++){
        int price;
        cin>>price;
        tickets.insert(price);
    }
    for(int i=0;i<m;i++){
        cin>>customers[i];

    }

    for(int i=0;i<m;i++){
        auto it = tickets.upper_bound(customers[i]);
        if(it==tickets.begin()){
            cout<<-1<<endl;
        }else{
            --it;
            cout<<*it<<endl;
            tickets.erase(it);
        }
    }
    return 0;
}