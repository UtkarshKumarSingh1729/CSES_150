// #include<bits/stdc++.h>
// using namespace std;

// void swapy(vector<int> &a , int i,int j){
//     int temp=a[i];
//     a[i]=a[j];
//     a[j]=temp;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     vector<pair<int,int>> op;
//     for(int i=0;i<m;i++){
//         int v,u;
//         cin>>v>>u;
//         op.push_back({v-1,u-1});
//     }
//     vector<int> idx(n+1);
//         for(int i=0;i<n;i++){
//             idx[a[i]]=i;
//         }
//     int c=1;
//         for(int i=1;i<n;i++){
//             if(idx[i]>idx[i+1]){
//                 c++;
//             }
//         }
//     for(int i=0;i<m;i++){
//         swapy(a,op[i].first,op[i].second);
//         swapy(idx,a[op[i].first],a[op[i].second]);
        
//         set<int> affected={op[i].first,op[i].first-1, op[i].second,op[i].second-1};
//         for(auto x: affected){
//             if(x>=1 && x<n){
//                 if(idx[x]>idx[x+1]) c++;
//                 else if(idx[x]<idx[x+1])c--;
//             }
//         }
//         cout<<c<<endl;
//         // swapy(a,op[i].first,op[i].second);
        
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> idx(n + 2); // Using n+2 to avoid boundary checks for 1-based indexing
    for (int i = 0; i < n; ++i) {
        idx[a[i]] = i;
    }
    int c = 0;
    for (int i = 1; i < n; ++i) {
        if (idx[i] > idx[i + 1]) {
            c++;
        }
    }
    while (m--) {
        int x, y;
        cin >> x >> y;
        x--; y--; // Convert to 0-based indices
        if (x == y) {
            cout << c + 1 << '\n';
            continue;
        }
        int u = a[x], v = a[y];
        if (u == v) {
            cout << c + 1 << '\n';
            continue;
        }
        unordered_set<int> affected;
        auto add_affected = [&](int val) {
            if (val >= 1 && val < n) {
                affected.insert(val);
            }
        };
        add_affected(u - 1);
        add_affected(u);
        add_affected(v - 1);
        add_affected(v);
        // Remove old contributions
        for (int i : affected) {
            if (idx[i] > idx[i + 1]) {
                c--;
            }
        }
        // Swap positions in the array and update idx
        swap(a[x], a[y]);
        idx[u] = y;
        idx[v] = x;
        // Add new contributions
        for (int i : affected) {
            if (idx[i] > idx[i + 1]) {
                c++;
            }
        }
        cout << c + 1 << '\n';
    }
    return 0;
}