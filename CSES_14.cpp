#include<bits/stdc++.h>
using namespace std;

void solve(int disk, int start, int help, int end){
    if (disk==0){
        return;
    }
    solve(disk-1,start,end,help);
    cout<<start<<" "<<end<<endl;
    solve(disk-1,help,start,end);

}
int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    solve(n,1,2,3);
    return 0;
}