#include <bits/stdc++.h>
using namespace std;

// d[i] = 1부터 i까지의 합
int d[100005];
int num[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    d[0] = 0;

    for (int i=1; i<=n; ++i) {
        cin >> num[i];
        d[i] = d[i-1] + num[i];
    }

    while (m--) {
        int st, en;
        cin >> st >> en;
        cout << d[en]-d[st-1] << '\n';
    }
}