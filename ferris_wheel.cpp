#include <bits/stdc++.h>
using namespace std;

void Find(vector<long long> & weights,  long x){
    int i = 0;
    int j = weights.size() - 1;
    long gondola = 0;
    while(i < j){
        if(weights[i] + weights[j] <= x){
            i++;
            j--;
            gondola++;
        }
        else{
            gondola++;
            j--;
        }
    }
    if(i == j)
        gondola++;
    cout<<gondola;
  
}


int main() {
    int n;
    int x;

    
    cin>>n; cin>> x;
    vector< long long> weights(n);
    
    for(int i = 0; i < n; i++){
        cin>>weights[i];
    }
    
    sort(weights.begin(), weights.end());
    
    Find(weights, x);
    return 0;
}






