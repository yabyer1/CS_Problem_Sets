#include <bits/stdc++.h>
using namespace std;
 
void find_amnt(vector<long long> &v){
    long long sum = v[0] + v[1];
    for(int i = 2; i < v.size(); i++){

        if(sum + 1 < v[i]){
            cout<< (sum + 1);
            return;
        }
        sum += v[i];
    }
    cout<<(sum + 1);
    
     
}
 
 
int main() {
    int n;
 
    cin>>n;
    
    vector<long long> v(n);

        for(int i = 0; i < n; i++){
        cin>>v[i];
           
  
    }
    sort(v.begin(), v.end());
    if(v[0] != 1){
        cout<< 1;
        return 0;
    }
    find_amnt(v);
        
    
 
 
    return 0;
}
