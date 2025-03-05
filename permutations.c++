#include <iostream>
#include <vector>

using namespace std;

void beauty(int n) {
    string str;
    if(n < 4 && n != 1){
        cout<<"NO SOLUTION";
        return;
    }
    int l = 1;
    int h = n;
    if(h % 2 == 1){
        int m = (l + h) / 2;
        str.append(to_string(m)  +" ");
    }
    while(l < h){
        if(l + 1 == h){
            str.insert(0, to_string(h) + " ");
            str.insert(str.length(), to_string(l) + " ");
            break;
        }
        str.append(to_string(l) + " " + to_string(h) +" ");
        l++;
        h--;
    }
    cout<<str;
    
}

int main() {
    int n;
    cin >> n;
   
    
    beauty(n);
    return 0;
}


