#include <bits/stdc++.h>
using namespace std;

void compute(int k){
    long long total_pairs = (1LL * k * k * (k * k - 1)) / 2;
        long long attacking_pairs = 4 * (k - 1) * (k - 2);
        cout << total_pairs - attacking_pairs << endl;
}


int main() {
    int n;
    cin >> n;
  
    
    for (int i = 1; i <= n; i++) {
        compute(i);
    }
    

    return 0;
}



