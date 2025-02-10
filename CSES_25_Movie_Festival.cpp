#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // 1 Sort movies based on their ending times.
    // 2 Always select the movie that ends he earliest(this leaves most room for future movies)
    // 3 After selecting movie skip all movies that start before the current movie ends.

    vector<pair<int,int>>  movies(n);

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        movies[i]={b,a}; //Store end time first for easy sorting
    }
    sort(movies.begin(), movies.end()); //sort by end time
    int cnt=0;
    int last_end_time=0;
    for(auto movie:movies){
        if(movie.second>=last_end_time){
            cnt++;
            last_end_time=movie.first;
        }
    }
   cout<<cnt<<endl;
   return 0;
}