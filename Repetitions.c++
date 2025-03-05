
#include <bits/stdc++.h>

using namespace std;

void repetitions(string & g) {
    int max_a = 0;
    int max_c = 0;
    int max_g = 0;
    int max_t = 0;
    int cur_a = 0;
    int cur_c = 0;
    int cur_g = 0;
    int cur_t = 0;
    for(int i = 0; i < g.length(); i++){
        if(g[i] == 'A'){

            cur_a++;
            cur_c = 0;
            cur_g = 0;
            cur_t = 0;
            max_a = max(max_a, cur_a);
        }
        if(g[i] == 'C'){
            cur_c++;
            cur_a = 0;
            cur_g = 0;
            cur_t = 0;
            max_c = max(max_c, cur_c);
        }
        if(g[i] == 'G'){
            cur_g++;
            cur_a = 0;
            cur_c = 0;
            cur_t = 0;
            max_g = max(max_g, cur_g);
        }
        if(g[i] == 'T'){
            cur_t++;
            cur_a = 0;
            cur_c = 0;
            cur_g = 0;
            max_t = max(max_t, cur_t);
        }
    }
   // cout<<max_t<<' '<<max_g<<' '<<max_c<<' '<<max_a<<endl;
    int val = 0;
    val = max(max_t, val);
    val = max(max_c, val);
    val = max(max_g, val);
    val = max(max_a, val);
    cout<< val <<'\n';
}

int main() {
    string n;
    cin >> n;
    repetitions(n);
    return 0;
}


