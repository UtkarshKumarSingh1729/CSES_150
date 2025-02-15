#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> pl(n);
    for(int i=0;i<n;i++){
        cin>>pl[i];
        
    }
    set<int> s;
    int left=0;
    int right=0;
    int ans=0;
    while(left<n and right<n){
        while(right<n and !s.count(pl[right])){
            s.insert(pl[right]);
            ans=max(ans,right-left+1);
            right++;

        }
        while(right<n and s.count(pl[right])){
            s.erase(pl[left]);
            left++;
        }

    }
    cout<<ans;
    return 0;
}


//This code finds the length of the longest subarray with distinct elements using the two-pointer (sliding window) technique. Let's break it down step by step.

// Understanding the Code
// Input Reading:

// cpp
// Copy
// Edit
// int n;
// cin>>n;
// vector<int> pl(n);
// for(int i=0;i<n;i++){
//     cin>>pl[i];
// }
// Reads an integer n (size of the array).
// Reads n elements into the vector pl.
// Using Two Pointers (left and right):

// cpp
// Copy
// Edit
// set<int> s;
// int left=0, right=0, ans=0;
// s is a set to store unique elements in the current subarray.
// left and right are two pointers that define the boundaries of the current subarray.
// ans stores the maximum length found so far.
// Expanding the Window (right Pointer):

// cpp
// Copy
// Edit
// while(right<n and !s.count(pl[right])){
//     s.insert(pl[right]); 
//     ans=max(ans,right-left+1);
//     right++;
// }
// Expands the window to the right (right++) as long as pl[right] is not in the set.
// Inserts pl[right] into s.
// Updates ans as max(ans, right-left+1).
// Shrinking the Window (left Pointer):

// cpp
// Copy
// Edit
// while(right<n and s.count(pl[right])){
//     s.erase(pl[left]); 
//     left++;
// }
// If a duplicate is found (pl[right] already in s), we move left forward and remove elements from the set until the duplicate is removed.
// Printing the Answer:

// cpp
// Copy
// Edit
// cout<<ans;
// Outputs the length of the longest subarray with distinct elements.
// Example Walkthrough
// Input:
// Copy
// Edit
// 7
// 4 2 3 4 5 2 1
// Execution Steps:
// Step	left	right	s (Set)	ans	Comment
// 1	0	0	{4}	1	Expand right
// 2	0	1	{4, 2}	2	Expand right
// 3	0	2	{4, 2, 3}	3	Expand right
// 4	0	3	{4, 2, 3, 4}	3	Duplicate found (4)
// 5	1	3	{2, 3, 4}	3	Remove 4, move left
// 6	1	4	{2, 3, 4, 5}	4	Expand right
// 7	1	5	{2, 3, 4, 5, 2}	4	Duplicate found (2)
// 8	2	5	{3, 4, 5, 2}	4	Remove 2, move left
// 9	3	5	{4, 5, 2}	4	Remove 3, move left
// 10	3	6	{4, 5, 2, 1}	4	Expand right
// 11	3	7	-	Final Answer: 4	
// Output:
// Copy
// Edit
// 4
// (The longest distinct subarray is {4, 5, 2, 1} of length 4.)

// Time Complexity Analysis
// Each element is added to the set at most once and removed at most once.
// The right pointer moves O(n), and the left pointer moves O(n), making the total complexity O(n).
// Key Takeaways
// ✅ Sliding Window Technique ensures efficient O(n) complexity.
// ✅ Uses a set to keep track of unique elements.
// ✅ Expands with right, and if a duplicate is found, shrinks with left.
// ✅ Finds the longest contiguous subarray with distinct elements.

// Would you like me to modify or optimize it further? 🚀







