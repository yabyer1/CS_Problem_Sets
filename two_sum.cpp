#include <bits/stdc++.h>
using namespace std;

void find_amnt(vector<long long> &v, long long target){
    map<long long, int> m;
    map<long long, int> d;
    map<long long, int> duplicates;
    for(int i = 0; i < v.size(); i++){
        if(d[v[i]] == 1){
            duplicates[v[i]] = i + 1;
        }
        else{
            d[v[i]] = 1;
            
            m[v[i]] = i+ 1;
            
        }
       // cout<<v[i]<<"  "<<m[v[i]]<<endl;
    }
    sort(v.begin(), v.end());
    int l = 0;
    int h = v.size() - 1;
    while(l < h){
        long long sum = v[l] + v[h];
        if(sum == target){
            if(v[l] == v[h]){
                cout<<m[v[l]]<<" "<<duplicates[v[h]];
            }
            else{
                cout<<m[v[l]]<<" "<<m[v[h]];
            }
            return;
        }
        if(sum > target){
            h--;
        }
        if(sum < target){
            l++;
        }
    }
    cout<<"IMPOSSIBLE";
}


int main() {
    int n;
    long long x;
    cin>>n;
    cin>>x;
    vector<long long> v(n);
   
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    find_amnt(v, x);
        
    


    return 0;
}










