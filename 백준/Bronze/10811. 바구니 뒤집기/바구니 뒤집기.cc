#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, basket, i, st, en;
    cin >> n >> basket;
    vector<int> num(n);
    for (i=0; i<n; ++i) num[i] = i;

    for (i=0; i<basket; ++i) {
        cin >> st >> en;
        reverse(num.begin()+(st-1), num.begin()+en);
    }

    for (i=0; i<n; ++i) cout << num[i]+1 << ' ';

}