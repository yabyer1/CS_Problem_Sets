#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void m_n(vector<int> & g) {
    int cur = 1;
    for(int i = 0; i < g.size(); i++){
  
        if(cur != g[i]){
            cout<<cur<<'\n';
            return;
        }
        cur++;
    }
    cout<<g.size() + 1<<'\n';
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n - 1);
    
    for (int i = 0; i < (n - 1); i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    m_n(v);
    return 0;
}

