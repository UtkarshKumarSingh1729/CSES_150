#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        // int flag=1;
        // while(a>=0||b>=0){
        //     if(a>b){
        //         a-=2;
        //         b-=1;
        //     }else if(b>a){
        //         b-=2;
        //         a-=1;
        //     }else{
        //         if(a%3==0){
        //             cout<<"YES"<<endl;
        //             flag=0;
        //             break;
        //         }else{
        //             cout<<"NO"<<endl;
        //             flag=0;
        //             break;
        //         }
        //     }
        // }
        // if(flag==1){
        //     cout<<"NO"<<endl;
        // }
        // Check conditions for "YES"
        if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}