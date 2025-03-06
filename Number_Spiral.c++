#include <bits/stdc++.h>
using namespace std;

/*long long BinSearch(long long prod){
    long long l = 1;
    long long h = prod;
    
    while(l < h){
        long long m = (l + h) / 2;
       // cout<<m<< " " << l endl;
        if(m * m > prod){
            h = m;
        }
        else if(m * m < prod){
            l = m + 1;
        }
        else{
            return m;
        }
    }
    return l;
}*/
void compute(long long y, long long x){
    long long val;
    if(y > x){
        long long square = (y - 1) * (y - 1);
        if(y % 2  == 0){
            val = square + 2 * y - x;
        }
        else{
            val = square + x;
        }
    }
    else{
        long long square = (x - 1) * (x - 1);
        if(x % 2  == 1){
            val = square + 2 * x - y;
        }
        else{
            val = square + y;
        }
    }
   
    cout<<val<<endl;
}
void process_spiral(vector<long long> & v) {
    for(int i = 0; i < v.size(); i += 2){
        compute(v[i], v[i + 1]);
    }
}

int main() {
    int n;
    cin >> n;
  
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    process_spiral(v);
    return 0;
}


