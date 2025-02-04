#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.insert(a);
    }
    cout<<arr.size();
    return 0;
}