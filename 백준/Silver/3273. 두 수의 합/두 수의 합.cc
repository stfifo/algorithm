#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int len, x, count_pair =0;
    cin >> len;
    vector<int> vec(len);
    for (int i=0; i<len; ++i) cin >> vec[i];
    cin >> x;
    vector<int> num(x+1);
    for (int i: vec) {
        if (i >= x) continue;
        
        if (num[x-i] == 1) count_pair+=1;
        else num[i] = 1;
    }
    cout << count_pair;

}