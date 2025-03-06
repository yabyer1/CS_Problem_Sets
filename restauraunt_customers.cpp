#include <bits/stdc++.h>
using namespace std;

void Find(priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long, long long>>> q ){
    map<long long,long long> m;
    while(!q.empty()){
        pair<long long,long long> output = q.top();
        m[output.first]++;
        m[output.second]--;
        q.pop();
    }
    long long best = 0;
    long long cur = 0;
    for(const auto & p : m){
        cur += p.second;
        best = max(best, cur);
    }
    cout<<best;
}


int main() {
    int n;
    cin>>n;
    priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long, long long>>> q;
    long long max_val = 0;
    for(int i = 0; i < n; i++){
        pair<long long,long long> input;
        cin>>input.first;
        cin>>input.second;
        q.push(input);
      
        
    }

    Find(q);
    return 0;
}








