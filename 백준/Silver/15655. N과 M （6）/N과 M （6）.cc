#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int num[10];
int ans[10];
bool isused_n[10005];

void solve(int k, int idx) {
    if (k == m) {
        for (int i=0; i<m; i++) cout << ans[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i=0; i<n; ++i) {
        int tmp = num[i];
        if (i>idx && !isused_n[tmp]) {
            ans[k] = tmp;
            isused_n[tmp] = 1;
            idx++;
            solve(k+1, idx);
            isused_n[tmp] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> num[i];
    sort(num, num+n);
    solve(0, -1);
}