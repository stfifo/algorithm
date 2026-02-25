#include <bits/stdc++.h>
using namespace std;

int st[305];
int d[305][5];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int cur = 1;
    for (int i=1; i<=n; ++i) cin >> st[i];

    d[1][1] = st[1]; d[1][2] = 0;
    d[2][1] = st[2]; d[2][2] = st[1]+st[2];

    for (int i=3; i<=n; ++i) {
        d[i][1] = max(d[i-2][2], d[i-2][1]) + st[i];
        d[i][2] = d[i-1][1] + st[i];
    }

    cout << max(d[n][1], d[n][2]);
}