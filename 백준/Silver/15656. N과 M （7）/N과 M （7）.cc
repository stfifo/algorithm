#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int num[10];
int ans[10];

void solve(int k) {
    if (k == m) {
        for (int i=0; i<m; i++) cout << ans[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i=0; i<n; ++i) {
        if (ans[k] == 0) {
            ans[k] = num[i];
            solve(k+1);
            ans[k] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> num[i];
    sort(num, num+n);
    solve(0);
}