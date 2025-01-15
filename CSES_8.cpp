#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long su;
    su=n*(n+1)/2;
    if (su%2!=0){
        cout<<"NO"<<endl;
        return 0;
    }else{
        cout<<"YES"<<endl;
    }

    long long half=su/2;
    long long start=1;
    long long end=n;
    vector<int> set1, set2;
    for (int i = n; i >= 1; i--) {
        if (half >= i) {
            set1.push_back(i);
            half-= i;
        } else {
            set2.push_back(i);
        }
    }

    cout<<set1.size()<<endl;
        for(auto a:set1){
            cout<<a<<" ";
        }
   
    
    cout<<endl;
    cout<<set2.size()<<endl;
    for(auto a:set2){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;

}