#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int an=0;
    cout<<"Enter the value:";
    cin>>a;
    int ca=0,cc=0,cg=0,ct=0;
    for(auto ch:a){
        if(ch=='A'){
            ca++;
            cc=0;
            cg=0;
            ct=0;
            an=max(an,ca);
        }
        if(ch=='C'){
            cc++;
            ca=0;
            cg=0;
            ct=0;
            an=max(an,cc);
        }
        if(ch=='G'){
            cg++;
            cc=0;
            ca=0;
            ct=0;
            an=max(an,cg);
        }
        if(ch=='T'){
            ct++;
            cc=0;
            cg=0;
            ca=0;
            an=max(an,ct);
        }
    }
    
    cout<<an;

    return 0;
}