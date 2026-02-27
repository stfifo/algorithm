#include <bits/stdc++.h>
using namespace std;

// d[i] = 2 x i 크기의 직사각형을 채우는 방법의 수
int d[1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    d[1] = 1;
    d[2] = 2;

    for (int i=3; i<=n; ++i) {
        d[i] = (d[i-1] + d[i-2]) % 10007;
    }

    cout << d[n];
    
}