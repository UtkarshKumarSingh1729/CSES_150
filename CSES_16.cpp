#include<bits/stdc++.h>
using namespace std;

long long solve(vector<long long>& w, long long i, long long n, long long s1, long long s2){
    if(i == n){
        return abs(s1 - s2);
    }
    
    // Recursive calls and return the minimum difference
    long long option1 = solve(w, i + 1, n, s1 + w[i], s2);
    long long option2 = solve(w, i + 1, n, s1, s2 + w[i]);
    
    return min(option1, option2);  // Return the minimum difference
}

int main(){
    long long n;
    cin >> n;
    
    vector<long long> w(n);  // Initialize vector with size n
    
    for(long long i = 0; i < n; i++){
        cin >> w[i];  // Input values into the vector
    }
    
    long long s1 = 0;
    long long s2 = 0;
    
    // Call the solve function and capture the result
    long long ans = solve(w, 0, n, s1, s2);
    
    cout << ans << endl;  // Output the result
    return 0;
}
