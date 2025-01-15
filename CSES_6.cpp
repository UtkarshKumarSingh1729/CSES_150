#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(n--){
        long long r,c;
        cin>>r>>c;
        // if(r==c){
        //     cout<<r*r-(r-1)<<endl;
        //     return 0;
        // }
        if(r<c){
            long long val=c*c-(c-1);
            if(c%2==0){
                cout<<val-(c-r)<<endl;
            }else{
                cout<<val+(c-r)<<endl;

            }
        }else{
            long long val=r*r-(r-1);
            if(r%2==0){
                cout<<val+(r-c)<<endl;
            }else{
                cout<<val-(r-c)<<endl;
            }

        }
    }
    return 0;

}