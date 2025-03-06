#include <bits/stdc++.h>
using namespace std;

void Find(multiset<long long> & tickets, vector<long long> & customers){
    for(int i = 0; i < customers.size(); i++){
    
        auto best_it = tickets.upper_bound(customers[i]);
        if(best_it == tickets.begin())
            cout<<-1<<endl;
        else{
            --best_it;
            cout<<*best_it<<endl;
            tickets.erase(best_it);
        }
        
    }
  
}


int main() {
    int n;
    int m;

    
    cin>>n; cin>> m;
    multiset< long long> tickets;
    vector<long long> customers(m);
    for(int i = 0; i < n; i++){
        long long price;
        cin>>price;
        tickets.insert(price);
    }
    for(int i = 0; i < m; i++){
        cin>>customers[i];
    }
    
    Find(tickets, customers);
    return 0;
}







