#include <bits/stdc++.h>
using namespace std;

int d[1000005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> t;

    d[1] = 1; d[2] = 2; d[3] = 4;

    for (int i=4; i<=11; ++i) d[i] = d[i-1] + d[i-2] + d[i-3];

    while (t--) {
        cin >> n;
        cout << d[n] << '\n';
    }
}