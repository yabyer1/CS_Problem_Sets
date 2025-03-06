#include <bits/stdc++.h>
using namespace std;

void distinct(set<long long> & s){
    cout<<s.size();
}


int main() {
    int n;
    cin >> n;
    set<long long> s;
    long long val;
    for (int i = 0; i < n; i++) {
        cin >> val;
        s.insert(val);
    }
    distinct(s);

    return 0;
}




