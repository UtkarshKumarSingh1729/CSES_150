#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    long long ans;
    for(int i=1;i<=n;i++){
        ans=(ans*2)%MOD;
    }
    cout<<ans;
    return 0;
}