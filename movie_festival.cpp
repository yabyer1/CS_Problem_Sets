#include <bits/stdc++.h>
using namespace std;

void find_amnt(vector<vector<long long>> &v){
    long amnt = 0;
    long cur_end = 0;
    for(vector<long long> movie : v){
        if(cur_end <= movie[0]){
            amnt++;
            cur_end = movie[1];
        }
    }
    cout<<amnt;
}


int main() {
    int n;
    cin>>n;
    vector<vector<long long>> v(n, vector<long long>(2));
   
    for(int i = 0; i < n; i++){
        vector<long long> movie_times(2);
        cin>> movie_times[0];
        cin>> movie_times[1];
        v[i] = movie_times;
    }
    sort(v.begin(), v.end(), [] (const vector<long long> & a, const vector<long long> & b){
        return a[1] < b[1];
    });
    find_amnt(v);
        
    


    return 0;
}









