#include <bits/stdc++.h>
using namespace std;
long long test(vector<long long> &v, long long key){
    long long ret = 0ll;
    for(long long g : v){
        ret += abs(key - g);
    }
    return ret;
}
void find_amnt(vector<long long> &v, long long max_val){
    int l = 1;
    int h = max_val;
    while(l <= h){
        long long m = (l + h) / 2;
        long long amnt = test(v, m);
        long long ramnt = test(v, m + 1);
        long long lamnt = test(v, m - 1);
        if(amnt <= ramnt && amnt <= lamnt){
            l = m;
            break;
        }
        if(amnt <=ramnt && amnt > lamnt){
            h = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    long long fin = test(v, l);
    cout<<fin;
     
}


int main() {
    int n;

    cin>>n;
    long long max_val = LLONG_MIN;
    vector<long long> v(n);
    
        for(int i = 0; i < n; i++){
        cin>>v[i];
            max_val = max(v[i], max_val);
  
    }
   
    find_amnt(v, max_val);
        
    


    return 0;
}












