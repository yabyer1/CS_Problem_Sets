#include <bits/stdc++.h>
using namespace std;

void Find(vector<long long> & apartments, vector<long long> & applicants, long k){
    int i = 0;
    int j = 0;
    int amnt = 0;
    while(i < apartments.size() && j < applicants.size()){
        int cur_diff = abs(apartments[i] - applicants[j]);
        if(cur_diff <= k){
            amnt++;
            i++;
            j++;
        }
        else{
            if(apartments[i] > applicants[j]){
                j++;
                
            }
            else{
                i++;
            }
        }
    }
    cout<<amnt;
}


int main() {
    int n;
    int m;
    long long k;
    
    cin>>n; cin>> m; cin>> k;
    vector< long long> applicants(n);
    vector< long long> apartments(m);
    for(int i = 0; i < n; i++){
        cin>>applicants[i];
    }
    for(int i = 0; i < m; i++){
        cin>>apartments[i];
    }
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
    Find(apartments, applicants, k);
    return 0;
}





