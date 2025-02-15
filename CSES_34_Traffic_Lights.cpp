#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long x;
    int n;
    cin >> x >> n;
    
    // Initially, we have traffic lights at positions 0 and x.
    set<long long> lights;
    lights.insert(0);
    lights.insert(x);
    
    // The initial segment is the entire street [0, x]
    multiset<long long> segments;
    segments.insert(x);
    
    while(n--) {
        long long pos;
        cin >> pos;
        
        // Find the first traffic light to the right of pos
        auto right_it = lights.lower_bound(pos);
        long long right = *right_it;
        
        // The traffic light immediately to the left of pos
        auto left_it = right_it;
        left_it--;
        long long left = *left_it;
        
        // Remove the old segment from the multiset
        segments.erase(segments.find(right - left));
        
        // Insert the two new segments created by adding the new light
        segments.insert(pos - left);
        segments.insert(right - pos);
        
        // Add the new light position into the set
        lights.insert(pos);
        
        // The largest segment is the last element in the multiset
        cout << *segments.rbegin() << " ";
    }
    
    return 0;
}

// need to redo