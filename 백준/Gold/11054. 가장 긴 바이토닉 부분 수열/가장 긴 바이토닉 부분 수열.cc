#include <algorithm>
#include <iostream>
using namespace std;
int n;
int d_big[1003];
int d_small[1003];
int d[1003];
// 11054
int num[1003];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i=1; i<=n; i++) cin >> num[i];

    d_big[1] = 1;
    for (int i=2; i<=n; i++) {
        int mx=1;
        for (int j=1; j<i; j++) {
            if (num[j] < num[i]) {
                mx = max(mx, d_big[j]+1);
            }
        }
        d_big[i] = mx;
    }
    d_small[n] = 1;
    for (int i=n-1; i>0; i--) {
        int mx = 1;
        for (int j=n; j>i; j--) {
            if (num[j] < num[i]) {
                mx = max(mx, d_small[j]+1);
            }
        }
        d_small[i] = mx;
    }

    int result = 0;
    for (int i=1; i<=n; i++) {
        d[i] = d_big[i] + d_small[i]-1;
        result = max(result, d[i]);
    }

    cout << result;
}