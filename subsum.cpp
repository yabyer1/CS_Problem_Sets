#include <bits/stdc++.h>
using namespace std;

void find_amnt(vector<long long> &v){
    long long m = v[0];
    long long cur = v[0];
    for(int i = 1; i < v.size(); i++){
        if(cur < 0)
            cur = 0;
        cur += v[i];
        m = max(m, cur);
    }
    cout<<m;
    
     
}


int main() {
    int n;

    cin>>n;

    vector<long long> v(n);
    long long check = LLONG_MIN;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        check = max(check, v[i]);
    }
    if(check <= 0){
        cout<<check;
        return 0;
    }
    find_amnt(v);
        
    


    return 0;
}











