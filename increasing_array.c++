#include <iostream>
#include <vector>

using namespace std;

void increasing_array(vector<int> & v) {
    long prev = v[0];
    long q = 0;
    for(int i = 1; i < v.size(); i++){
       // cout<<prev<<"    "<<v[i]<< "   "<<q<<endl;
        if(v[i] < prev){
            q += (prev - v[i]);
            continue;
        }
        prev = v[i];
    }
    cout<<q<<endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    increasing_array(v);
    return 0;
}

