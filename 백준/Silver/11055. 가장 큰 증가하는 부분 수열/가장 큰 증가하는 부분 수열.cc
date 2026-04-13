#include <algorithm>
#include <iostream>
using namespace std;
int num[1003];
int d[1003];

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i=1; i<=n; i++) cin >> num[i];

    d[1] = num[1];

    for (int i=2; i<=n; i++) {
        int mx = num[i];
        for (int j=1; j<i; j++) {
            if (num[j] < num[i]) mx = max(mx, d[j] + num[i]);
        }
        d[i] = mx;
    }

    cout << *max_element(d+1,d+n+1);
}