#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// 11051

int s[1000003];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;


    while (t--) {
        int n; cin >> n;

        ll ans = 0l;
        int mx=0;

        for (int i=0; i<n; ++i) cin >> s[i];
        for (int i=n-1; i>=0; --i) {
            mx = max(mx, s[i]);
            if (s[i] < mx) {
                ans += (mx-s[i]);
            }
        }
        cout << ans << '\n';
    }

}
