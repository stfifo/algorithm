#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, i, x;
    cin >> n >> m;
    if (n>m) swap(n,m);
    if (n == m || m-n == 1) cout << 0;
    else {
        cout << m-n-1 << '\n';
        for (i=n+1; i < m; ++i) cout << i << ' ';
    }
}
