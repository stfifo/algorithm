#include <bits/stdc++.h>
using namespace std;

int coin[12];
int n,m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt=0;
    cin >> n >> m;
    for (int i=0; i<n; ++i) cin >> coin[i];
    for (int i=n-1; i>=0; --i) {
        cnt += m / coin[i];
        m = m % coin[i];
    }

    cout << cnt;
}
