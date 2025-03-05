#include <iostream>
#include <vector>

using namespace std;

void c_d(int val) {
    int amnt = 0;
    for (int i = 1; i * i <= val; i++) {
        if (val % i == 0) {
            amnt += 2;
        }
        if (i * i == val) {
            amnt -= 1;
        }
    }
    cout << amnt << '\n';
}

int main() {
    int num_lines;
    cin >> num_lines;
    vector<int> v(num_lines);
    
    for (int i = 0; i < num_lines; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < v.size(); i++) {
        c_d(v[i]);
    }
    
    return 0;
}
