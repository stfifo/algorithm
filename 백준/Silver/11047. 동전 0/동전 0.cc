#include <bits/stdc++.h>
using namespace std;

int coin[12];
int n,m,t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt=0;
    cin >> n >> m;
    for (int i=0; i<n; ++i) {
        cin >> t;
        if (t <= m) coin[i] = t;
    }
    sort(coin, coin+n, greater<int>());

    for (int i=0; i<n; ++i) {
        if (coin[i] <= m) {
            t = m / coin[i];
            m -= (m / coin[i] *coin[i]);
            cnt += t;
        }

        if (m == 0) break;
    }

    cout << cnt;
}
